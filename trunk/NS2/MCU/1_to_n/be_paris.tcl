set ns [new Simulator]

set nd [open out.tr w]
$ns trace-all $nd
####
set linkBW 100Mb
set verbose 1

	if {$verbose} { 
		puts "creating nodes..." 
	}
		for {set i 0} {$i < 20} {incr i} {
			set n($i) [$ns node]
	}

	# EDGES (from-node to-node length a b):
	if {$verbose} { 
		puts -nonewline "Creating links 0..."
		flush stdout 
	}
	$ns duplex-link $n(0) $n(12) $linkBW 230ms DropTail
	$ns duplex-link $n(0) $n(9) $linkBW 160ms DropTail
	$ns duplex-link $n(0) $n(7) $linkBW 60ms DropTail
	$ns duplex-link $n(0) $n(2) $linkBW 200ms DropTail
	$ns duplex-link $n(0) $n(1) $linkBW 180ms DropTail
	$ns duplex-link $n(1) $n(15) $linkBW 60ms DropTail
	$ns duplex-link $n(1) $n(14) $linkBW 120ms DropTail
	$ns duplex-link $n(2) $n(3) $linkBW 100ms DropTail
	$ns duplex-link $n(2) $n(4) $linkBW 140ms DropTail
	$ns duplex-link $n(3) $n(5) $linkBW 150ms DropTail
	if {$verbose} { puts -nonewline "10..."; flush stdout }
	$ns duplex-link $n(4) $n(5) $linkBW 30ms DropTail
	$ns duplex-link $n(5) $n(6) $linkBW 220ms DropTail
	$ns duplex-link $n(8) $n(9) $linkBW 40ms DropTail
	$ns duplex-link $n(8) $n(10) $linkBW 260ms DropTail
	$ns duplex-link $n(11) $n(12) $linkBW 270ms DropTail
	$ns duplex-link $n(11) $n(13) $linkBW 70ms DropTail
	$ns duplex-link $n(12) $n(13) $linkBW 230ms DropTail
	$ns duplex-link $n(15) $n(17) $linkBW 90ms DropTail
	$ns duplex-link $n(15) $n(19) $linkBW 280ms DropTail
	$ns duplex-link $n(16) $n(18) $linkBW 160ms DropTail
	if {$verbose} { puts -nonewline "20..."; flush stdout }
	$ns duplex-link $n(17) $n(18) $linkBW 140ms DropTail
	$ns duplex-link $n(18) $n(19) $linkBW 160ms DropTail

	if {$verbose} { 
		puts -nonewline "22..."
		flush stdout
		puts "starting"
	}
####
set max_fragmented_size   1024

#add udp header(8 bytes) and IP header (20bytes)
set packetSize	1052

set s1 [$ns node]
set s2 [$ns node]
set mcu [$ns node]

$ns duplex-link  $s1 $n(0)  100Mb   1ms DropTail
$ns duplex-link  $s2 $n(1)  100Mb   1ms DropTail
$ns duplex-link  $n(18) $mcu  100Mb   1ms DropTail

set udp1 [new Agent/myUDP]
$ns attach-agent $s1 $udp1
$udp1 set packetSize_ $packetSize
$udp1 set_filename sd_paris_1

set udp2 [new Agent/myUDP]
$ns attach-agent $s2 $udp2
$udp1 set packetSize_ $packetSize
$udp1 set_filename sd_paris_2

set null1 [new Agent/myEvalvid_Sink] 
$ns attach-agent $mcu $null1
$ns connect $udp1 $null1
$null1 set_filename rd_paris_1

set null2 [new Agent/myEvalvid_Sink] 
$ns attach-agent $mcu $null2
$ns connect $udp2 $null2
$null2 set_filename rd_paris_2


set original_file_name st_paris
set trace_file_name video1.dat
set original_file_id [open $original_file_name r]
set trace_file_id [open $trace_file_name w]

set pre_time 0

while {[eof $original_file_id] == 0} {
    gets $original_file_id current_line
     
    scan $current_line "%d%s%d%d%f" no_ frametype_ length_ tmp1_ tmp2_
    set time [expr int(($tmp2_ - $pre_time)*1000000.0)]
          
    if { $frametype_ == "I" } {
  	set type_v 1
  	set prio_p 0
    }	

    if { $frametype_ == "P" } {
  	set type_v 2
  	set prio_p 0
    }	

    if { $frametype_ == "B" } {
  	set type_v 3
  	set prio_p 0
    }	
    
    if { $frametype_ == "H" } {
  	set type_v 1
  	set prio_p 0
    }

    puts  $trace_file_id "$time $length_ $type_v $prio_p $max_fragmented_size"
    set pre_time $tmp2_
}

close $original_file_id
close $trace_file_id
set end_sim_time $tmp2_
puts "$end_sim_time"

set trace_file_1 [new Tracefile]
$trace_file_1 filename $trace_file_name

set trace_file_2 [new Tracefile]
$trace_file_2 filename $trace_file_name

set video1 [new Application/Traffic/myEvalvid]
$video1 attach-agent $udp1
$video1 attach-tracefile $trace_file_1

set video2 [new Application/Traffic/myEvalvid]
$video2 attach-agent $udp2
$video2 attach-tracefile $trace_file_2


proc finish {} {
        global ns nd
        $ns flush-trace
        close $nd
        exit 0
}



$ns at 0.0 "$video1 start"
$ns at 0.0 "$video2 start"
$ns at $end_sim_time "$video1 stop"
$ns at $end_sim_time "$video2 stop"
$ns at [expr $end_sim_time + 10.0] "$null1 closefile"
$ns at [expr $end_sim_time + 10.0] "$null2 closefile"
$ns at [expr $end_sim_time + 11.0] "finish"
 

$ns run
