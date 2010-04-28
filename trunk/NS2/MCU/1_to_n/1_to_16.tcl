set ns [new Simulator]

set nd [open out.tr w]
#$ns trace-all $nd
####
set linkBW 100Mb
set verbose 1

	set verbose 1

	if {$verbose} { 
		puts "creating nodes..." 
	}
		for {set i 0} {$i < 1250} {incr i} {
			set n($i) [$ns node]
	}

	# EDGES (from-node to-node length a b):
	if {$verbose} { 
		puts -nonewline "Creating links 0..."
		flush stdout 
	}
	$ns duplex-link $n(0) $n(43) $linkBW 2ms DropTail
	$ns duplex-link $n(0) $n(27) $linkBW 4ms DropTail
	$ns duplex-link $n(0) $n(25) $linkBW 1ms DropTail
	$ns duplex-link $n(0) $n(5) $linkBW 6ms DropTail
	$ns duplex-link $n(0) $n(7) $linkBW 6ms DropTail
	$ns duplex-link $n(0) $n(8) $linkBW 2ms DropTail
	$ns duplex-link $n(0) $n(9) $linkBW 6ms DropTail
	$ns duplex-link $n(1) $n(553) $linkBW 6ms DropTail
	$ns duplex-link $n(1) $n(96) $linkBW 3ms DropTail
	$ns duplex-link $n(1) $n(89) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "10..."; flush stdout }
	$ns duplex-link $n(1) $n(78) $linkBW 3ms DropTail
	$ns duplex-link $n(1) $n(63) $linkBW 5ms DropTail
	$ns duplex-link $n(1) $n(60) $linkBW 3ms DropTail
	$ns duplex-link $n(1) $n(3) $linkBW 3ms DropTail
	$ns duplex-link $n(1) $n(5) $linkBW 4ms DropTail
	$ns duplex-link $n(1) $n(6) $linkBW 2ms DropTail
	$ns duplex-link $n(1) $n(7) $linkBW 6ms DropTail
	$ns duplex-link $n(1) $n(8) $linkBW 6ms DropTail
	$ns duplex-link $n(1) $n(10) $linkBW 1ms DropTail
	$ns duplex-link $n(2) $n(110) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "20..."; flush stdout }
	$ns duplex-link $n(2) $n(3) $linkBW 1ms DropTail
	$ns duplex-link $n(2) $n(4) $linkBW 6ms DropTail
	$ns duplex-link $n(2) $n(5) $linkBW 1ms DropTail
	$ns duplex-link $n(2) $n(8) $linkBW 1ms DropTail
	$ns duplex-link $n(2) $n(10) $linkBW 3ms DropTail
	$ns duplex-link $n(3) $n(128) $linkBW 3ms DropTail
	$ns duplex-link $n(3) $n(4) $linkBW 4ms DropTail
	$ns duplex-link $n(3) $n(5) $linkBW 4ms DropTail
	$ns duplex-link $n(3) $n(7) $linkBW 5ms DropTail
	$ns duplex-link $n(3) $n(10) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "30..."; flush stdout }
	$ns duplex-link $n(4) $n(775) $linkBW 6ms DropTail
	$ns duplex-link $n(4) $n(141) $linkBW 2ms DropTail
	$ns duplex-link $n(4) $n(5) $linkBW 2ms DropTail
	$ns duplex-link $n(4) $n(7) $linkBW 2ms DropTail
	$ns duplex-link $n(4) $n(10) $linkBW 4ms DropTail
	$ns duplex-link $n(5) $n(157) $linkBW 1ms DropTail
	$ns duplex-link $n(5) $n(146) $linkBW 2ms DropTail
	$ns duplex-link $n(5) $n(7) $linkBW 4ms DropTail
	$ns duplex-link $n(5) $n(9) $linkBW 6ms DropTail
	$ns duplex-link $n(6) $n(195) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "40..."; flush stdout }
	$ns duplex-link $n(6) $n(184) $linkBW 2ms DropTail
	$ns duplex-link $n(6) $n(179) $linkBW 1ms DropTail
	$ns duplex-link $n(6) $n(7) $linkBW 1ms DropTail
	$ns duplex-link $n(6) $n(9) $linkBW 4ms DropTail
	$ns duplex-link $n(6) $n(10) $linkBW 3ms DropTail
	$ns duplex-link $n(7) $n(555) $linkBW 1ms DropTail
	$ns duplex-link $n(7) $n(783) $linkBW 6ms DropTail
	$ns duplex-link $n(7) $n(207) $linkBW 1ms DropTail
	$ns duplex-link $n(7) $n(8) $linkBW 4ms DropTail
	$ns duplex-link $n(7) $n(9) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "50..."; flush stdout }
	$ns duplex-link $n(7) $n(10) $linkBW 6ms DropTail
	$ns duplex-link $n(8) $n(1004) $linkBW 6ms DropTail
	$ns duplex-link $n(8) $n(225) $linkBW 2ms DropTail
	$ns duplex-link $n(8) $n(9) $linkBW 6ms DropTail
	$ns duplex-link $n(8) $n(10) $linkBW 5ms DropTail
	$ns duplex-link $n(9) $n(231) $linkBW 2ms DropTail
	$ns duplex-link $n(10) $n(1002) $linkBW 6ms DropTail
	$ns duplex-link $n(10) $n(269) $linkBW 3ms DropTail
	$ns duplex-link $n(10) $n(258) $linkBW 3ms DropTail
	$ns duplex-link $n(10) $n(252) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "60..."; flush stdout }
	$ns duplex-link $n(11) $n(12) $linkBW 1ms DropTail
	$ns duplex-link $n(11) $n(13) $linkBW 1ms DropTail
	$ns duplex-link $n(11) $n(14) $linkBW 2ms DropTail
	$ns duplex-link $n(11) $n(16) $linkBW 1ms DropTail
	$ns duplex-link $n(11) $n(18) $linkBW 4ms DropTail
	$ns duplex-link $n(11) $n(20) $linkBW 1ms DropTail
	$ns duplex-link $n(11) $n(21) $linkBW 1ms DropTail
	$ns duplex-link $n(11) $n(22) $linkBW 2ms DropTail
	$ns duplex-link $n(11) $n(25) $linkBW 2ms DropTail
	$ns duplex-link $n(12) $n(13) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "70..."; flush stdout }
	$ns duplex-link $n(12) $n(16) $linkBW 1ms DropTail
	$ns duplex-link $n(12) $n(19) $linkBW 3ms DropTail
	$ns duplex-link $n(12) $n(20) $linkBW 1ms DropTail
	$ns duplex-link $n(12) $n(21) $linkBW 1ms DropTail
	$ns duplex-link $n(12) $n(25) $linkBW 5ms DropTail
	$ns duplex-link $n(13) $n(14) $linkBW 2ms DropTail
	$ns duplex-link $n(13) $n(15) $linkBW 1ms DropTail
	$ns duplex-link $n(13) $n(17) $linkBW 2ms DropTail
	$ns duplex-link $n(13) $n(21) $linkBW 2ms DropTail
	$ns duplex-link $n(13) $n(22) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "80..."; flush stdout }
	$ns duplex-link $n(13) $n(24) $linkBW 3ms DropTail
	$ns duplex-link $n(13) $n(25) $linkBW 2ms DropTail
	$ns duplex-link $n(14) $n(15) $linkBW 1ms DropTail
	$ns duplex-link $n(14) $n(16) $linkBW 5ms DropTail
	$ns duplex-link $n(14) $n(20) $linkBW 1ms DropTail
	$ns duplex-link $n(14) $n(23) $linkBW 2ms DropTail
	$ns duplex-link $n(14) $n(24) $linkBW 1ms DropTail
	$ns duplex-link $n(14) $n(25) $linkBW 1ms DropTail
	$ns duplex-link $n(15) $n(19) $linkBW 3ms DropTail
	$ns duplex-link $n(15) $n(20) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "90..."; flush stdout }
	$ns duplex-link $n(15) $n(23) $linkBW 3ms DropTail
	$ns duplex-link $n(15) $n(24) $linkBW 2ms DropTail
	$ns duplex-link $n(16) $n(17) $linkBW 3ms DropTail
	$ns duplex-link $n(16) $n(18) $linkBW 3ms DropTail
	$ns duplex-link $n(16) $n(21) $linkBW 1ms DropTail
	$ns duplex-link $n(16) $n(25) $linkBW 2ms DropTail
	$ns duplex-link $n(17) $n(18) $linkBW 1ms DropTail
	$ns duplex-link $n(17) $n(19) $linkBW 1ms DropTail
	$ns duplex-link $n(17) $n(21) $linkBW 1ms DropTail
	$ns duplex-link $n(17) $n(24) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "100..."; flush stdout }
	$ns duplex-link $n(18) $n(20) $linkBW 2ms DropTail
	$ns duplex-link $n(18) $n(21) $linkBW 4ms DropTail
	$ns duplex-link $n(18) $n(22) $linkBW 2ms DropTail
	$ns duplex-link $n(18) $n(23) $linkBW 1ms DropTail
	$ns duplex-link $n(19) $n(24) $linkBW 5ms DropTail
	$ns duplex-link $n(19) $n(25) $linkBW 2ms DropTail
	$ns duplex-link $n(20) $n(21) $linkBW 3ms DropTail
	$ns duplex-link $n(20) $n(22) $linkBW 2ms DropTail
	$ns duplex-link $n(20) $n(23) $linkBW 4ms DropTail
	$ns duplex-link $n(20) $n(25) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "110..."; flush stdout }
	$ns duplex-link $n(21) $n(23) $linkBW 1ms DropTail
	$ns duplex-link $n(21) $n(24) $linkBW 1ms DropTail
	$ns duplex-link $n(22) $n(25) $linkBW 2ms DropTail
	$ns duplex-link $n(24) $n(25) $linkBW 1ms DropTail
	$ns duplex-link $n(26) $n(27) $linkBW 2ms DropTail
	$ns duplex-link $n(26) $n(28) $linkBW 3ms DropTail
	$ns duplex-link $n(26) $n(35) $linkBW 1ms DropTail
	$ns duplex-link $n(26) $n(36) $linkBW 1ms DropTail
	$ns duplex-link $n(27) $n(29) $linkBW 1ms DropTail
	$ns duplex-link $n(27) $n(36) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "120..."; flush stdout }
	$ns duplex-link $n(28) $n(31) $linkBW 1ms DropTail
	$ns duplex-link $n(28) $n(32) $linkBW 1ms DropTail
	$ns duplex-link $n(28) $n(34) $linkBW 1ms DropTail
	$ns duplex-link $n(28) $n(35) $linkBW 3ms DropTail
	$ns duplex-link $n(29) $n(31) $linkBW 3ms DropTail
	$ns duplex-link $n(29) $n(33) $linkBW 1ms DropTail
	$ns duplex-link $n(29) $n(36) $linkBW 5ms DropTail
	$ns duplex-link $n(30) $n(32) $linkBW 1ms DropTail
	$ns duplex-link $n(30) $n(33) $linkBW 3ms DropTail
	$ns duplex-link $n(30) $n(34) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "130..."; flush stdout }
	$ns duplex-link $n(31) $n(34) $linkBW 1ms DropTail
	$ns duplex-link $n(31) $n(35) $linkBW 2ms DropTail
	$ns duplex-link $n(31) $n(36) $linkBW 2ms DropTail
	$ns duplex-link $n(32) $n(35) $linkBW 3ms DropTail
	$ns duplex-link $n(33) $n(35) $linkBW 1ms DropTail
	$ns duplex-link $n(34) $n(35) $linkBW 2ms DropTail
	$ns duplex-link $n(34) $n(36) $linkBW 5ms DropTail
	$ns duplex-link $n(35) $n(36) $linkBW 1ms DropTail
	$ns duplex-link $n(37) $n(38) $linkBW 1ms DropTail
	$ns duplex-link $n(37) $n(43) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "140..."; flush stdout }
	$ns duplex-link $n(37) $n(46) $linkBW 1ms DropTail
	$ns duplex-link $n(38) $n(39) $linkBW 4ms DropTail
	$ns duplex-link $n(38) $n(40) $linkBW 1ms DropTail
	$ns duplex-link $n(38) $n(42) $linkBW 3ms DropTail
	$ns duplex-link $n(38) $n(43) $linkBW 3ms DropTail
	$ns duplex-link $n(38) $n(44) $linkBW 2ms DropTail
	$ns duplex-link $n(38) $n(45) $linkBW 1ms DropTail
	$ns duplex-link $n(38) $n(46) $linkBW 1ms DropTail
	$ns duplex-link $n(39) $n(42) $linkBW 1ms DropTail
	$ns duplex-link $n(40) $n(44) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "150..."; flush stdout }
	$ns duplex-link $n(40) $n(46) $linkBW 2ms DropTail
	$ns duplex-link $n(41) $n(42) $linkBW 1ms DropTail
	$ns duplex-link $n(41) $n(44) $linkBW 3ms DropTail
	$ns duplex-link $n(42) $n(44) $linkBW 2ms DropTail
	$ns duplex-link $n(42) $n(45) $linkBW 2ms DropTail
	$ns duplex-link $n(42) $n(46) $linkBW 2ms DropTail
	$ns duplex-link $n(43) $n(46) $linkBW 3ms DropTail
	$ns duplex-link $n(47) $n(55) $linkBW 1ms DropTail
	$ns duplex-link $n(47) $n(56) $linkBW 1ms DropTail
	$ns duplex-link $n(47) $n(57) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "160..."; flush stdout }
	$ns duplex-link $n(47) $n(58) $linkBW 1ms DropTail
	$ns duplex-link $n(48) $n(53) $linkBW 2ms DropTail
	$ns duplex-link $n(48) $n(55) $linkBW 2ms DropTail
	$ns duplex-link $n(48) $n(56) $linkBW 1ms DropTail
	$ns duplex-link $n(48) $n(58) $linkBW 1ms DropTail
	$ns duplex-link $n(48) $n(59) $linkBW 2ms DropTail
	$ns duplex-link $n(49) $n(50) $linkBW 2ms DropTail
	$ns duplex-link $n(49) $n(55) $linkBW 1ms DropTail
	$ns duplex-link $n(49) $n(56) $linkBW 2ms DropTail
	$ns duplex-link $n(49) $n(57) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "170..."; flush stdout }
	$ns duplex-link $n(49) $n(59) $linkBW 3ms DropTail
	$ns duplex-link $n(49) $n(60) $linkBW 2ms DropTail
	$ns duplex-link $n(50) $n(52) $linkBW 1ms DropTail
	$ns duplex-link $n(50) $n(54) $linkBW 1ms DropTail
	$ns duplex-link $n(50) $n(55) $linkBW 3ms DropTail
	$ns duplex-link $n(50) $n(57) $linkBW 5ms DropTail
	$ns duplex-link $n(50) $n(59) $linkBW 1ms DropTail
	$ns duplex-link $n(51) $n(52) $linkBW 1ms DropTail
	$ns duplex-link $n(51) $n(55) $linkBW 2ms DropTail
	$ns duplex-link $n(51) $n(56) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "180..."; flush stdout }
	$ns duplex-link $n(51) $n(57) $linkBW 1ms DropTail
	$ns duplex-link $n(51) $n(60) $linkBW 2ms DropTail
	$ns duplex-link $n(52) $n(53) $linkBW 2ms DropTail
	$ns duplex-link $n(52) $n(54) $linkBW 1ms DropTail
	$ns duplex-link $n(52) $n(55) $linkBW 71ms DropTail
	$ns duplex-link $n(52) $n(56) $linkBW 3ms DropTail
	$ns duplex-link $n(52) $n(59) $linkBW 1ms DropTail
	$ns duplex-link $n(53) $n(58) $linkBW 2ms DropTail
	$ns duplex-link $n(53) $n(59) $linkBW 2ms DropTail
	$ns duplex-link $n(53) $n(60) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "190..."; flush stdout }
	$ns duplex-link $n(54) $n(55) $linkBW 1ms DropTail
	$ns duplex-link $n(54) $n(58) $linkBW 1ms DropTail
	$ns duplex-link $n(57) $n(58) $linkBW 3ms DropTail
	$ns duplex-link $n(57) $n(59) $linkBW 1ms DropTail
	$ns duplex-link $n(58) $n(60) $linkBW 2ms DropTail
	$ns duplex-link $n(59) $n(60) $linkBW 1ms DropTail
	$ns duplex-link $n(61) $n(62) $linkBW 1ms DropTail
	$ns duplex-link $n(61) $n(64) $linkBW 2ms DropTail
	$ns duplex-link $n(61) $n(68) $linkBW 1ms DropTail
	$ns duplex-link $n(61) $n(70) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "200..."; flush stdout }
	$ns duplex-link $n(61) $n(74) $linkBW 1ms DropTail
	$ns duplex-link $n(62) $n(63) $linkBW 1ms DropTail
	$ns duplex-link $n(62) $n(67) $linkBW 2ms DropTail
	$ns duplex-link $n(62) $n(69) $linkBW 1ms DropTail
	$ns duplex-link $n(62) $n(70) $linkBW 2ms DropTail
	$ns duplex-link $n(62) $n(72) $linkBW 1ms DropTail
	$ns duplex-link $n(62) $n(73) $linkBW 3ms DropTail
	$ns duplex-link $n(63) $n(66) $linkBW 1ms DropTail
	$ns duplex-link $n(63) $n(68) $linkBW 2ms DropTail
	$ns duplex-link $n(63) $n(70) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "210..."; flush stdout }
	$ns duplex-link $n(63) $n(71) $linkBW 1ms DropTail
	$ns duplex-link $n(63) $n(74) $linkBW 2ms DropTail
	$ns duplex-link $n(64) $n(65) $linkBW 4ms DropTail
	$ns duplex-link $n(64) $n(66) $linkBW 1ms DropTail
	$ns duplex-link $n(64) $n(67) $linkBW 3ms DropTail
	$ns duplex-link $n(64) $n(69) $linkBW 3ms DropTail
	$ns duplex-link $n(65) $n(71) $linkBW 1ms DropTail
	$ns duplex-link $n(65) $n(74) $linkBW 2ms DropTail
	$ns duplex-link $n(66) $n(69) $linkBW 2ms DropTail
	$ns duplex-link $n(66) $n(70) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "220..."; flush stdout }
	$ns duplex-link $n(66) $n(71) $linkBW 1ms DropTail
	$ns duplex-link $n(67) $n(70) $linkBW 2ms DropTail
	$ns duplex-link $n(67) $n(72) $linkBW 1ms DropTail
	$ns duplex-link $n(67) $n(73) $linkBW 4ms DropTail
	$ns duplex-link $n(67) $n(74) $linkBW 3ms DropTail
	$ns duplex-link $n(68) $n(69) $linkBW 2ms DropTail
	$ns duplex-link $n(69) $n(70) $linkBW 1ms DropTail
	$ns duplex-link $n(69) $n(72) $linkBW 2ms DropTail
	$ns duplex-link $n(69) $n(74) $linkBW 3ms DropTail
	$ns duplex-link $n(70) $n(71) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "230..."; flush stdout }
	$ns duplex-link $n(70) $n(72) $linkBW 2ms DropTail
	$ns duplex-link $n(70) $n(74) $linkBW 3ms DropTail
	$ns duplex-link $n(71) $n(73) $linkBW 1ms DropTail
	$ns duplex-link $n(72) $n(73) $linkBW 2ms DropTail
	$ns duplex-link $n(73) $n(74) $linkBW 2ms DropTail
	$ns duplex-link $n(75) $n(77) $linkBW 1ms DropTail
	$ns duplex-link $n(75) $n(78) $linkBW 2ms DropTail
	$ns duplex-link $n(75) $n(80) $linkBW 5ms DropTail
	$ns duplex-link $n(76) $n(78) $linkBW 3ms DropTail
	$ns duplex-link $n(76) $n(79) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "240..."; flush stdout }
	$ns duplex-link $n(76) $n(80) $linkBW 3ms DropTail
	$ns duplex-link $n(76) $n(81) $linkBW 1ms DropTail
	$ns duplex-link $n(76) $n(82) $linkBW 3ms DropTail
	$ns duplex-link $n(77) $n(78) $linkBW 1ms DropTail
	$ns duplex-link $n(77) $n(80) $linkBW 3ms DropTail
	$ns duplex-link $n(77) $n(81) $linkBW 2ms DropTail
	$ns duplex-link $n(78) $n(79) $linkBW 1ms DropTail
	$ns duplex-link $n(78) $n(80) $linkBW 2ms DropTail
	$ns duplex-link $n(79) $n(82) $linkBW 1ms DropTail
	$ns duplex-link $n(80) $n(82) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "250..."; flush stdout }
	$ns duplex-link $n(81) $n(82) $linkBW 1ms DropTail
	$ns duplex-link $n(83) $n(84) $linkBW 2ms DropTail
	$ns duplex-link $n(83) $n(87) $linkBW 2ms DropTail
	$ns duplex-link $n(83) $n(88) $linkBW 1ms DropTail
	$ns duplex-link $n(83) $n(89) $linkBW 1ms DropTail
	$ns duplex-link $n(83) $n(93) $linkBW 3ms DropTail
	$ns duplex-link $n(83) $n(94) $linkBW 1ms DropTail
	$ns duplex-link $n(83) $n(95) $linkBW 1ms DropTail
	$ns duplex-link $n(84) $n(85) $linkBW 1ms DropTail
	$ns duplex-link $n(84) $n(87) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "260..."; flush stdout }
	$ns duplex-link $n(84) $n(88) $linkBW 5ms DropTail
	$ns duplex-link $n(84) $n(91) $linkBW 5ms DropTail
	$ns duplex-link $n(84) $n(92) $linkBW 1ms DropTail
	$ns duplex-link $n(84) $n(93) $linkBW 1ms DropTail
	$ns duplex-link $n(84) $n(94) $linkBW 1ms DropTail
	$ns duplex-link $n(85) $n(90) $linkBW 1ms DropTail
	$ns duplex-link $n(85) $n(92) $linkBW 1ms DropTail
	$ns duplex-link $n(85) $n(95) $linkBW 2ms DropTail
	$ns duplex-link $n(86) $n(87) $linkBW 1ms DropTail
	$ns duplex-link $n(86) $n(88) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "270..."; flush stdout }
	$ns duplex-link $n(86) $n(89) $linkBW 5ms DropTail
	$ns duplex-link $n(86) $n(90) $linkBW 3ms DropTail
	$ns duplex-link $n(86) $n(92) $linkBW 1ms DropTail
	$ns duplex-link $n(86) $n(94) $linkBW 2ms DropTail
	$ns duplex-link $n(86) $n(95) $linkBW 3ms DropTail
	$ns duplex-link $n(87) $n(89) $linkBW 2ms DropTail
	$ns duplex-link $n(87) $n(94) $linkBW 3ms DropTail
	$ns duplex-link $n(87) $n(95) $linkBW 1ms DropTail
	$ns duplex-link $n(88) $n(91) $linkBW 2ms DropTail
	$ns duplex-link $n(88) $n(92) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "280..."; flush stdout }
	$ns duplex-link $n(89) $n(91) $linkBW 1ms DropTail
	$ns duplex-link $n(89) $n(92) $linkBW 3ms DropTail
	$ns duplex-link $n(90) $n(91) $linkBW 2ms DropTail
	$ns duplex-link $n(90) $n(93) $linkBW 2ms DropTail
	$ns duplex-link $n(90) $n(94) $linkBW 1ms DropTail
	$ns duplex-link $n(90) $n(95) $linkBW 2ms DropTail
	$ns duplex-link $n(91) $n(92) $linkBW 2ms DropTail
	$ns duplex-link $n(91) $n(94) $linkBW 1ms DropTail
	$ns duplex-link $n(92) $n(95) $linkBW 1ms DropTail
	$ns duplex-link $n(93) $n(94) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "290..."; flush stdout }
	$ns duplex-link $n(94) $n(95) $linkBW 2ms DropTail
	$ns duplex-link $n(96) $n(97) $linkBW 1ms DropTail
	$ns duplex-link $n(96) $n(99) $linkBW 1ms DropTail
	$ns duplex-link $n(96) $n(100) $linkBW 2ms DropTail
	$ns duplex-link $n(96) $n(104) $linkBW 4ms DropTail
	$ns duplex-link $n(97) $n(98) $linkBW 3ms DropTail
	$ns duplex-link $n(97) $n(102) $linkBW 2ms DropTail
	$ns duplex-link $n(97) $n(103) $linkBW 1ms DropTail
	$ns duplex-link $n(97) $n(105) $linkBW 2ms DropTail
	$ns duplex-link $n(98) $n(99) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "300..."; flush stdout }
	$ns duplex-link $n(98) $n(102) $linkBW 2ms DropTail
	$ns duplex-link $n(98) $n(103) $linkBW 3ms DropTail
	$ns duplex-link $n(98) $n(104) $linkBW 2ms DropTail
	$ns duplex-link $n(98) $n(105) $linkBW 1ms DropTail
	$ns duplex-link $n(99) $n(100) $linkBW 1ms DropTail
	$ns duplex-link $n(99) $n(101) $linkBW 2ms DropTail
	$ns duplex-link $n(99) $n(102) $linkBW 2ms DropTail
	$ns duplex-link $n(99) $n(103) $linkBW 1ms DropTail
	$ns duplex-link $n(99) $n(104) $linkBW 1ms DropTail
	$ns duplex-link $n(99) $n(106) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "310..."; flush stdout }
	$ns duplex-link $n(100) $n(102) $linkBW 1ms DropTail
	$ns duplex-link $n(100) $n(103) $linkBW 5ms DropTail
	$ns duplex-link $n(100) $n(105) $linkBW 3ms DropTail
	$ns duplex-link $n(104) $n(106) $linkBW 1ms DropTail
	$ns duplex-link $n(107) $n(109) $linkBW 5ms DropTail
	$ns duplex-link $n(107) $n(110) $linkBW 1ms DropTail
	$ns duplex-link $n(107) $n(111) $linkBW 2ms DropTail
	$ns duplex-link $n(107) $n(112) $linkBW 3ms DropTail
	$ns duplex-link $n(107) $n(114) $linkBW 1ms DropTail
	$ns duplex-link $n(107) $n(116) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "320..."; flush stdout }
	$ns duplex-link $n(107) $n(118) $linkBW 3ms DropTail
	$ns duplex-link $n(108) $n(109) $linkBW 2ms DropTail
	$ns duplex-link $n(108) $n(114) $linkBW 3ms DropTail
	$ns duplex-link $n(108) $n(115) $linkBW 3ms DropTail
	$ns duplex-link $n(108) $n(118) $linkBW 3ms DropTail
	$ns duplex-link $n(109) $n(110) $linkBW 1ms DropTail
	$ns duplex-link $n(109) $n(112) $linkBW 1ms DropTail
	$ns duplex-link $n(109) $n(114) $linkBW 2ms DropTail
	$ns duplex-link $n(109) $n(117) $linkBW 2ms DropTail
	$ns duplex-link $n(109) $n(118) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "330..."; flush stdout }
	$ns duplex-link $n(110) $n(111) $linkBW 1ms DropTail
	$ns duplex-link $n(110) $n(113) $linkBW 1ms DropTail
	$ns duplex-link $n(110) $n(118) $linkBW 2ms DropTail
	$ns duplex-link $n(111) $n(113) $linkBW 2ms DropTail
	$ns duplex-link $n(111) $n(116) $linkBW 1ms DropTail
	$ns duplex-link $n(112) $n(114) $linkBW 2ms DropTail
	$ns duplex-link $n(112) $n(116) $linkBW 3ms DropTail
	$ns duplex-link $n(112) $n(117) $linkBW 1ms DropTail
	$ns duplex-link $n(113) $n(116) $linkBW 1ms DropTail
	$ns duplex-link $n(113) $n(117) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "340..."; flush stdout }
	$ns duplex-link $n(114) $n(115) $linkBW 2ms DropTail
	$ns duplex-link $n(114) $n(118) $linkBW 3ms DropTail
	$ns duplex-link $n(115) $n(118) $linkBW 3ms DropTail
	$ns duplex-link $n(116) $n(117) $linkBW 2ms DropTail
	$ns duplex-link $n(119) $n(120) $linkBW 1ms DropTail
	$ns duplex-link $n(119) $n(122) $linkBW 2ms DropTail
	$ns duplex-link $n(119) $n(123) $linkBW 1ms DropTail
	$ns duplex-link $n(119) $n(125) $linkBW 1ms DropTail
	$ns duplex-link $n(119) $n(126) $linkBW 1ms DropTail
	$ns duplex-link $n(119) $n(127) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "350..."; flush stdout }
	$ns duplex-link $n(120) $n(121) $linkBW 4ms DropTail
	$ns duplex-link $n(120) $n(122) $linkBW 1ms DropTail
	$ns duplex-link $n(120) $n(123) $linkBW 3ms DropTail
	$ns duplex-link $n(120) $n(126) $linkBW 2ms DropTail
	$ns duplex-link $n(120) $n(128) $linkBW 3ms DropTail
	$ns duplex-link $n(121) $n(125) $linkBW 1ms DropTail
	$ns duplex-link $n(122) $n(124) $linkBW 1ms DropTail
	$ns duplex-link $n(122) $n(128) $linkBW 1ms DropTail
	$ns duplex-link $n(123) $n(124) $linkBW 1ms DropTail
	$ns duplex-link $n(123) $n(126) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "360..."; flush stdout }
	$ns duplex-link $n(123) $n(127) $linkBW 1ms DropTail
	$ns duplex-link $n(123) $n(128) $linkBW 1ms DropTail
	$ns duplex-link $n(124) $n(125) $linkBW 2ms DropTail
	$ns duplex-link $n(124) $n(128) $linkBW 1ms DropTail
	$ns duplex-link $n(124) $n(130) $linkBW 2ms DropTail
	$ns duplex-link $n(126) $n(127) $linkBW 1ms DropTail
	$ns duplex-link $n(126) $n(128) $linkBW 1ms DropTail
	$ns duplex-link $n(127) $n(130) $linkBW 2ms DropTail
	$ns duplex-link $n(128) $n(130) $linkBW 3ms DropTail
	$ns duplex-link $n(129) $n(130) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "370..."; flush stdout }
	$ns duplex-link $n(131) $n(133) $linkBW 1ms DropTail
	$ns duplex-link $n(131) $n(135) $linkBW 2ms DropTail
	$ns duplex-link $n(131) $n(138) $linkBW 3ms DropTail
	$ns duplex-link $n(131) $n(140) $linkBW 5ms DropTail
	$ns duplex-link $n(131) $n(141) $linkBW 1ms DropTail
	$ns duplex-link $n(131) $n(142) $linkBW 2ms DropTail
	$ns duplex-link $n(132) $n(135) $linkBW 1ms DropTail
	$ns duplex-link $n(132) $n(138) $linkBW 3ms DropTail
	$ns duplex-link $n(132) $n(141) $linkBW 1ms DropTail
	$ns duplex-link $n(133) $n(136) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "380..."; flush stdout }
	$ns duplex-link $n(133) $n(139) $linkBW 2ms DropTail
	$ns duplex-link $n(133) $n(140) $linkBW 2ms DropTail
	$ns duplex-link $n(133) $n(141) $linkBW 1ms DropTail
	$ns duplex-link $n(134) $n(135) $linkBW 3ms DropTail
	$ns duplex-link $n(134) $n(137) $linkBW 1ms DropTail
	$ns duplex-link $n(134) $n(140) $linkBW 1ms DropTail
	$ns duplex-link $n(134) $n(142) $linkBW 1ms DropTail
	$ns duplex-link $n(135) $n(136) $linkBW 2ms DropTail
	$ns duplex-link $n(135) $n(138) $linkBW 3ms DropTail
	$ns duplex-link $n(135) $n(139) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "390..."; flush stdout }
	$ns duplex-link $n(135) $n(141) $linkBW 2ms DropTail
	$ns duplex-link $n(135) $n(142) $linkBW 2ms DropTail
	$ns duplex-link $n(136) $n(138) $linkBW 3ms DropTail
	$ns duplex-link $n(136) $n(141) $linkBW 1ms DropTail
	$ns duplex-link $n(137) $n(138) $linkBW 3ms DropTail
	$ns duplex-link $n(137) $n(142) $linkBW 2ms DropTail
	$ns duplex-link $n(139) $n(142) $linkBW 3ms DropTail
	$ns duplex-link $n(143) $n(146) $linkBW 3ms DropTail
	$ns duplex-link $n(143) $n(148) $linkBW 1ms DropTail
	$ns duplex-link $n(143) $n(149) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "400..."; flush stdout }
	$ns duplex-link $n(143) $n(151) $linkBW 1ms DropTail
	$ns duplex-link $n(143) $n(153) $linkBW 3ms DropTail
	$ns duplex-link $n(144) $n(149) $linkBW 1ms DropTail
	$ns duplex-link $n(144) $n(152) $linkBW 2ms DropTail
	$ns duplex-link $n(145) $n(151) $linkBW 1ms DropTail
	$ns duplex-link $n(146) $n(147) $linkBW 2ms DropTail
	$ns duplex-link $n(146) $n(148) $linkBW 2ms DropTail
	$ns duplex-link $n(146) $n(150) $linkBW 3ms DropTail
	$ns duplex-link $n(146) $n(152) $linkBW 2ms DropTail
	$ns duplex-link $n(146) $n(153) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "410..."; flush stdout }
	$ns duplex-link $n(147) $n(150) $linkBW 1ms DropTail
	$ns duplex-link $n(148) $n(149) $linkBW 1ms DropTail
	$ns duplex-link $n(148) $n(150) $linkBW 2ms DropTail
	$ns duplex-link $n(148) $n(152) $linkBW 3ms DropTail
	$ns duplex-link $n(148) $n(153) $linkBW 1ms DropTail
	$ns duplex-link $n(149) $n(150) $linkBW 1ms DropTail
	$ns duplex-link $n(149) $n(153) $linkBW 1ms DropTail
	$ns duplex-link $n(150) $n(151) $linkBW 2ms DropTail
	$ns duplex-link $n(151) $n(152) $linkBW 3ms DropTail
	$ns duplex-link $n(151) $n(153) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "420..."; flush stdout }
	$ns duplex-link $n(152) $n(153) $linkBW 2ms DropTail
	$ns duplex-link $n(154) $n(156) $linkBW 1ms DropTail
	$ns duplex-link $n(154) $n(157) $linkBW 1ms DropTail
	$ns duplex-link $n(154) $n(161) $linkBW 1ms DropTail
	$ns duplex-link $n(154) $n(162) $linkBW 3ms DropTail
	$ns duplex-link $n(154) $n(163) $linkBW 1ms DropTail
	$ns duplex-link $n(154) $n(164) $linkBW 1ms DropTail
	$ns duplex-link $n(154) $n(165) $linkBW 1ms DropTail
	$ns duplex-link $n(155) $n(156) $linkBW 1ms DropTail
	$ns duplex-link $n(155) $n(157) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "430..."; flush stdout }
	$ns duplex-link $n(155) $n(158) $linkBW 1ms DropTail
	$ns duplex-link $n(155) $n(159) $linkBW 1ms DropTail
	$ns duplex-link $n(155) $n(162) $linkBW 2ms DropTail
	$ns duplex-link $n(155) $n(165) $linkBW 1ms DropTail
	$ns duplex-link $n(155) $n(166) $linkBW 1ms DropTail
	$ns duplex-link $n(156) $n(158) $linkBW 1ms DropTail
	$ns duplex-link $n(156) $n(160) $linkBW 1ms DropTail
	$ns duplex-link $n(156) $n(162) $linkBW 1ms DropTail
	$ns duplex-link $n(156) $n(163) $linkBW 2ms DropTail
	$ns duplex-link $n(156) $n(164) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "440..."; flush stdout }
	$ns duplex-link $n(157) $n(158) $linkBW 3ms DropTail
	$ns duplex-link $n(157) $n(159) $linkBW 3ms DropTail
	$ns duplex-link $n(157) $n(160) $linkBW 1ms DropTail
	$ns duplex-link $n(157) $n(161) $linkBW 4ms DropTail
	$ns duplex-link $n(157) $n(164) $linkBW 2ms DropTail
	$ns duplex-link $n(157) $n(165) $linkBW 2ms DropTail
	$ns duplex-link $n(158) $n(164) $linkBW 3ms DropTail
	$ns duplex-link $n(159) $n(160) $linkBW 2ms DropTail
	$ns duplex-link $n(159) $n(162) $linkBW 1ms DropTail
	$ns duplex-link $n(159) $n(165) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "450..."; flush stdout }
	$ns duplex-link $n(159) $n(166) $linkBW 2ms DropTail
	$ns duplex-link $n(160) $n(165) $linkBW 2ms DropTail
	$ns duplex-link $n(161) $n(163) $linkBW 1ms DropTail
	$ns duplex-link $n(162) $n(164) $linkBW 3ms DropTail
	$ns duplex-link $n(162) $n(165) $linkBW 2ms DropTail
	$ns duplex-link $n(163) $n(164) $linkBW 1ms DropTail
	$ns duplex-link $n(164) $n(166) $linkBW 1ms DropTail
	$ns duplex-link $n(167) $n(170) $linkBW 5ms DropTail
	$ns duplex-link $n(167) $n(171) $linkBW 1ms DropTail
	$ns duplex-link $n(167) $n(172) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "460..."; flush stdout }
	$ns duplex-link $n(167) $n(173) $linkBW 1ms DropTail
	$ns duplex-link $n(167) $n(174) $linkBW 2ms DropTail
	$ns duplex-link $n(167) $n(176) $linkBW 2ms DropTail
	$ns duplex-link $n(167) $n(178) $linkBW 1ms DropTail
	$ns duplex-link $n(167) $n(179) $linkBW 2ms DropTail
	$ns duplex-link $n(168) $n(169) $linkBW 1ms DropTail
	$ns duplex-link $n(168) $n(170) $linkBW 1ms DropTail
	$ns duplex-link $n(168) $n(173) $linkBW 2ms DropTail
	$ns duplex-link $n(168) $n(174) $linkBW 1ms DropTail
	$ns duplex-link $n(168) $n(175) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "470..."; flush stdout }
	$ns duplex-link $n(169) $n(170) $linkBW 1ms DropTail
	$ns duplex-link $n(169) $n(171) $linkBW 3ms DropTail
	$ns duplex-link $n(169) $n(172) $linkBW 4ms DropTail
	$ns duplex-link $n(169) $n(173) $linkBW 1ms DropTail
	$ns duplex-link $n(169) $n(175) $linkBW 2ms DropTail
	$ns duplex-link $n(169) $n(176) $linkBW 1ms DropTail
	$ns duplex-link $n(169) $n(177) $linkBW 3ms DropTail
	$ns duplex-link $n(170) $n(174) $linkBW 1ms DropTail
	$ns duplex-link $n(170) $n(175) $linkBW 1ms DropTail
	$ns duplex-link $n(170) $n(176) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "480..."; flush stdout }
	$ns duplex-link $n(171) $n(172) $linkBW 1ms DropTail
	$ns duplex-link $n(171) $n(174) $linkBW 2ms DropTail
	$ns duplex-link $n(171) $n(176) $linkBW 2ms DropTail
	$ns duplex-link $n(171) $n(179) $linkBW 3ms DropTail
	$ns duplex-link $n(172) $n(174) $linkBW 4ms DropTail
	$ns duplex-link $n(172) $n(175) $linkBW 1ms DropTail
	$ns duplex-link $n(172) $n(178) $linkBW 2ms DropTail
	$ns duplex-link $n(172) $n(179) $linkBW 1ms DropTail
	$ns duplex-link $n(173) $n(175) $linkBW 2ms DropTail
	$ns duplex-link $n(174) $n(175) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "490..."; flush stdout }
	$ns duplex-link $n(174) $n(177) $linkBW 1ms DropTail
	$ns duplex-link $n(174) $n(179) $linkBW 2ms DropTail
	$ns duplex-link $n(175) $n(176) $linkBW 1ms DropTail
	$ns duplex-link $n(176) $n(178) $linkBW 2ms DropTail
	$ns duplex-link $n(176) $n(179) $linkBW 1ms DropTail
	$ns duplex-link $n(177) $n(178) $linkBW 1ms DropTail
	$ns duplex-link $n(177) $n(179) $linkBW 1ms DropTail
	$ns duplex-link $n(180) $n(185) $linkBW 1ms DropTail
	$ns duplex-link $n(180) $n(187) $linkBW 1ms DropTail
	$ns duplex-link $n(180) $n(191) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "500..."; flush stdout }
	$ns duplex-link $n(181) $n(187) $linkBW 5ms DropTail
	$ns duplex-link $n(182) $n(184) $linkBW 1ms DropTail
	$ns duplex-link $n(182) $n(186) $linkBW 2ms DropTail
	$ns duplex-link $n(182) $n(189) $linkBW 1ms DropTail
	$ns duplex-link $n(183) $n(188) $linkBW 2ms DropTail
	$ns duplex-link $n(183) $n(189) $linkBW 4ms DropTail
	$ns duplex-link $n(184) $n(185) $linkBW 1ms DropTail
	$ns duplex-link $n(184) $n(190) $linkBW 2ms DropTail
	$ns duplex-link $n(185) $n(186) $linkBW 1ms DropTail
	$ns duplex-link $n(185) $n(188) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "510..."; flush stdout }
	$ns duplex-link $n(185) $n(190) $linkBW 1ms DropTail
	$ns duplex-link $n(186) $n(187) $linkBW 1ms DropTail
	$ns duplex-link $n(187) $n(188) $linkBW 2ms DropTail
	$ns duplex-link $n(187) $n(190) $linkBW 1ms DropTail
	$ns duplex-link $n(192) $n(195) $linkBW 1ms DropTail
	$ns duplex-link $n(192) $n(197) $linkBW 1ms DropTail
	$ns duplex-link $n(192) $n(198) $linkBW 1ms DropTail
	$ns duplex-link $n(192) $n(199) $linkBW 1ms DropTail
	$ns duplex-link $n(192) $n(201) $linkBW 1ms DropTail
	$ns duplex-link $n(192) $n(202) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "520..."; flush stdout }
	$ns duplex-link $n(193) $n(194) $linkBW 2ms DropTail
	$ns duplex-link $n(193) $n(195) $linkBW 1ms DropTail
	$ns duplex-link $n(193) $n(200) $linkBW 1ms DropTail
	$ns duplex-link $n(193) $n(202) $linkBW 5ms DropTail
	$ns duplex-link $n(194) $n(195) $linkBW 1ms DropTail
	$ns duplex-link $n(194) $n(198) $linkBW 1ms DropTail
	$ns duplex-link $n(194) $n(199) $linkBW 1ms DropTail
	$ns duplex-link $n(194) $n(202) $linkBW 5ms DropTail
	$ns duplex-link $n(195) $n(197) $linkBW 2ms DropTail
	$ns duplex-link $n(195) $n(200) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "530..."; flush stdout }
	$ns duplex-link $n(195) $n(201) $linkBW 1ms DropTail
	$ns duplex-link $n(196) $n(197) $linkBW 1ms DropTail
	$ns duplex-link $n(196) $n(198) $linkBW 1ms DropTail
	$ns duplex-link $n(196) $n(199) $linkBW 2ms DropTail
	$ns duplex-link $n(196) $n(200) $linkBW 4ms DropTail
	$ns duplex-link $n(197) $n(199) $linkBW 2ms DropTail
	$ns duplex-link $n(197) $n(201) $linkBW 1ms DropTail
	$ns duplex-link $n(198) $n(199) $linkBW 3ms DropTail
	$ns duplex-link $n(198) $n(201) $linkBW 3ms DropTail
	$ns duplex-link $n(199) $n(200) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "540..."; flush stdout }
	$ns duplex-link $n(200) $n(202) $linkBW 1ms DropTail
	$ns duplex-link $n(203) $n(205) $linkBW 1ms DropTail
	$ns duplex-link $n(203) $n(210) $linkBW 1ms DropTail
	$ns duplex-link $n(203) $n(214) $linkBW 2ms DropTail
	$ns duplex-link $n(204) $n(206) $linkBW 3ms DropTail
	$ns duplex-link $n(204) $n(210) $linkBW 2ms DropTail
	$ns duplex-link $n(204) $n(211) $linkBW 3ms DropTail
	$ns duplex-link $n(205) $n(207) $linkBW 3ms DropTail
	$ns duplex-link $n(205) $n(208) $linkBW 1ms DropTail
	$ns duplex-link $n(205) $n(211) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "550..."; flush stdout }
	$ns duplex-link $n(205) $n(213) $linkBW 1ms DropTail
	$ns duplex-link $n(205) $n(214) $linkBW 2ms DropTail
	$ns duplex-link $n(206) $n(207) $linkBW 1ms DropTail
	$ns duplex-link $n(206) $n(208) $linkBW 2ms DropTail
	$ns duplex-link $n(207) $n(209) $linkBW 3ms DropTail
	$ns duplex-link $n(207) $n(211) $linkBW 2ms DropTail
	$ns duplex-link $n(207) $n(214) $linkBW 2ms DropTail
	$ns duplex-link $n(208) $n(209) $linkBW 3ms DropTail
	$ns duplex-link $n(208) $n(211) $linkBW 1ms DropTail
	$ns duplex-link $n(208) $n(213) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "560..."; flush stdout }
	$ns duplex-link $n(208) $n(214) $linkBW 1ms DropTail
	$ns duplex-link $n(209) $n(210) $linkBW 2ms DropTail
	$ns duplex-link $n(209) $n(211) $linkBW 5ms DropTail
	$ns duplex-link $n(209) $n(214) $linkBW 4ms DropTail
	$ns duplex-link $n(210) $n(211) $linkBW 2ms DropTail
	$ns duplex-link $n(210) $n(214) $linkBW 3ms DropTail
	$ns duplex-link $n(212) $n(214) $linkBW 1ms DropTail
	$ns duplex-link $n(215) $n(218) $linkBW 2ms DropTail
	$ns duplex-link $n(215) $n(221) $linkBW 2ms DropTail
	$ns duplex-link $n(215) $n(223) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "570..."; flush stdout }
	$ns duplex-link $n(216) $n(218) $linkBW 2ms DropTail
	$ns duplex-link $n(216) $n(223) $linkBW 1ms DropTail
	$ns duplex-link $n(216) $n(225) $linkBW 2ms DropTail
	$ns duplex-link $n(216) $n(226) $linkBW 3ms DropTail
	$ns duplex-link $n(217) $n(221) $linkBW 1ms DropTail
	$ns duplex-link $n(217) $n(225) $linkBW 1ms DropTail
	$ns duplex-link $n(218) $n(220) $linkBW 1ms DropTail
	$ns duplex-link $n(218) $n(225) $linkBW 3ms DropTail
	$ns duplex-link $n(219) $n(223) $linkBW 1ms DropTail
	$ns duplex-link $n(219) $n(224) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "580..."; flush stdout }
	$ns duplex-link $n(219) $n(226) $linkBW 1ms DropTail
	$ns duplex-link $n(221) $n(222) $linkBW 1ms DropTail
	$ns duplex-link $n(221) $n(223) $linkBW 2ms DropTail
	$ns duplex-link $n(221) $n(226) $linkBW 1ms DropTail
	$ns duplex-link $n(222) $n(223) $linkBW 1ms DropTail
	$ns duplex-link $n(222) $n(224) $linkBW 1ms DropTail
	$ns duplex-link $n(222) $n(225) $linkBW 1ms DropTail
	$ns duplex-link $n(222) $n(226) $linkBW 1ms DropTail
	$ns duplex-link $n(224) $n(225) $linkBW 3ms DropTail
	$ns duplex-link $n(225) $n(226) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "590..."; flush stdout }
	$ns duplex-link $n(227) $n(228) $linkBW 1ms DropTail
	$ns duplex-link $n(227) $n(229) $linkBW 3ms DropTail
	$ns duplex-link $n(227) $n(231) $linkBW 1ms DropTail
	$ns duplex-link $n(227) $n(232) $linkBW 1ms DropTail
	$ns duplex-link $n(227) $n(233) $linkBW 5ms DropTail
	$ns duplex-link $n(227) $n(235) $linkBW 1ms DropTail
	$ns duplex-link $n(227) $n(236) $linkBW 1ms DropTail
	$ns duplex-link $n(228) $n(229) $linkBW 3ms DropTail
	$ns duplex-link $n(228) $n(232) $linkBW 3ms DropTail
	$ns duplex-link $n(228) $n(233) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "600..."; flush stdout }
	$ns duplex-link $n(228) $n(236) $linkBW 2ms DropTail
	$ns duplex-link $n(229) $n(231) $linkBW 2ms DropTail
	$ns duplex-link $n(229) $n(237) $linkBW 1ms DropTail
	$ns duplex-link $n(230) $n(231) $linkBW 2ms DropTail
	$ns duplex-link $n(230) $n(232) $linkBW 2ms DropTail
	$ns duplex-link $n(230) $n(236) $linkBW 1ms DropTail
	$ns duplex-link $n(230) $n(237) $linkBW 2ms DropTail
	$ns duplex-link $n(230) $n(238) $linkBW 1ms DropTail
	$ns duplex-link $n(231) $n(233) $linkBW 3ms DropTail
	$ns duplex-link $n(231) $n(235) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "610..."; flush stdout }
	$ns duplex-link $n(232) $n(234) $linkBW 3ms DropTail
	$ns duplex-link $n(232) $n(238) $linkBW 2ms DropTail
	$ns duplex-link $n(233) $n(234) $linkBW 5ms DropTail
	$ns duplex-link $n(233) $n(235) $linkBW 1ms DropTail
	$ns duplex-link $n(233) $n(238) $linkBW 3ms DropTail
	$ns duplex-link $n(234) $n(235) $linkBW 2ms DropTail
	$ns duplex-link $n(234) $n(237) $linkBW 1ms DropTail
	$ns duplex-link $n(235) $n(238) $linkBW 1ms DropTail
	$ns duplex-link $n(236) $n(238) $linkBW 3ms DropTail
	$ns duplex-link $n(237) $n(238) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "620..."; flush stdout }
	$ns duplex-link $n(239) $n(240) $linkBW 1ms DropTail
	$ns duplex-link $n(239) $n(242) $linkBW 2ms DropTail
	$ns duplex-link $n(239) $n(243) $linkBW 3ms DropTail
	$ns duplex-link $n(239) $n(247) $linkBW 1ms DropTail
	$ns duplex-link $n(239) $n(250) $linkBW 1ms DropTail
	$ns duplex-link $n(239) $n(251) $linkBW 1ms DropTail
	$ns duplex-link $n(240) $n(242) $linkBW 3ms DropTail
	$ns duplex-link $n(240) $n(244) $linkBW 2ms DropTail
	$ns duplex-link $n(240) $n(248) $linkBW 3ms DropTail
	$ns duplex-link $n(240) $n(251) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "630..."; flush stdout }
	$ns duplex-link $n(240) $n(252) $linkBW 1ms DropTail
	$ns duplex-link $n(241) $n(245) $linkBW 1ms DropTail
	$ns duplex-link $n(241) $n(250) $linkBW 2ms DropTail
	$ns duplex-link $n(242) $n(244) $linkBW 1ms DropTail
	$ns duplex-link $n(242) $n(245) $linkBW 1ms DropTail
	$ns duplex-link $n(242) $n(250) $linkBW 1ms DropTail
	$ns duplex-link $n(242) $n(251) $linkBW 2ms DropTail
	$ns duplex-link $n(243) $n(244) $linkBW 1ms DropTail
	$ns duplex-link $n(243) $n(245) $linkBW 4ms DropTail
	$ns duplex-link $n(243) $n(248) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "640..."; flush stdout }
	$ns duplex-link $n(244) $n(245) $linkBW 3ms DropTail
	$ns duplex-link $n(244) $n(246) $linkBW 3ms DropTail
	$ns duplex-link $n(244) $n(247) $linkBW 4ms DropTail
	$ns duplex-link $n(244) $n(248) $linkBW 4ms DropTail
	$ns duplex-link $n(244) $n(250) $linkBW 1ms DropTail
	$ns duplex-link $n(244) $n(252) $linkBW 1ms DropTail
	$ns duplex-link $n(245) $n(248) $linkBW 1ms DropTail
	$ns duplex-link $n(245) $n(251) $linkBW 1ms DropTail
	$ns duplex-link $n(245) $n(252) $linkBW 2ms DropTail
	$ns duplex-link $n(246) $n(249) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "650..."; flush stdout }
	$ns duplex-link $n(246) $n(250) $linkBW 1ms DropTail
	$ns duplex-link $n(246) $n(251) $linkBW 1ms DropTail
	$ns duplex-link $n(246) $n(252) $linkBW 1ms DropTail
	$ns duplex-link $n(247) $n(248) $linkBW 1ms DropTail
	$ns duplex-link $n(247) $n(249) $linkBW 1ms DropTail
	$ns duplex-link $n(247) $n(251) $linkBW 2ms DropTail
	$ns duplex-link $n(247) $n(252) $linkBW 1ms DropTail
	$ns duplex-link $n(248) $n(250) $linkBW 2ms DropTail
	$ns duplex-link $n(249) $n(252) $linkBW 1ms DropTail
	$ns duplex-link $n(253) $n(255) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "660..."; flush stdout }
	$ns duplex-link $n(253) $n(256) $linkBW 1ms DropTail
	$ns duplex-link $n(253) $n(261) $linkBW 2ms DropTail
	$ns duplex-link $n(254) $n(259) $linkBW 3ms DropTail
	$ns duplex-link $n(254) $n(261) $linkBW 1ms DropTail
	$ns duplex-link $n(254) $n(263) $linkBW 1ms DropTail
	$ns duplex-link $n(254) $n(264) $linkBW 3ms DropTail
	$ns duplex-link $n(255) $n(258) $linkBW 1ms DropTail
	$ns duplex-link $n(255) $n(259) $linkBW 1ms DropTail
	$ns duplex-link $n(255) $n(261) $linkBW 2ms DropTail
	$ns duplex-link $n(255) $n(262) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "670..."; flush stdout }
	$ns duplex-link $n(255) $n(263) $linkBW 3ms DropTail
	$ns duplex-link $n(255) $n(264) $linkBW 1ms DropTail
	$ns duplex-link $n(256) $n(257) $linkBW 2ms DropTail
	$ns duplex-link $n(256) $n(258) $linkBW 2ms DropTail
	$ns duplex-link $n(256) $n(261) $linkBW 1ms DropTail
	$ns duplex-link $n(256) $n(262) $linkBW 1ms DropTail
	$ns duplex-link $n(256) $n(263) $linkBW 1ms DropTail
	$ns duplex-link $n(257) $n(258) $linkBW 3ms DropTail
	$ns duplex-link $n(257) $n(260) $linkBW 2ms DropTail
	$ns duplex-link $n(257) $n(264) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "680..."; flush stdout }
	$ns duplex-link $n(258) $n(259) $linkBW 1ms DropTail
	$ns duplex-link $n(258) $n(262) $linkBW 1ms DropTail
	$ns duplex-link $n(259) $n(262) $linkBW 3ms DropTail
	$ns duplex-link $n(259) $n(263) $linkBW 1ms DropTail
	$ns duplex-link $n(260) $n(264) $linkBW 3ms DropTail
	$ns duplex-link $n(261) $n(263) $linkBW 2ms DropTail
	$ns duplex-link $n(261) $n(264) $linkBW 2ms DropTail
	$ns duplex-link $n(262) $n(264) $linkBW 2ms DropTail
	$ns duplex-link $n(263) $n(264) $linkBW 1ms DropTail
	$ns duplex-link $n(265) $n(268) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "690..."; flush stdout }
	$ns duplex-link $n(265) $n(274) $linkBW 2ms DropTail
	$ns duplex-link $n(266) $n(268) $linkBW 2ms DropTail
	$ns duplex-link $n(266) $n(273) $linkBW 1ms DropTail
	$ns duplex-link $n(267) $n(271) $linkBW 1ms DropTail
	$ns duplex-link $n(267) $n(272) $linkBW 3ms DropTail
	$ns duplex-link $n(267) $n(273) $linkBW 1ms DropTail
	$ns duplex-link $n(268) $n(269) $linkBW 1ms DropTail
	$ns duplex-link $n(268) $n(272) $linkBW 2ms DropTail
	$ns duplex-link $n(269) $n(270) $linkBW 2ms DropTail
	$ns duplex-link $n(269) $n(271) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "700..."; flush stdout }
	$ns duplex-link $n(269) $n(274) $linkBW 1ms DropTail
	$ns duplex-link $n(270) $n(271) $linkBW 2ms DropTail
	$ns duplex-link $n(270) $n(274) $linkBW 1ms DropTail
	$ns duplex-link $n(271) $n(272) $linkBW 5ms DropTail
	$ns duplex-link $n(271) $n(274) $linkBW 1ms DropTail
	$ns duplex-link $n(272) $n(274) $linkBW 1ms DropTail
	$ns duplex-link $n(275) $n(554) $linkBW 2ms DropTail
	$ns duplex-link $n(275) $n(1002) $linkBW 1ms DropTail
	$ns duplex-link $n(275) $n(294) $linkBW 1ms DropTail
	$ns duplex-link $n(275) $n(276) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "710..."; flush stdout }
	$ns duplex-link $n(275) $n(278) $linkBW 1ms DropTail
	$ns duplex-link $n(275) $n(279) $linkBW 1ms DropTail
	$ns duplex-link $n(275) $n(280) $linkBW 1ms DropTail
	$ns duplex-link $n(276) $n(324) $linkBW 3ms DropTail
	$ns duplex-link $n(276) $n(316) $linkBW 1ms DropTail
	$ns duplex-link $n(276) $n(307) $linkBW 3ms DropTail
	$ns duplex-link $n(276) $n(279) $linkBW 2ms DropTail
	$ns duplex-link $n(276) $n(282) $linkBW 1ms DropTail
	$ns duplex-link $n(276) $n(284) $linkBW 1ms DropTail
	$ns duplex-link $n(277) $n(341) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "720..."; flush stdout }
	$ns duplex-link $n(277) $n(278) $linkBW 3ms DropTail
	$ns duplex-link $n(277) $n(279) $linkBW 1ms DropTail
	$ns duplex-link $n(277) $n(280) $linkBW 4ms DropTail
	$ns duplex-link $n(277) $n(281) $linkBW 1ms DropTail
	$ns duplex-link $n(277) $n(282) $linkBW 1ms DropTail
	$ns duplex-link $n(277) $n(285) $linkBW 3ms DropTail
	$ns duplex-link $n(278) $n(368) $linkBW 1ms DropTail
	$ns duplex-link $n(278) $n(347) $linkBW 1ms DropTail
	$ns duplex-link $n(278) $n(280) $linkBW 3ms DropTail
	$ns duplex-link $n(278) $n(281) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "730..."; flush stdout }
	$ns duplex-link $n(278) $n(282) $linkBW 3ms DropTail
	$ns duplex-link $n(278) $n(285) $linkBW 1ms DropTail
	$ns duplex-link $n(279) $n(397) $linkBW 1ms DropTail
	$ns duplex-link $n(279) $n(393) $linkBW 2ms DropTail
	$ns duplex-link $n(279) $n(381) $linkBW 3ms DropTail
	$ns duplex-link $n(279) $n(283) $linkBW 1ms DropTail
	$ns duplex-link $n(280) $n(435) $linkBW 3ms DropTail
	$ns duplex-link $n(280) $n(423) $linkBW 4ms DropTail
	$ns duplex-link $n(280) $n(412) $linkBW 2ms DropTail
	$ns duplex-link $n(280) $n(281) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "740..."; flush stdout }
	$ns duplex-link $n(280) $n(284) $linkBW 1ms DropTail
	$ns duplex-link $n(280) $n(285) $linkBW 2ms DropTail
	$ns duplex-link $n(281) $n(782) $linkBW 1ms DropTail
	$ns duplex-link $n(281) $n(443) $linkBW 1ms DropTail
	$ns duplex-link $n(281) $n(285) $linkBW 1ms DropTail
	$ns duplex-link $n(282) $n(1008) $linkBW 1ms DropTail
	$ns duplex-link $n(282) $n(460) $linkBW 3ms DropTail
	$ns duplex-link $n(282) $n(283) $linkBW 3ms DropTail
	$ns duplex-link $n(283) $n(488) $linkBW 1ms DropTail
	$ns duplex-link $n(283) $n(475) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "750..."; flush stdout }
	$ns duplex-link $n(283) $n(285) $linkBW 2ms DropTail
	$ns duplex-link $n(284) $n(556) $linkBW 2ms DropTail
	$ns duplex-link $n(284) $n(529) $linkBW 1ms DropTail
	$ns duplex-link $n(284) $n(518) $linkBW 2ms DropTail
	$ns duplex-link $n(284) $n(502) $linkBW 1ms DropTail
	$ns duplex-link $n(284) $n(496) $linkBW 3ms DropTail
	$ns duplex-link $n(285) $n(776) $linkBW 1ms DropTail
	$ns duplex-link $n(285) $n(546) $linkBW 2ms DropTail
	$ns duplex-link $n(286) $n(287) $linkBW 3ms DropTail
	$ns duplex-link $n(286) $n(288) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "760..."; flush stdout }
	$ns duplex-link $n(286) $n(289) $linkBW 2ms DropTail
	$ns duplex-link $n(286) $n(293) $linkBW 2ms DropTail
	$ns duplex-link $n(286) $n(295) $linkBW 2ms DropTail
	$ns duplex-link $n(286) $n(296) $linkBW 2ms DropTail
	$ns duplex-link $n(286) $n(297) $linkBW 5ms DropTail
	$ns duplex-link $n(287) $n(291) $linkBW 1ms DropTail
	$ns duplex-link $n(287) $n(295) $linkBW 2ms DropTail
	$ns duplex-link $n(288) $n(289) $linkBW 2ms DropTail
	$ns duplex-link $n(288) $n(290) $linkBW 1ms DropTail
	$ns duplex-link $n(288) $n(291) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "770..."; flush stdout }
	$ns duplex-link $n(288) $n(294) $linkBW 1ms DropTail
	$ns duplex-link $n(288) $n(295) $linkBW 3ms DropTail
	$ns duplex-link $n(288) $n(296) $linkBW 2ms DropTail
	$ns duplex-link $n(289) $n(290) $linkBW 2ms DropTail
	$ns duplex-link $n(289) $n(292) $linkBW 1ms DropTail
	$ns duplex-link $n(289) $n(293) $linkBW 3ms DropTail
	$ns duplex-link $n(289) $n(295) $linkBW 1ms DropTail
	$ns duplex-link $n(289) $n(296) $linkBW 2ms DropTail
	$ns duplex-link $n(290) $n(291) $linkBW 1ms DropTail
	$ns duplex-link $n(290) $n(292) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "780..."; flush stdout }
	$ns duplex-link $n(290) $n(293) $linkBW 3ms DropTail
	$ns duplex-link $n(290) $n(294) $linkBW 2ms DropTail
	$ns duplex-link $n(290) $n(295) $linkBW 1ms DropTail
	$ns duplex-link $n(291) $n(293) $linkBW 1ms DropTail
	$ns duplex-link $n(291) $n(296) $linkBW 2ms DropTail
	$ns duplex-link $n(293) $n(296) $linkBW 1ms DropTail
	$ns duplex-link $n(294) $n(295) $linkBW 1ms DropTail
	$ns duplex-link $n(294) $n(296) $linkBW 1ms DropTail
	$ns duplex-link $n(294) $n(297) $linkBW 1ms DropTail
	$ns duplex-link $n(295) $n(296) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "790..."; flush stdout }
	$ns duplex-link $n(296) $n(297) $linkBW 1ms DropTail
	$ns duplex-link $n(298) $n(301) $linkBW 3ms DropTail
	$ns duplex-link $n(298) $n(304) $linkBW 1ms DropTail
	$ns duplex-link $n(298) $n(308) $linkBW 2ms DropTail
	$ns duplex-link $n(299) $n(304) $linkBW 2ms DropTail
	$ns duplex-link $n(300) $n(303) $linkBW 1ms DropTail
	$ns duplex-link $n(300) $n(305) $linkBW 3ms DropTail
	$ns duplex-link $n(300) $n(306) $linkBW 2ms DropTail
	$ns duplex-link $n(300) $n(307) $linkBW 1ms DropTail
	$ns duplex-link $n(300) $n(308) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "800..."; flush stdout }
	$ns duplex-link $n(300) $n(310) $linkBW 1ms DropTail
	$ns duplex-link $n(301) $n(304) $linkBW 1ms DropTail
	$ns duplex-link $n(301) $n(308) $linkBW 1ms DropTail
	$ns duplex-link $n(301) $n(310) $linkBW 1ms DropTail
	$ns duplex-link $n(302) $n(303) $linkBW 3ms DropTail
	$ns duplex-link $n(302) $n(306) $linkBW 1ms DropTail
	$ns duplex-link $n(302) $n(309) $linkBW 2ms DropTail
	$ns duplex-link $n(302) $n(310) $linkBW 3ms DropTail
	$ns duplex-link $n(303) $n(305) $linkBW 4ms DropTail
	$ns duplex-link $n(303) $n(306) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "810..."; flush stdout }
	$ns duplex-link $n(303) $n(310) $linkBW 1ms DropTail
	$ns duplex-link $n(304) $n(306) $linkBW 1ms DropTail
	$ns duplex-link $n(304) $n(307) $linkBW 3ms DropTail
	$ns duplex-link $n(304) $n(308) $linkBW 2ms DropTail
	$ns duplex-link $n(304) $n(309) $linkBW 2ms DropTail
	$ns duplex-link $n(305) $n(308) $linkBW 1ms DropTail
	$ns duplex-link $n(305) $n(310) $linkBW 3ms DropTail
	$ns duplex-link $n(306) $n(307) $linkBW 2ms DropTail
	$ns duplex-link $n(307) $n(309) $linkBW 5ms DropTail
	$ns duplex-link $n(311) $n(314) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "820..."; flush stdout }
	$ns duplex-link $n(311) $n(316) $linkBW 4ms DropTail
	$ns duplex-link $n(311) $n(318) $linkBW 2ms DropTail
	$ns duplex-link $n(311) $n(321) $linkBW 4ms DropTail
	$ns duplex-link $n(311) $n(322) $linkBW 3ms DropTail
	$ns duplex-link $n(312) $n(314) $linkBW 3ms DropTail
	$ns duplex-link $n(312) $n(315) $linkBW 5ms DropTail
	$ns duplex-link $n(312) $n(317) $linkBW 1ms DropTail
	$ns duplex-link $n(312) $n(318) $linkBW 1ms DropTail
	$ns duplex-link $n(312) $n(319) $linkBW 2ms DropTail
	$ns duplex-link $n(312) $n(320) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "830..."; flush stdout }
	$ns duplex-link $n(312) $n(322) $linkBW 1ms DropTail
	$ns duplex-link $n(313) $n(316) $linkBW 1ms DropTail
	$ns duplex-link $n(313) $n(317) $linkBW 1ms DropTail
	$ns duplex-link $n(313) $n(318) $linkBW 1ms DropTail
	$ns duplex-link $n(313) $n(319) $linkBW 2ms DropTail
	$ns duplex-link $n(314) $n(315) $linkBW 1ms DropTail
	$ns duplex-link $n(314) $n(319) $linkBW 2ms DropTail
	$ns duplex-link $n(314) $n(321) $linkBW 1ms DropTail
	$ns duplex-link $n(315) $n(319) $linkBW 1ms DropTail
	$ns duplex-link $n(315) $n(321) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "840..."; flush stdout }
	$ns duplex-link $n(315) $n(323) $linkBW 1ms DropTail
	$ns duplex-link $n(316) $n(320) $linkBW 3ms DropTail
	$ns duplex-link $n(316) $n(322) $linkBW 1ms DropTail
	$ns duplex-link $n(316) $n(323) $linkBW 1ms DropTail
	$ns duplex-link $n(317) $n(320) $linkBW 1ms DropTail
	$ns duplex-link $n(317) $n(323) $linkBW 2ms DropTail
	$ns duplex-link $n(319) $n(320) $linkBW 2ms DropTail
	$ns duplex-link $n(319) $n(323) $linkBW 2ms DropTail
	$ns duplex-link $n(320) $n(323) $linkBW 3ms DropTail
	$ns duplex-link $n(322) $n(323) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "850..."; flush stdout }
	$ns duplex-link $n(324) $n(325) $linkBW 2ms DropTail
	$ns duplex-link $n(324) $n(329) $linkBW 2ms DropTail
	$ns duplex-link $n(324) $n(330) $linkBW 1ms DropTail
	$ns duplex-link $n(325) $n(327) $linkBW 2ms DropTail
	$ns duplex-link $n(325) $n(330) $linkBW 2ms DropTail
	$ns duplex-link $n(326) $n(329) $linkBW 1ms DropTail
	$ns duplex-link $n(326) $n(330) $linkBW 1ms DropTail
	$ns duplex-link $n(326) $n(331) $linkBW 3ms DropTail
	$ns duplex-link $n(326) $n(332) $linkBW 4ms DropTail
	$ns duplex-link $n(326) $n(333) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "860..."; flush stdout }
	$ns duplex-link $n(328) $n(330) $linkBW 1ms DropTail
	$ns duplex-link $n(328) $n(333) $linkBW 3ms DropTail
	$ns duplex-link $n(329) $n(332) $linkBW 1ms DropTail
	$ns duplex-link $n(329) $n(333) $linkBW 1ms DropTail
	$ns duplex-link $n(330) $n(332) $linkBW 1ms DropTail
	$ns duplex-link $n(331) $n(332) $linkBW 1ms DropTail
	$ns duplex-link $n(331) $n(333) $linkBW 3ms DropTail
	$ns duplex-link $n(332) $n(333) $linkBW 1ms DropTail
	$ns duplex-link $n(334) $n(336) $linkBW 1ms DropTail
	$ns duplex-link $n(334) $n(337) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "870..."; flush stdout }
	$ns duplex-link $n(334) $n(338) $linkBW 1ms DropTail
	$ns duplex-link $n(334) $n(340) $linkBW 2ms DropTail
	$ns duplex-link $n(334) $n(341) $linkBW 2ms DropTail
	$ns duplex-link $n(334) $n(342) $linkBW 2ms DropTail
	$ns duplex-link $n(334) $n(344) $linkBW 1ms DropTail
	$ns duplex-link $n(335) $n(339) $linkBW 2ms DropTail
	$ns duplex-link $n(335) $n(341) $linkBW 1ms DropTail
	$ns duplex-link $n(335) $n(342) $linkBW 2ms DropTail
	$ns duplex-link $n(335) $n(343) $linkBW 2ms DropTail
	$ns duplex-link $n(336) $n(338) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "880..."; flush stdout }
	$ns duplex-link $n(336) $n(339) $linkBW 2ms DropTail
	$ns duplex-link $n(336) $n(340) $linkBW 1ms DropTail
	$ns duplex-link $n(336) $n(341) $linkBW 1ms DropTail
	$ns duplex-link $n(336) $n(343) $linkBW 1ms DropTail
	$ns duplex-link $n(337) $n(339) $linkBW 1ms DropTail
	$ns duplex-link $n(337) $n(342) $linkBW 5ms DropTail
	$ns duplex-link $n(338) $n(342) $linkBW 1ms DropTail
	$ns duplex-link $n(338) $n(343) $linkBW 1ms DropTail
	$ns duplex-link $n(338) $n(345) $linkBW 2ms DropTail
	$ns duplex-link $n(339) $n(345) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "890..."; flush stdout }
	$ns duplex-link $n(340) $n(343) $linkBW 2ms DropTail
	$ns duplex-link $n(340) $n(344) $linkBW 1ms DropTail
	$ns duplex-link $n(341) $n(343) $linkBW 1ms DropTail
	$ns duplex-link $n(342) $n(343) $linkBW 2ms DropTail
	$ns duplex-link $n(342) $n(344) $linkBW 2ms DropTail
	$ns duplex-link $n(342) $n(345) $linkBW 2ms DropTail
	$ns duplex-link $n(344) $n(345) $linkBW 2ms DropTail
	$ns duplex-link $n(346) $n(347) $linkBW 1ms DropTail
	$ns duplex-link $n(346) $n(349) $linkBW 3ms DropTail
	$ns duplex-link $n(346) $n(354) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "900..."; flush stdout }
	$ns duplex-link $n(347) $n(348) $linkBW 3ms DropTail
	$ns duplex-link $n(347) $n(351) $linkBW 1ms DropTail
	$ns duplex-link $n(347) $n(352) $linkBW 2ms DropTail
	$ns duplex-link $n(347) $n(353) $linkBW 1ms DropTail
	$ns duplex-link $n(348) $n(349) $linkBW 1ms DropTail
	$ns duplex-link $n(348) $n(350) $linkBW 1ms DropTail
	$ns duplex-link $n(348) $n(351) $linkBW 1ms DropTail
	$ns duplex-link $n(349) $n(350) $linkBW 1ms DropTail
	$ns duplex-link $n(349) $n(353) $linkBW 2ms DropTail
	$ns duplex-link $n(349) $n(354) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "910..."; flush stdout }
	$ns duplex-link $n(350) $n(352) $linkBW 2ms DropTail
	$ns duplex-link $n(350) $n(354) $linkBW 1ms DropTail
	$ns duplex-link $n(351) $n(352) $linkBW 1ms DropTail
	$ns duplex-link $n(351) $n(355) $linkBW 2ms DropTail
	$ns duplex-link $n(352) $n(354) $linkBW 3ms DropTail
	$ns duplex-link $n(352) $n(355) $linkBW 2ms DropTail
	$ns duplex-link $n(354) $n(355) $linkBW 1ms DropTail
	$ns duplex-link $n(356) $n(362) $linkBW 1ms DropTail
	$ns duplex-link $n(356) $n(364) $linkBW 2ms DropTail
	$ns duplex-link $n(356) $n(368) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "920..."; flush stdout }
	$ns duplex-link $n(357) $n(358) $linkBW 1ms DropTail
	$ns duplex-link $n(357) $n(359) $linkBW 2ms DropTail
	$ns duplex-link $n(357) $n(361) $linkBW 1ms DropTail
	$ns duplex-link $n(357) $n(366) $linkBW 3ms DropTail
	$ns duplex-link $n(357) $n(367) $linkBW 3ms DropTail
	$ns duplex-link $n(358) $n(359) $linkBW 1ms DropTail
	$ns duplex-link $n(358) $n(362) $linkBW 1ms DropTail
	$ns duplex-link $n(358) $n(364) $linkBW 2ms DropTail
	$ns duplex-link $n(358) $n(365) $linkBW 2ms DropTail
	$ns duplex-link $n(358) $n(369) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "930..."; flush stdout }
	$ns duplex-link $n(359) $n(362) $linkBW 1ms DropTail
	$ns duplex-link $n(359) $n(363) $linkBW 3ms DropTail
	$ns duplex-link $n(359) $n(364) $linkBW 1ms DropTail
	$ns duplex-link $n(359) $n(367) $linkBW 2ms DropTail
	$ns duplex-link $n(359) $n(369) $linkBW 1ms DropTail
	$ns duplex-link $n(360) $n(364) $linkBW 1ms DropTail
	$ns duplex-link $n(360) $n(365) $linkBW 1ms DropTail
	$ns duplex-link $n(360) $n(366) $linkBW 1ms DropTail
	$ns duplex-link $n(360) $n(369) $linkBW 2ms DropTail
	$ns duplex-link $n(361) $n(362) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "940..."; flush stdout }
	$ns duplex-link $n(361) $n(364) $linkBW 1ms DropTail
	$ns duplex-link $n(361) $n(368) $linkBW 1ms DropTail
	$ns duplex-link $n(362) $n(364) $linkBW 1ms DropTail
	$ns duplex-link $n(362) $n(367) $linkBW 1ms DropTail
	$ns duplex-link $n(363) $n(364) $linkBW 2ms DropTail
	$ns duplex-link $n(363) $n(366) $linkBW 2ms DropTail
	$ns duplex-link $n(363) $n(367) $linkBW 3ms DropTail
	$ns duplex-link $n(363) $n(368) $linkBW 3ms DropTail
	$ns duplex-link $n(364) $n(365) $linkBW 1ms DropTail
	$ns duplex-link $n(364) $n(369) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "950..."; flush stdout }
	$ns duplex-link $n(365) $n(368) $linkBW 4ms DropTail
	$ns duplex-link $n(366) $n(367) $linkBW 2ms DropTail
	$ns duplex-link $n(366) $n(369) $linkBW 1ms DropTail
	$ns duplex-link $n(370) $n(371) $linkBW 1ms DropTail
	$ns duplex-link $n(370) $n(372) $linkBW 1ms DropTail
	$ns duplex-link $n(370) $n(373) $linkBW 1ms DropTail
	$ns duplex-link $n(370) $n(374) $linkBW 2ms DropTail
	$ns duplex-link $n(370) $n(379) $linkBW 3ms DropTail
	$ns duplex-link $n(370) $n(381) $linkBW 1ms DropTail
	$ns duplex-link $n(371) $n(374) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "960..."; flush stdout }
	$ns duplex-link $n(371) $n(375) $linkBW 1ms DropTail
	$ns duplex-link $n(371) $n(376) $linkBW 2ms DropTail
	$ns duplex-link $n(371) $n(377) $linkBW 1ms DropTail
	$ns duplex-link $n(371) $n(379) $linkBW 3ms DropTail
	$ns duplex-link $n(371) $n(380) $linkBW 1ms DropTail
	$ns duplex-link $n(372) $n(373) $linkBW 2ms DropTail
	$ns duplex-link $n(372) $n(376) $linkBW 2ms DropTail
	$ns duplex-link $n(373) $n(376) $linkBW 2ms DropTail
	$ns duplex-link $n(373) $n(378) $linkBW 1ms DropTail
	$ns duplex-link $n(373) $n(380) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "970..."; flush stdout }
	$ns duplex-link $n(373) $n(381) $linkBW 2ms DropTail
	$ns duplex-link $n(374) $n(377) $linkBW 3ms DropTail
	$ns duplex-link $n(374) $n(379) $linkBW 1ms DropTail
	$ns duplex-link $n(374) $n(381) $linkBW 4ms DropTail
	$ns duplex-link $n(375) $n(378) $linkBW 3ms DropTail
	$ns duplex-link $n(375) $n(380) $linkBW 2ms DropTail
	$ns duplex-link $n(376) $n(377) $linkBW 1ms DropTail
	$ns duplex-link $n(376) $n(378) $linkBW 1ms DropTail
	$ns duplex-link $n(376) $n(381) $linkBW 2ms DropTail
	$ns duplex-link $n(378) $n(380) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "980..."; flush stdout }
	$ns duplex-link $n(382) $n(387) $linkBW 1ms DropTail
	$ns duplex-link $n(382) $n(389) $linkBW 1ms DropTail
	$ns duplex-link $n(382) $n(390) $linkBW 2ms DropTail
	$ns duplex-link $n(382) $n(392) $linkBW 2ms DropTail
	$ns duplex-link $n(382) $n(394) $linkBW 1ms DropTail
	$ns duplex-link $n(383) $n(387) $linkBW 1ms DropTail
	$ns duplex-link $n(383) $n(390) $linkBW 3ms DropTail
	$ns duplex-link $n(383) $n(391) $linkBW 2ms DropTail
	$ns duplex-link $n(383) $n(392) $linkBW 2ms DropTail
	$ns duplex-link $n(384) $n(386) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "990..."; flush stdout }
	$ns duplex-link $n(384) $n(388) $linkBW 5ms DropTail
	$ns duplex-link $n(384) $n(389) $linkBW 2ms DropTail
	$ns duplex-link $n(384) $n(390) $linkBW 1ms DropTail
	$ns duplex-link $n(384) $n(391) $linkBW 2ms DropTail
	$ns duplex-link $n(384) $n(394) $linkBW 1ms DropTail
	$ns duplex-link $n(384) $n(395) $linkBW 3ms DropTail
	$ns duplex-link $n(385) $n(389) $linkBW 1ms DropTail
	$ns duplex-link $n(385) $n(390) $linkBW 2ms DropTail
	$ns duplex-link $n(385) $n(391) $linkBW 2ms DropTail
	$ns duplex-link $n(385) $n(393) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1000..."; flush stdout }
	$ns duplex-link $n(386) $n(388) $linkBW 3ms DropTail
	$ns duplex-link $n(386) $n(393) $linkBW 3ms DropTail
	$ns duplex-link $n(386) $n(395) $linkBW 2ms DropTail
	$ns duplex-link $n(387) $n(392) $linkBW 3ms DropTail
	$ns duplex-link $n(388) $n(389) $linkBW 1ms DropTail
	$ns duplex-link $n(388) $n(394) $linkBW 2ms DropTail
	$ns duplex-link $n(388) $n(395) $linkBW 2ms DropTail
	$ns duplex-link $n(389) $n(391) $linkBW 1ms DropTail
	$ns duplex-link $n(389) $n(393) $linkBW 3ms DropTail
	$ns duplex-link $n(389) $n(395) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1010..."; flush stdout }
	$ns duplex-link $n(390) $n(392) $linkBW 1ms DropTail
	$ns duplex-link $n(390) $n(395) $linkBW 1ms DropTail
	$ns duplex-link $n(393) $n(394) $linkBW 5ms DropTail
	$ns duplex-link $n(393) $n(395) $linkBW 2ms DropTail
	$ns duplex-link $n(396) $n(398) $linkBW 3ms DropTail
	$ns duplex-link $n(396) $n(403) $linkBW 2ms DropTail
	$ns duplex-link $n(397) $n(398) $linkBW 3ms DropTail
	$ns duplex-link $n(397) $n(400) $linkBW 3ms DropTail
	$ns duplex-link $n(397) $n(401) $linkBW 2ms DropTail
	$ns duplex-link $n(398) $n(399) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1020..."; flush stdout }
	$ns duplex-link $n(398) $n(400) $linkBW 2ms DropTail
	$ns duplex-link $n(398) $n(401) $linkBW 1ms DropTail
	$ns duplex-link $n(398) $n(403) $linkBW 1ms DropTail
	$ns duplex-link $n(398) $n(404) $linkBW 5ms DropTail
	$ns duplex-link $n(398) $n(405) $linkBW 1ms DropTail
	$ns duplex-link $n(399) $n(400) $linkBW 2ms DropTail
	$ns duplex-link $n(399) $n(401) $linkBW 2ms DropTail
	$ns duplex-link $n(399) $n(402) $linkBW 3ms DropTail
	$ns duplex-link $n(399) $n(404) $linkBW 2ms DropTail
	$ns duplex-link $n(401) $n(402) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1030..."; flush stdout }
	$ns duplex-link $n(401) $n(403) $linkBW 2ms DropTail
	$ns duplex-link $n(402) $n(403) $linkBW 1ms DropTail
	$ns duplex-link $n(402) $n(405) $linkBW 3ms DropTail
	$ns duplex-link $n(406) $n(407) $linkBW 2ms DropTail
	$ns duplex-link $n(406) $n(408) $linkBW 1ms DropTail
	$ns duplex-link $n(406) $n(410) $linkBW 2ms DropTail
	$ns duplex-link $n(406) $n(417) $linkBW 1ms DropTail
	$ns duplex-link $n(407) $n(408) $linkBW 1ms DropTail
	$ns duplex-link $n(407) $n(412) $linkBW 2ms DropTail
	$ns duplex-link $n(407) $n(414) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1040..."; flush stdout }
	$ns duplex-link $n(407) $n(417) $linkBW 2ms DropTail
	$ns duplex-link $n(408) $n(410) $linkBW 1ms DropTail
	$ns duplex-link $n(408) $n(411) $linkBW 3ms DropTail
	$ns duplex-link $n(408) $n(416) $linkBW 2ms DropTail
	$ns duplex-link $n(408) $n(417) $linkBW 2ms DropTail
	$ns duplex-link $n(409) $n(410) $linkBW 3ms DropTail
	$ns duplex-link $n(409) $n(411) $linkBW 1ms DropTail
	$ns duplex-link $n(409) $n(412) $linkBW 2ms DropTail
	$ns duplex-link $n(409) $n(414) $linkBW 4ms DropTail
	$ns duplex-link $n(410) $n(411) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "1050..."; flush stdout }
	$ns duplex-link $n(410) $n(414) $linkBW 1ms DropTail
	$ns duplex-link $n(410) $n(415) $linkBW 1ms DropTail
	$ns duplex-link $n(410) $n(416) $linkBW 3ms DropTail
	$ns duplex-link $n(410) $n(417) $linkBW 1ms DropTail
	$ns duplex-link $n(411) $n(412) $linkBW 1ms DropTail
	$ns duplex-link $n(411) $n(414) $linkBW 1ms DropTail
	$ns duplex-link $n(411) $n(416) $linkBW 1ms DropTail
	$ns duplex-link $n(412) $n(413) $linkBW 1ms DropTail
	$ns duplex-link $n(412) $n(415) $linkBW 1ms DropTail
	$ns duplex-link $n(412) $n(416) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1060..."; flush stdout }
	$ns duplex-link $n(413) $n(414) $linkBW 1ms DropTail
	$ns duplex-link $n(413) $n(415) $linkBW 1ms DropTail
	$ns duplex-link $n(413) $n(416) $linkBW 2ms DropTail
	$ns duplex-link $n(414) $n(416) $linkBW 4ms DropTail
	$ns duplex-link $n(415) $n(416) $linkBW 1ms DropTail
	$ns duplex-link $n(415) $n(417) $linkBW 2ms DropTail
	$ns duplex-link $n(416) $n(417) $linkBW 1ms DropTail
	$ns duplex-link $n(418) $n(419) $linkBW 2ms DropTail
	$ns duplex-link $n(418) $n(420) $linkBW 1ms DropTail
	$ns duplex-link $n(418) $n(422) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1070..."; flush stdout }
	$ns duplex-link $n(418) $n(423) $linkBW 1ms DropTail
	$ns duplex-link $n(418) $n(426) $linkBW 1ms DropTail
	$ns duplex-link $n(418) $n(428) $linkBW 1ms DropTail
	$ns duplex-link $n(418) $n(429) $linkBW 1ms DropTail
	$ns duplex-link $n(418) $n(430) $linkBW 1ms DropTail
	$ns duplex-link $n(419) $n(423) $linkBW 3ms DropTail
	$ns duplex-link $n(419) $n(424) $linkBW 1ms DropTail
	$ns duplex-link $n(419) $n(425) $linkBW 3ms DropTail
	$ns duplex-link $n(420) $n(421) $linkBW 3ms DropTail
	$ns duplex-link $n(420) $n(422) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1080..."; flush stdout }
	$ns duplex-link $n(420) $n(423) $linkBW 2ms DropTail
	$ns duplex-link $n(420) $n(424) $linkBW 1ms DropTail
	$ns duplex-link $n(420) $n(425) $linkBW 1ms DropTail
	$ns duplex-link $n(420) $n(426) $linkBW 1ms DropTail
	$ns duplex-link $n(420) $n(427) $linkBW 1ms DropTail
	$ns duplex-link $n(420) $n(430) $linkBW 1ms DropTail
	$ns duplex-link $n(421) $n(423) $linkBW 4ms DropTail
	$ns duplex-link $n(421) $n(424) $linkBW 2ms DropTail
	$ns duplex-link $n(421) $n(425) $linkBW 2ms DropTail
	$ns duplex-link $n(421) $n(427) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1090..."; flush stdout }
	$ns duplex-link $n(421) $n(430) $linkBW 1ms DropTail
	$ns duplex-link $n(422) $n(426) $linkBW 1ms DropTail
	$ns duplex-link $n(422) $n(428) $linkBW 1ms DropTail
	$ns duplex-link $n(422) $n(429) $linkBW 1ms DropTail
	$ns duplex-link $n(422) $n(430) $linkBW 1ms DropTail
	$ns duplex-link $n(423) $n(427) $linkBW 2ms DropTail
	$ns duplex-link $n(423) $n(430) $linkBW 1ms DropTail
	$ns duplex-link $n(424) $n(426) $linkBW 2ms DropTail
	$ns duplex-link $n(424) $n(427) $linkBW 3ms DropTail
	$ns duplex-link $n(424) $n(428) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1100..."; flush stdout }
	$ns duplex-link $n(424) $n(430) $linkBW 1ms DropTail
	$ns duplex-link $n(426) $n(427) $linkBW 1ms DropTail
	$ns duplex-link $n(426) $n(429) $linkBW 3ms DropTail
	$ns duplex-link $n(427) $n(429) $linkBW 2ms DropTail
	$ns duplex-link $n(429) $n(430) $linkBW 2ms DropTail
	$ns duplex-link $n(431) $n(436) $linkBW 1ms DropTail
	$ns duplex-link $n(431) $n(439) $linkBW 1ms DropTail
	$ns duplex-link $n(431) $n(440) $linkBW 3ms DropTail
	$ns duplex-link $n(432) $n(433) $linkBW 1ms DropTail
	$ns duplex-link $n(432) $n(436) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1110..."; flush stdout }
	$ns duplex-link $n(432) $n(439) $linkBW 1ms DropTail
	$ns duplex-link $n(432) $n(440) $linkBW 2ms DropTail
	$ns duplex-link $n(432) $n(441) $linkBW 1ms DropTail
	$ns duplex-link $n(433) $n(434) $linkBW 2ms DropTail
	$ns duplex-link $n(433) $n(436) $linkBW 1ms DropTail
	$ns duplex-link $n(433) $n(439) $linkBW 1ms DropTail
	$ns duplex-link $n(434) $n(436) $linkBW 2ms DropTail
	$ns duplex-link $n(434) $n(438) $linkBW 3ms DropTail
	$ns duplex-link $n(434) $n(439) $linkBW 1ms DropTail
	$ns duplex-link $n(434) $n(441) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1120..."; flush stdout }
	$ns duplex-link $n(435) $n(437) $linkBW 2ms DropTail
	$ns duplex-link $n(436) $n(438) $linkBW 2ms DropTail
	$ns duplex-link $n(436) $n(440) $linkBW 2ms DropTail
	$ns duplex-link $n(436) $n(441) $linkBW 1ms DropTail
	$ns duplex-link $n(437) $n(438) $linkBW 3ms DropTail
	$ns duplex-link $n(438) $n(439) $linkBW 1ms DropTail
	$ns duplex-link $n(438) $n(440) $linkBW 1ms DropTail
	$ns duplex-link $n(438) $n(441) $linkBW 1ms DropTail
	$ns duplex-link $n(442) $n(443) $linkBW 5ms DropTail
	$ns duplex-link $n(442) $n(446) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1130..."; flush stdout }
	$ns duplex-link $n(442) $n(448) $linkBW 4ms DropTail
	$ns duplex-link $n(442) $n(449) $linkBW 1ms DropTail
	$ns duplex-link $n(442) $n(450) $linkBW 2ms DropTail
	$ns duplex-link $n(443) $n(449) $linkBW 4ms DropTail
	$ns duplex-link $n(443) $n(451) $linkBW 1ms DropTail
	$ns duplex-link $n(443) $n(452) $linkBW 1ms DropTail
	$ns duplex-link $n(443) $n(453) $linkBW 2ms DropTail
	$ns duplex-link $n(444) $n(445) $linkBW 1ms DropTail
	$ns duplex-link $n(444) $n(446) $linkBW 2ms DropTail
	$ns duplex-link $n(444) $n(449) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1140..."; flush stdout }
	$ns duplex-link $n(444) $n(452) $linkBW 1ms DropTail
	$ns duplex-link $n(445) $n(446) $linkBW 2ms DropTail
	$ns duplex-link $n(445) $n(447) $linkBW 1ms DropTail
	$ns duplex-link $n(445) $n(448) $linkBW 1ms DropTail
	$ns duplex-link $n(445) $n(453) $linkBW 1ms DropTail
	$ns duplex-link $n(446) $n(447) $linkBW 3ms DropTail
	$ns duplex-link $n(446) $n(448) $linkBW 1ms DropTail
	$ns duplex-link $n(447) $n(448) $linkBW 1ms DropTail
	$ns duplex-link $n(447) $n(450) $linkBW 1ms DropTail
	$ns duplex-link $n(447) $n(451) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1150..."; flush stdout }
	$ns duplex-link $n(448) $n(451) $linkBW 4ms DropTail
	$ns duplex-link $n(448) $n(453) $linkBW 2ms DropTail
	$ns duplex-link $n(449) $n(451) $linkBW 1ms DropTail
	$ns duplex-link $n(449) $n(452) $linkBW 2ms DropTail
	$ns duplex-link $n(450) $n(453) $linkBW 1ms DropTail
	$ns duplex-link $n(451) $n(453) $linkBW 1ms DropTail
	$ns duplex-link $n(454) $n(457) $linkBW 1ms DropTail
	$ns duplex-link $n(454) $n(459) $linkBW 3ms DropTail
	$ns duplex-link $n(454) $n(460) $linkBW 1ms DropTail
	$ns duplex-link $n(454) $n(463) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1160..."; flush stdout }
	$ns duplex-link $n(454) $n(465) $linkBW 1ms DropTail
	$ns duplex-link $n(455) $n(457) $linkBW 1ms DropTail
	$ns duplex-link $n(455) $n(458) $linkBW 2ms DropTail
	$ns duplex-link $n(455) $n(462) $linkBW 1ms DropTail
	$ns duplex-link $n(455) $n(463) $linkBW 1ms DropTail
	$ns duplex-link $n(455) $n(464) $linkBW 4ms DropTail
	$ns duplex-link $n(455) $n(465) $linkBW 1ms DropTail
	$ns duplex-link $n(456) $n(457) $linkBW 1ms DropTail
	$ns duplex-link $n(456) $n(458) $linkBW 2ms DropTail
	$ns duplex-link $n(456) $n(460) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1170..."; flush stdout }
	$ns duplex-link $n(456) $n(461) $linkBW 1ms DropTail
	$ns duplex-link $n(456) $n(462) $linkBW 2ms DropTail
	$ns duplex-link $n(456) $n(463) $linkBW 1ms DropTail
	$ns duplex-link $n(457) $n(460) $linkBW 1ms DropTail
	$ns duplex-link $n(457) $n(461) $linkBW 1ms DropTail
	$ns duplex-link $n(458) $n(460) $linkBW 2ms DropTail
	$ns duplex-link $n(458) $n(461) $linkBW 2ms DropTail
	$ns duplex-link $n(459) $n(461) $linkBW 1ms DropTail
	$ns duplex-link $n(459) $n(462) $linkBW 1ms DropTail
	$ns duplex-link $n(460) $n(462) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1180..."; flush stdout }
	$ns duplex-link $n(460) $n(463) $linkBW 2ms DropTail
	$ns duplex-link $n(460) $n(464) $linkBW 1ms DropTail
	$ns duplex-link $n(461) $n(464) $linkBW 2ms DropTail
	$ns duplex-link $n(461) $n(465) $linkBW 1ms DropTail
	$ns duplex-link $n(462) $n(464) $linkBW 2ms DropTail
	$ns duplex-link $n(463) $n(465) $linkBW 1ms DropTail
	$ns duplex-link $n(466) $n(467) $linkBW 2ms DropTail
	$ns duplex-link $n(466) $n(469) $linkBW 2ms DropTail
	$ns duplex-link $n(466) $n(471) $linkBW 2ms DropTail
	$ns duplex-link $n(466) $n(474) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1190..."; flush stdout }
	$ns duplex-link $n(466) $n(476) $linkBW 3ms DropTail
	$ns duplex-link $n(467) $n(469) $linkBW 1ms DropTail
	$ns duplex-link $n(467) $n(474) $linkBW 1ms DropTail
	$ns duplex-link $n(467) $n(476) $linkBW 2ms DropTail
	$ns duplex-link $n(468) $n(470) $linkBW 2ms DropTail
	$ns duplex-link $n(468) $n(473) $linkBW 4ms DropTail
	$ns duplex-link $n(469) $n(470) $linkBW 1ms DropTail
	$ns duplex-link $n(469) $n(473) $linkBW 2ms DropTail
	$ns duplex-link $n(469) $n(474) $linkBW 1ms DropTail
	$ns duplex-link $n(469) $n(475) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1200..."; flush stdout }
	$ns duplex-link $n(470) $n(471) $linkBW 3ms DropTail
	$ns duplex-link $n(470) $n(472) $linkBW 1ms DropTail
	$ns duplex-link $n(470) $n(473) $linkBW 1ms DropTail
	$ns duplex-link $n(470) $n(474) $linkBW 1ms DropTail
	$ns duplex-link $n(470) $n(476) $linkBW 1ms DropTail
	$ns duplex-link $n(471) $n(472) $linkBW 1ms DropTail
	$ns duplex-link $n(471) $n(474) $linkBW 3ms DropTail
	$ns duplex-link $n(471) $n(475) $linkBW 3ms DropTail
	$ns duplex-link $n(471) $n(476) $linkBW 2ms DropTail
	$ns duplex-link $n(472) $n(473) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1210..."; flush stdout }
	$ns duplex-link $n(472) $n(475) $linkBW 2ms DropTail
	$ns duplex-link $n(472) $n(476) $linkBW 2ms DropTail
	$ns duplex-link $n(475) $n(476) $linkBW 1ms DropTail
	$ns duplex-link $n(477) $n(478) $linkBW 2ms DropTail
	$ns duplex-link $n(477) $n(479) $linkBW 1ms DropTail
	$ns duplex-link $n(477) $n(483) $linkBW 1ms DropTail
	$ns duplex-link $n(477) $n(484) $linkBW 3ms DropTail
	$ns duplex-link $n(477) $n(485) $linkBW 1ms DropTail
	$ns duplex-link $n(477) $n(486) $linkBW 4ms DropTail
	$ns duplex-link $n(477) $n(487) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1220..."; flush stdout }
	$ns duplex-link $n(477) $n(488) $linkBW 2ms DropTail
	$ns duplex-link $n(478) $n(479) $linkBW 4ms DropTail
	$ns duplex-link $n(479) $n(481) $linkBW 1ms DropTail
	$ns duplex-link $n(479) $n(482) $linkBW 3ms DropTail
	$ns duplex-link $n(479) $n(483) $linkBW 2ms DropTail
	$ns duplex-link $n(479) $n(484) $linkBW 3ms DropTail
	$ns duplex-link $n(479) $n(488) $linkBW 3ms DropTail
	$ns duplex-link $n(479) $n(489) $linkBW 1ms DropTail
	$ns duplex-link $n(480) $n(481) $linkBW 3ms DropTail
	$ns duplex-link $n(480) $n(483) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1230..."; flush stdout }
	$ns duplex-link $n(480) $n(486) $linkBW 4ms DropTail
	$ns duplex-link $n(480) $n(487) $linkBW 1ms DropTail
	$ns duplex-link $n(480) $n(489) $linkBW 1ms DropTail
	$ns duplex-link $n(481) $n(488) $linkBW 1ms DropTail
	$ns duplex-link $n(482) $n(483) $linkBW 2ms DropTail
	$ns duplex-link $n(482) $n(486) $linkBW 1ms DropTail
	$ns duplex-link $n(482) $n(489) $linkBW 1ms DropTail
	$ns duplex-link $n(483) $n(484) $linkBW 3ms DropTail
	$ns duplex-link $n(483) $n(485) $linkBW 1ms DropTail
	$ns duplex-link $n(483) $n(486) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1240..."; flush stdout }
	$ns duplex-link $n(483) $n(487) $linkBW 1ms DropTail
	$ns duplex-link $n(483) $n(488) $linkBW 1ms DropTail
	$ns duplex-link $n(484) $n(485) $linkBW 1ms DropTail
	$ns duplex-link $n(484) $n(487) $linkBW 1ms DropTail
	$ns duplex-link $n(484) $n(488) $linkBW 1ms DropTail
	$ns duplex-link $n(485) $n(486) $linkBW 3ms DropTail
	$ns duplex-link $n(485) $n(488) $linkBW 3ms DropTail
	$ns duplex-link $n(485) $n(489) $linkBW 3ms DropTail
	$ns duplex-link $n(486) $n(489) $linkBW 5ms DropTail
	$ns duplex-link $n(487) $n(488) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1250..."; flush stdout }
	$ns duplex-link $n(490) $n(491) $linkBW 1ms DropTail
	$ns duplex-link $n(490) $n(492) $linkBW 2ms DropTail
	$ns duplex-link $n(490) $n(493) $linkBW 4ms DropTail
	$ns duplex-link $n(490) $n(495) $linkBW 2ms DropTail
	$ns duplex-link $n(490) $n(499) $linkBW 2ms DropTail
	$ns duplex-link $n(491) $n(492) $linkBW 1ms DropTail
	$ns duplex-link $n(491) $n(495) $linkBW 1ms DropTail
	$ns duplex-link $n(491) $n(498) $linkBW 3ms DropTail
	$ns duplex-link $n(491) $n(500) $linkBW 1ms DropTail
	$ns duplex-link $n(492) $n(495) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1260..."; flush stdout }
	$ns duplex-link $n(492) $n(498) $linkBW 2ms DropTail
	$ns duplex-link $n(493) $n(496) $linkBW 3ms DropTail
	$ns duplex-link $n(493) $n(497) $linkBW 2ms DropTail
	$ns duplex-link $n(493) $n(500) $linkBW 3ms DropTail
	$ns duplex-link $n(494) $n(497) $linkBW 2ms DropTail
	$ns duplex-link $n(494) $n(499) $linkBW 1ms DropTail
	$ns duplex-link $n(495) $n(496) $linkBW 2ms DropTail
	$ns duplex-link $n(495) $n(499) $linkBW 1ms DropTail
	$ns duplex-link $n(495) $n(500) $linkBW 3ms DropTail
	$ns duplex-link $n(496) $n(498) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1270..."; flush stdout }
	$ns duplex-link $n(496) $n(499) $linkBW 2ms DropTail
	$ns duplex-link $n(496) $n(500) $linkBW 1ms DropTail
	$ns duplex-link $n(498) $n(499) $linkBW 2ms DropTail
	$ns duplex-link $n(499) $n(500) $linkBW 2ms DropTail
	$ns duplex-link $n(501) $n(504) $linkBW 3ms DropTail
	$ns duplex-link $n(501) $n(507) $linkBW 1ms DropTail
	$ns duplex-link $n(501) $n(510) $linkBW 2ms DropTail
	$ns duplex-link $n(502) $n(508) $linkBW 1ms DropTail
	$ns duplex-link $n(502) $n(509) $linkBW 1ms DropTail
	$ns duplex-link $n(502) $n(511) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "1280..."; flush stdout }
	$ns duplex-link $n(503) $n(510) $linkBW 1ms DropTail
	$ns duplex-link $n(504) $n(505) $linkBW 3ms DropTail
	$ns duplex-link $n(504) $n(508) $linkBW 2ms DropTail
	$ns duplex-link $n(504) $n(509) $linkBW 2ms DropTail
	$ns duplex-link $n(504) $n(510) $linkBW 2ms DropTail
	$ns duplex-link $n(505) $n(506) $linkBW 2ms DropTail
	$ns duplex-link $n(505) $n(510) $linkBW 1ms DropTail
	$ns duplex-link $n(506) $n(511) $linkBW 2ms DropTail
	$ns duplex-link $n(507) $n(511) $linkBW 2ms DropTail
	$ns duplex-link $n(508) $n(509) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1290..."; flush stdout }
	$ns duplex-link $n(508) $n(510) $linkBW 1ms DropTail
	$ns duplex-link $n(508) $n(511) $linkBW 2ms DropTail
	$ns duplex-link $n(509) $n(510) $linkBW 1ms DropTail
	$ns duplex-link $n(510) $n(511) $linkBW 3ms DropTail
	$ns duplex-link $n(512) $n(516) $linkBW 2ms DropTail
	$ns duplex-link $n(512) $n(518) $linkBW 1ms DropTail
	$ns duplex-link $n(512) $n(520) $linkBW 1ms DropTail
	$ns duplex-link $n(513) $n(516) $linkBW 2ms DropTail
	$ns duplex-link $n(513) $n(517) $linkBW 1ms DropTail
	$ns duplex-link $n(513) $n(520) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1300..."; flush stdout }
	$ns duplex-link $n(513) $n(521) $linkBW 3ms DropTail
	$ns duplex-link $n(513) $n(522) $linkBW 1ms DropTail
	$ns duplex-link $n(514) $n(516) $linkBW 4ms DropTail
	$ns duplex-link $n(514) $n(517) $linkBW 2ms DropTail
	$ns duplex-link $n(514) $n(521) $linkBW 1ms DropTail
	$ns duplex-link $n(514) $n(523) $linkBW 1ms DropTail
	$ns duplex-link $n(514) $n(524) $linkBW 1ms DropTail
	$ns duplex-link $n(515) $n(516) $linkBW 2ms DropTail
	$ns duplex-link $n(515) $n(518) $linkBW 1ms DropTail
	$ns duplex-link $n(515) $n(522) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "1310..."; flush stdout }
	$ns duplex-link $n(515) $n(524) $linkBW 1ms DropTail
	$ns duplex-link $n(516) $n(519) $linkBW 1ms DropTail
	$ns duplex-link $n(516) $n(520) $linkBW 1ms DropTail
	$ns duplex-link $n(516) $n(521) $linkBW 1ms DropTail
	$ns duplex-link $n(517) $n(521) $linkBW 1ms DropTail
	$ns duplex-link $n(518) $n(519) $linkBW 2ms DropTail
	$ns duplex-link $n(518) $n(521) $linkBW 2ms DropTail
	$ns duplex-link $n(518) $n(523) $linkBW 1ms DropTail
	$ns duplex-link $n(518) $n(524) $linkBW 1ms DropTail
	$ns duplex-link $n(519) $n(520) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1320..."; flush stdout }
	$ns duplex-link $n(520) $n(522) $linkBW 3ms DropTail
	$ns duplex-link $n(520) $n(524) $linkBW 1ms DropTail
	$ns duplex-link $n(521) $n(522) $linkBW 1ms DropTail
	$ns duplex-link $n(521) $n(523) $linkBW 1ms DropTail
	$ns duplex-link $n(521) $n(524) $linkBW 3ms DropTail
	$ns duplex-link $n(523) $n(524) $linkBW 1ms DropTail
	$ns duplex-link $n(525) $n(526) $linkBW 2ms DropTail
	$ns duplex-link $n(525) $n(529) $linkBW 2ms DropTail
	$ns duplex-link $n(525) $n(530) $linkBW 3ms DropTail
	$ns duplex-link $n(525) $n(532) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1330..."; flush stdout }
	$ns duplex-link $n(525) $n(535) $linkBW 2ms DropTail
	$ns duplex-link $n(526) $n(532) $linkBW 2ms DropTail
	$ns duplex-link $n(526) $n(533) $linkBW 3ms DropTail
	$ns duplex-link $n(526) $n(534) $linkBW 1ms DropTail
	$ns duplex-link $n(526) $n(535) $linkBW 2ms DropTail
	$ns duplex-link $n(526) $n(536) $linkBW 1ms DropTail
	$ns duplex-link $n(527) $n(528) $linkBW 1ms DropTail
	$ns duplex-link $n(527) $n(529) $linkBW 1ms DropTail
	$ns duplex-link $n(527) $n(531) $linkBW 3ms DropTail
	$ns duplex-link $n(528) $n(529) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1340..."; flush stdout }
	$ns duplex-link $n(529) $n(530) $linkBW 1ms DropTail
	$ns duplex-link $n(529) $n(531) $linkBW 2ms DropTail
	$ns duplex-link $n(529) $n(536) $linkBW 1ms DropTail
	$ns duplex-link $n(530) $n(531) $linkBW 1ms DropTail
	$ns duplex-link $n(530) $n(534) $linkBW 1ms DropTail
	$ns duplex-link $n(531) $n(536) $linkBW 1ms DropTail
	$ns duplex-link $n(532) $n(533) $linkBW 1ms DropTail
	$ns duplex-link $n(532) $n(534) $linkBW 2ms DropTail
	$ns duplex-link $n(533) $n(534) $linkBW 1ms DropTail
	$ns duplex-link $n(533) $n(536) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1350..."; flush stdout }
	$ns duplex-link $n(534) $n(536) $linkBW 1ms DropTail
	$ns duplex-link $n(534) $n(537) $linkBW 1ms DropTail
	$ns duplex-link $n(535) $n(536) $linkBW 1ms DropTail
	$ns duplex-link $n(536) $n(537) $linkBW 2ms DropTail
	$ns duplex-link $n(538) $n(541) $linkBW 2ms DropTail
	$ns duplex-link $n(538) $n(543) $linkBW 3ms DropTail
	$ns duplex-link $n(538) $n(544) $linkBW 1ms DropTail
	$ns duplex-link $n(538) $n(545) $linkBW 1ms DropTail
	$ns duplex-link $n(538) $n(546) $linkBW 1ms DropTail
	$ns duplex-link $n(539) $n(540) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1360..."; flush stdout }
	$ns duplex-link $n(539) $n(541) $linkBW 2ms DropTail
	$ns duplex-link $n(539) $n(545) $linkBW 1ms DropTail
	$ns duplex-link $n(539) $n(547) $linkBW 1ms DropTail
	$ns duplex-link $n(539) $n(548) $linkBW 1ms DropTail
	$ns duplex-link $n(539) $n(549) $linkBW 3ms DropTail
	$ns duplex-link $n(540) $n(541) $linkBW 1ms DropTail
	$ns duplex-link $n(540) $n(543) $linkBW 1ms DropTail
	$ns duplex-link $n(540) $n(545) $linkBW 4ms DropTail
	$ns duplex-link $n(540) $n(546) $linkBW 1ms DropTail
	$ns duplex-link $n(540) $n(549) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "1370..."; flush stdout }
	$ns duplex-link $n(541) $n(542) $linkBW 1ms DropTail
	$ns duplex-link $n(541) $n(546) $linkBW 2ms DropTail
	$ns duplex-link $n(541) $n(547) $linkBW 1ms DropTail
	$ns duplex-link $n(541) $n(548) $linkBW 2ms DropTail
	$ns duplex-link $n(541) $n(549) $linkBW 2ms DropTail
	$ns duplex-link $n(542) $n(543) $linkBW 1ms DropTail
	$ns duplex-link $n(542) $n(544) $linkBW 2ms DropTail
	$ns duplex-link $n(542) $n(545) $linkBW 2ms DropTail
	$ns duplex-link $n(542) $n(546) $linkBW 1ms DropTail
	$ns duplex-link $n(542) $n(547) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1380..."; flush stdout }
	$ns duplex-link $n(542) $n(548) $linkBW 1ms DropTail
	$ns duplex-link $n(542) $n(549) $linkBW 1ms DropTail
	$ns duplex-link $n(543) $n(545) $linkBW 1ms DropTail
	$ns duplex-link $n(543) $n(548) $linkBW 2ms DropTail
	$ns duplex-link $n(544) $n(547) $linkBW 1ms DropTail
	$ns duplex-link $n(544) $n(549) $linkBW 2ms DropTail
	$ns duplex-link $n(545) $n(547) $linkBW 1ms DropTail
	$ns duplex-link $n(546) $n(549) $linkBW 2ms DropTail
	$ns duplex-link $n(550) $n(561) $linkBW 3ms DropTail
	$ns duplex-link $n(550) $n(552) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1390..."; flush stdout }
	$ns duplex-link $n(550) $n(554) $linkBW 2ms DropTail
	$ns duplex-link $n(550) $n(556) $linkBW 2ms DropTail
	$ns duplex-link $n(550) $n(557) $linkBW 3ms DropTail
	$ns duplex-link $n(551) $n(1006) $linkBW 2ms DropTail
	$ns duplex-link $n(551) $n(628) $linkBW 1ms DropTail
	$ns duplex-link $n(551) $n(616) $linkBW 1ms DropTail
	$ns duplex-link $n(551) $n(610) $linkBW 1ms DropTail
	$ns duplex-link $n(551) $n(591) $linkBW 1ms DropTail
	$ns duplex-link $n(551) $n(582) $linkBW 2ms DropTail
	$ns duplex-link $n(551) $n(552) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1400..."; flush stdout }
	$ns duplex-link $n(551) $n(553) $linkBW 1ms DropTail
	$ns duplex-link $n(551) $n(554) $linkBW 2ms DropTail
	$ns duplex-link $n(551) $n(558) $linkBW 2ms DropTail
	$ns duplex-link $n(552) $n(636) $linkBW 1ms DropTail
	$ns duplex-link $n(552) $n(553) $linkBW 1ms DropTail
	$ns duplex-link $n(552) $n(556) $linkBW 2ms DropTail
	$ns duplex-link $n(552) $n(558) $linkBW 3ms DropTail
	$ns duplex-link $n(553) $n(657) $linkBW 1ms DropTail
	$ns duplex-link $n(553) $n(653) $linkBW 1ms DropTail
	$ns duplex-link $n(553) $n(556) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1410..."; flush stdout }
	$ns duplex-link $n(554) $n(668) $linkBW 1ms DropTail
	$ns duplex-link $n(554) $n(555) $linkBW 3ms DropTail
	$ns duplex-link $n(554) $n(558) $linkBW 1ms DropTail
	$ns duplex-link $n(555) $n(699) $linkBW 1ms DropTail
	$ns duplex-link $n(555) $n(687) $linkBW 2ms DropTail
	$ns duplex-link $n(556) $n(738) $linkBW 1ms DropTail
	$ns duplex-link $n(556) $n(713) $linkBW 2ms DropTail
	$ns duplex-link $n(556) $n(711) $linkBW 1ms DropTail
	$ns duplex-link $n(556) $n(558) $linkBW 2ms DropTail
	$ns duplex-link $n(557) $n(1005) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "1420..."; flush stdout }
	$ns duplex-link $n(557) $n(748) $linkBW 1ms DropTail
	$ns duplex-link $n(558) $n(770) $linkBW 1ms DropTail
	$ns duplex-link $n(558) $n(761) $linkBW 1ms DropTail
	$ns duplex-link $n(559) $n(561) $linkBW 2ms DropTail
	$ns duplex-link $n(559) $n(562) $linkBW 2ms DropTail
	$ns duplex-link $n(559) $n(563) $linkBW 3ms DropTail
	$ns duplex-link $n(559) $n(565) $linkBW 1ms DropTail
	$ns duplex-link $n(559) $n(566) $linkBW 1ms DropTail
	$ns duplex-link $n(560) $n(563) $linkBW 1ms DropTail
	$ns duplex-link $n(560) $n(565) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1430..."; flush stdout }
	$ns duplex-link $n(560) $n(566) $linkBW 3ms DropTail
	$ns duplex-link $n(560) $n(569) $linkBW 2ms DropTail
	$ns duplex-link $n(560) $n(570) $linkBW 3ms DropTail
	$ns duplex-link $n(561) $n(562) $linkBW 3ms DropTail
	$ns duplex-link $n(561) $n(563) $linkBW 2ms DropTail
	$ns duplex-link $n(561) $n(564) $linkBW 1ms DropTail
	$ns duplex-link $n(561) $n(565) $linkBW 3ms DropTail
	$ns duplex-link $n(562) $n(564) $linkBW 2ms DropTail
	$ns duplex-link $n(562) $n(566) $linkBW 2ms DropTail
	$ns duplex-link $n(562) $n(567) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1440..."; flush stdout }
	$ns duplex-link $n(562) $n(568) $linkBW 1ms DropTail
	$ns duplex-link $n(562) $n(570) $linkBW 2ms DropTail
	$ns duplex-link $n(563) $n(565) $linkBW 1ms DropTail
	$ns duplex-link $n(563) $n(567) $linkBW 1ms DropTail
	$ns duplex-link $n(563) $n(570) $linkBW 2ms DropTail
	$ns duplex-link $n(564) $n(567) $linkBW 1ms DropTail
	$ns duplex-link $n(564) $n(568) $linkBW 2ms DropTail
	$ns duplex-link $n(564) $n(570) $linkBW 5ms DropTail
	$ns duplex-link $n(565) $n(566) $linkBW 1ms DropTail
	$ns duplex-link $n(565) $n(569) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1450..."; flush stdout }
	$ns duplex-link $n(565) $n(570) $linkBW 3ms DropTail
	$ns duplex-link $n(567) $n(569) $linkBW 1ms DropTail
	$ns duplex-link $n(567) $n(570) $linkBW 3ms DropTail
	$ns duplex-link $n(571) $n(575) $linkBW 1ms DropTail
	$ns duplex-link $n(571) $n(576) $linkBW 1ms DropTail
	$ns duplex-link $n(571) $n(580) $linkBW 3ms DropTail
	$ns duplex-link $n(571) $n(582) $linkBW 4ms DropTail
	$ns duplex-link $n(572) $n(573) $linkBW 1ms DropTail
	$ns duplex-link $n(572) $n(577) $linkBW 3ms DropTail
	$ns duplex-link $n(572) $n(578) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1460..."; flush stdout }
	$ns duplex-link $n(572) $n(580) $linkBW 4ms DropTail
	$ns duplex-link $n(572) $n(583) $linkBW 1ms DropTail
	$ns duplex-link $n(573) $n(575) $linkBW 3ms DropTail
	$ns duplex-link $n(573) $n(576) $linkBW 1ms DropTail
	$ns duplex-link $n(574) $n(576) $linkBW 4ms DropTail
	$ns duplex-link $n(574) $n(577) $linkBW 1ms DropTail
	$ns duplex-link $n(574) $n(579) $linkBW 1ms DropTail
	$ns duplex-link $n(575) $n(576) $linkBW 1ms DropTail
	$ns duplex-link $n(575) $n(583) $linkBW 1ms DropTail
	$ns duplex-link $n(577) $n(580) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1470..."; flush stdout }
	$ns duplex-link $n(577) $n(581) $linkBW 1ms DropTail
	$ns duplex-link $n(579) $n(582) $linkBW 1ms DropTail
	$ns duplex-link $n(579) $n(583) $linkBW 1ms DropTail
	$ns duplex-link $n(580) $n(582) $linkBW 2ms DropTail
	$ns duplex-link $n(580) $n(583) $linkBW 2ms DropTail
	$ns duplex-link $n(581) $n(583) $linkBW 1ms DropTail
	$ns duplex-link $n(582) $n(583) $linkBW 1ms DropTail
	$ns duplex-link $n(584) $n(590) $linkBW 2ms DropTail
	$ns duplex-link $n(584) $n(591) $linkBW 1ms DropTail
	$ns duplex-link $n(584) $n(592) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1480..."; flush stdout }
	$ns duplex-link $n(584) $n(593) $linkBW 4ms DropTail
	$ns duplex-link $n(584) $n(594) $linkBW 3ms DropTail
	$ns duplex-link $n(584) $n(595) $linkBW 1ms DropTail
	$ns duplex-link $n(585) $n(586) $linkBW 2ms DropTail
	$ns duplex-link $n(585) $n(588) $linkBW 2ms DropTail
	$ns duplex-link $n(585) $n(589) $linkBW 1ms DropTail
	$ns duplex-link $n(585) $n(590) $linkBW 2ms DropTail
	$ns duplex-link $n(585) $n(595) $linkBW 2ms DropTail
	$ns duplex-link $n(585) $n(596) $linkBW 3ms DropTail
	$ns duplex-link $n(586) $n(589) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1490..."; flush stdout }
	$ns duplex-link $n(586) $n(590) $linkBW 2ms DropTail
	$ns duplex-link $n(586) $n(593) $linkBW 2ms DropTail
	$ns duplex-link $n(586) $n(596) $linkBW 1ms DropTail
	$ns duplex-link $n(587) $n(588) $linkBW 1ms DropTail
	$ns duplex-link $n(587) $n(592) $linkBW 1ms DropTail
	$ns duplex-link $n(587) $n(595) $linkBW 2ms DropTail
	$ns duplex-link $n(587) $n(596) $linkBW 2ms DropTail
	$ns duplex-link $n(587) $n(597) $linkBW 3ms DropTail
	$ns duplex-link $n(588) $n(591) $linkBW 1ms DropTail
	$ns duplex-link $n(588) $n(593) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "1500..."; flush stdout }
	$ns duplex-link $n(588) $n(599) $linkBW 1ms DropTail
	$ns duplex-link $n(589) $n(598) $linkBW 1ms DropTail
	$ns duplex-link $n(590) $n(591) $linkBW 2ms DropTail
	$ns duplex-link $n(590) $n(594) $linkBW 1ms DropTail
	$ns duplex-link $n(590) $n(595) $linkBW 3ms DropTail
	$ns duplex-link $n(590) $n(596) $linkBW 3ms DropTail
	$ns duplex-link $n(590) $n(597) $linkBW 1ms DropTail
	$ns duplex-link $n(590) $n(599) $linkBW 2ms DropTail
	$ns duplex-link $n(591) $n(595) $linkBW 2ms DropTail
	$ns duplex-link $n(591) $n(597) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1510..."; flush stdout }
	$ns duplex-link $n(591) $n(599) $linkBW 3ms DropTail
	$ns duplex-link $n(592) $n(596) $linkBW 1ms DropTail
	$ns duplex-link $n(592) $n(597) $linkBW 1ms DropTail
	$ns duplex-link $n(593) $n(594) $linkBW 2ms DropTail
	$ns duplex-link $n(593) $n(595) $linkBW 2ms DropTail
	$ns duplex-link $n(593) $n(596) $linkBW 1ms DropTail
	$ns duplex-link $n(593) $n(599) $linkBW 5ms DropTail
	$ns duplex-link $n(594) $n(599) $linkBW 1ms DropTail
	$ns duplex-link $n(595) $n(596) $linkBW 2ms DropTail
	$ns duplex-link $n(596) $n(598) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1520..."; flush stdout }
	$ns duplex-link $n(597) $n(598) $linkBW 1ms DropTail
	$ns duplex-link $n(600) $n(604) $linkBW 1ms DropTail
	$ns duplex-link $n(600) $n(606) $linkBW 4ms DropTail
	$ns duplex-link $n(600) $n(608) $linkBW 2ms DropTail
	$ns duplex-link $n(600) $n(609) $linkBW 1ms DropTail
	$ns duplex-link $n(601) $n(602) $linkBW 2ms DropTail
	$ns duplex-link $n(601) $n(603) $linkBW 1ms DropTail
	$ns duplex-link $n(601) $n(605) $linkBW 5ms DropTail
	$ns duplex-link $n(601) $n(607) $linkBW 3ms DropTail
	$ns duplex-link $n(601) $n(609) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1530..."; flush stdout }
	$ns duplex-link $n(602) $n(605) $linkBW 1ms DropTail
	$ns duplex-link $n(602) $n(610) $linkBW 1ms DropTail
	$ns duplex-link $n(603) $n(606) $linkBW 3ms DropTail
	$ns duplex-link $n(603) $n(608) $linkBW 1ms DropTail
	$ns duplex-link $n(603) $n(609) $linkBW 1ms DropTail
	$ns duplex-link $n(603) $n(610) $linkBW 2ms DropTail
	$ns duplex-link $n(604) $n(607) $linkBW 2ms DropTail
	$ns duplex-link $n(605) $n(607) $linkBW 3ms DropTail
	$ns duplex-link $n(605) $n(608) $linkBW 1ms DropTail
	$ns duplex-link $n(605) $n(610) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1540..."; flush stdout }
	$ns duplex-link $n(606) $n(608) $linkBW 2ms DropTail
	$ns duplex-link $n(608) $n(610) $linkBW 2ms DropTail
	$ns duplex-link $n(609) $n(610) $linkBW 1ms DropTail
	$ns duplex-link $n(611) $n(614) $linkBW 2ms DropTail
	$ns duplex-link $n(611) $n(616) $linkBW 1ms DropTail
	$ns duplex-link $n(611) $n(619) $linkBW 1ms DropTail
	$ns duplex-link $n(611) $n(622) $linkBW 1ms DropTail
	$ns duplex-link $n(612) $n(616) $linkBW 2ms DropTail
	$ns duplex-link $n(612) $n(619) $linkBW 2ms DropTail
	$ns duplex-link $n(612) $n(620) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1550..."; flush stdout }
	$ns duplex-link $n(613) $n(615) $linkBW 2ms DropTail
	$ns duplex-link $n(613) $n(619) $linkBW 1ms DropTail
	$ns duplex-link $n(613) $n(620) $linkBW 2ms DropTail
	$ns duplex-link $n(613) $n(621) $linkBW 1ms DropTail
	$ns duplex-link $n(614) $n(618) $linkBW 1ms DropTail
	$ns duplex-link $n(614) $n(620) $linkBW 1ms DropTail
	$ns duplex-link $n(615) $n(616) $linkBW 1ms DropTail
	$ns duplex-link $n(615) $n(619) $linkBW 1ms DropTail
	$ns duplex-link $n(615) $n(622) $linkBW 1ms DropTail
	$ns duplex-link $n(616) $n(618) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1560..."; flush stdout }
	$ns duplex-link $n(616) $n(619) $linkBW 2ms DropTail
	$ns duplex-link $n(616) $n(623) $linkBW 1ms DropTail
	$ns duplex-link $n(617) $n(620) $linkBW 3ms DropTail
	$ns duplex-link $n(618) $n(621) $linkBW 1ms DropTail
	$ns duplex-link $n(619) $n(620) $linkBW 5ms DropTail
	$ns duplex-link $n(619) $n(621) $linkBW 1ms DropTail
	$ns duplex-link $n(621) $n(622) $linkBW 3ms DropTail
	$ns duplex-link $n(621) $n(623) $linkBW 3ms DropTail
	$ns duplex-link $n(622) $n(623) $linkBW 1ms DropTail
	$ns duplex-link $n(624) $n(626) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1570..."; flush stdout }
	$ns duplex-link $n(624) $n(629) $linkBW 3ms DropTail
	$ns duplex-link $n(625) $n(626) $linkBW 2ms DropTail
	$ns duplex-link $n(625) $n(629) $linkBW 1ms DropTail
	$ns duplex-link $n(626) $n(627) $linkBW 1ms DropTail
	$ns duplex-link $n(626) $n(630) $linkBW 2ms DropTail
	$ns duplex-link $n(627) $n(630) $linkBW 2ms DropTail
	$ns duplex-link $n(628) $n(630) $linkBW 2ms DropTail
	$ns duplex-link $n(631) $n(632) $linkBW 2ms DropTail
	$ns duplex-link $n(631) $n(634) $linkBW 2ms DropTail
	$ns duplex-link $n(631) $n(635) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1580..."; flush stdout }
	$ns duplex-link $n(631) $n(638) $linkBW 2ms DropTail
	$ns duplex-link $n(631) $n(639) $linkBW 1ms DropTail
	$ns duplex-link $n(632) $n(633) $linkBW 1ms DropTail
	$ns duplex-link $n(632) $n(634) $linkBW 1ms DropTail
	$ns duplex-link $n(632) $n(636) $linkBW 2ms DropTail
	$ns duplex-link $n(632) $n(638) $linkBW 2ms DropTail
	$ns duplex-link $n(632) $n(640) $linkBW 2ms DropTail
	$ns duplex-link $n(632) $n(642) $linkBW 3ms DropTail
	$ns duplex-link $n(633) $n(635) $linkBW 3ms DropTail
	$ns duplex-link $n(633) $n(636) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1590..."; flush stdout }
	$ns duplex-link $n(633) $n(639) $linkBW 1ms DropTail
	$ns duplex-link $n(634) $n(637) $linkBW 1ms DropTail
	$ns duplex-link $n(634) $n(638) $linkBW 2ms DropTail
	$ns duplex-link $n(634) $n(639) $linkBW 2ms DropTail
	$ns duplex-link $n(634) $n(641) $linkBW 1ms DropTail
	$ns duplex-link $n(635) $n(637) $linkBW 2ms DropTail
	$ns duplex-link $n(635) $n(639) $linkBW 1ms DropTail
	$ns duplex-link $n(635) $n(642) $linkBW 2ms DropTail
	$ns duplex-link $n(637) $n(638) $linkBW 1ms DropTail
	$ns duplex-link $n(637) $n(639) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1600..."; flush stdout }
	$ns duplex-link $n(637) $n(640) $linkBW 3ms DropTail
	$ns duplex-link $n(638) $n(640) $linkBW 1ms DropTail
	$ns duplex-link $n(639) $n(641) $linkBW 1ms DropTail
	$ns duplex-link $n(640) $n(641) $linkBW 2ms DropTail
	$ns duplex-link $n(643) $n(644) $linkBW 1ms DropTail
	$ns duplex-link $n(643) $n(647) $linkBW 1ms DropTail
	$ns duplex-link $n(643) $n(648) $linkBW 2ms DropTail
	$ns duplex-link $n(643) $n(651) $linkBW 1ms DropTail
	$ns duplex-link $n(644) $n(650) $linkBW 3ms DropTail
	$ns duplex-link $n(644) $n(651) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1610..."; flush stdout }
	$ns duplex-link $n(644) $n(652) $linkBW 1ms DropTail
	$ns duplex-link $n(644) $n(653) $linkBW 1ms DropTail
	$ns duplex-link $n(645) $n(646) $linkBW 1ms DropTail
	$ns duplex-link $n(645) $n(647) $linkBW 2ms DropTail
	$ns duplex-link $n(645) $n(649) $linkBW 1ms DropTail
	$ns duplex-link $n(645) $n(651) $linkBW 1ms DropTail
	$ns duplex-link $n(645) $n(652) $linkBW 2ms DropTail
	$ns duplex-link $n(645) $n(653) $linkBW 1ms DropTail
	$ns duplex-link $n(646) $n(648) $linkBW 2ms DropTail
	$ns duplex-link $n(646) $n(649) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1620..."; flush stdout }
	$ns duplex-link $n(646) $n(650) $linkBW 1ms DropTail
	$ns duplex-link $n(646) $n(652) $linkBW 2ms DropTail
	$ns duplex-link $n(646) $n(653) $linkBW 3ms DropTail
	$ns duplex-link $n(647) $n(651) $linkBW 1ms DropTail
	$ns duplex-link $n(648) $n(651) $linkBW 1ms DropTail
	$ns duplex-link $n(649) $n(650) $linkBW 2ms DropTail
	$ns duplex-link $n(649) $n(652) $linkBW 2ms DropTail
	$ns duplex-link $n(649) $n(653) $linkBW 1ms DropTail
	$ns duplex-link $n(650) $n(652) $linkBW 3ms DropTail
	$ns duplex-link $n(652) $n(653) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "1630..."; flush stdout }
	$ns duplex-link $n(654) $n(655) $linkBW 3ms DropTail
	$ns duplex-link $n(654) $n(656) $linkBW 2ms DropTail
	$ns duplex-link $n(654) $n(658) $linkBW 3ms DropTail
	$ns duplex-link $n(654) $n(662) $linkBW 5ms DropTail
	$ns duplex-link $n(654) $n(663) $linkBW 1ms DropTail
	$ns duplex-link $n(654) $n(665) $linkBW 1ms DropTail
	$ns duplex-link $n(654) $n(666) $linkBW 2ms DropTail
	$ns duplex-link $n(655) $n(659) $linkBW 3ms DropTail
	$ns duplex-link $n(655) $n(660) $linkBW 2ms DropTail
	$ns duplex-link $n(655) $n(661) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1640..."; flush stdout }
	$ns duplex-link $n(655) $n(663) $linkBW 2ms DropTail
	$ns duplex-link $n(655) $n(664) $linkBW 3ms DropTail
	$ns duplex-link $n(655) $n(665) $linkBW 1ms DropTail
	$ns duplex-link $n(655) $n(666) $linkBW 1ms DropTail
	$ns duplex-link $n(656) $n(657) $linkBW 1ms DropTail
	$ns duplex-link $n(656) $n(658) $linkBW 3ms DropTail
	$ns duplex-link $n(656) $n(661) $linkBW 3ms DropTail
	$ns duplex-link $n(656) $n(662) $linkBW 3ms DropTail
	$ns duplex-link $n(656) $n(663) $linkBW 1ms DropTail
	$ns duplex-link $n(656) $n(664) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1650..."; flush stdout }
	$ns duplex-link $n(656) $n(666) $linkBW 2ms DropTail
	$ns duplex-link $n(657) $n(658) $linkBW 5ms DropTail
	$ns duplex-link $n(657) $n(660) $linkBW 2ms DropTail
	$ns duplex-link $n(657) $n(661) $linkBW 3ms DropTail
	$ns duplex-link $n(658) $n(660) $linkBW 2ms DropTail
	$ns duplex-link $n(658) $n(662) $linkBW 4ms DropTail
	$ns duplex-link $n(658) $n(663) $linkBW 1ms DropTail
	$ns duplex-link $n(658) $n(665) $linkBW 4ms DropTail
	$ns duplex-link $n(658) $n(666) $linkBW 3ms DropTail
	$ns duplex-link $n(659) $n(660) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "1660..."; flush stdout }
	$ns duplex-link $n(659) $n(662) $linkBW 5ms DropTail
	$ns duplex-link $n(659) $n(663) $linkBW 2ms DropTail
	$ns duplex-link $n(659) $n(664) $linkBW 71ms DropTail
	$ns duplex-link $n(659) $n(665) $linkBW 1ms DropTail
	$ns duplex-link $n(660) $n(663) $linkBW 2ms DropTail
	$ns duplex-link $n(660) $n(664) $linkBW 1ms DropTail
	$ns duplex-link $n(660) $n(666) $linkBW 1ms DropTail
	$ns duplex-link $n(661) $n(664) $linkBW 1ms DropTail
	$ns duplex-link $n(662) $n(664) $linkBW 1ms DropTail
	$ns duplex-link $n(662) $n(666) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1670..."; flush stdout }
	$ns duplex-link $n(663) $n(664) $linkBW 3ms DropTail
	$ns duplex-link $n(663) $n(665) $linkBW 1ms DropTail
	$ns duplex-link $n(664) $n(665) $linkBW 4ms DropTail
	$ns duplex-link $n(665) $n(666) $linkBW 5ms DropTail
	$ns duplex-link $n(667) $n(670) $linkBW 5ms DropTail
	$ns duplex-link $n(667) $n(672) $linkBW 1ms DropTail
	$ns duplex-link $n(667) $n(675) $linkBW 3ms DropTail
	$ns duplex-link $n(667) $n(676) $linkBW 3ms DropTail
	$ns duplex-link $n(668) $n(669) $linkBW 2ms DropTail
	$ns duplex-link $n(668) $n(670) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1680..."; flush stdout }
	$ns duplex-link $n(668) $n(672) $linkBW 1ms DropTail
	$ns duplex-link $n(668) $n(674) $linkBW 1ms DropTail
	$ns duplex-link $n(668) $n(675) $linkBW 5ms DropTail
	$ns duplex-link $n(668) $n(676) $linkBW 1ms DropTail
	$ns duplex-link $n(669) $n(672) $linkBW 1ms DropTail
	$ns duplex-link $n(669) $n(674) $linkBW 1ms DropTail
	$ns duplex-link $n(669) $n(676) $linkBW 2ms DropTail
	$ns duplex-link $n(669) $n(677) $linkBW 3ms DropTail
	$ns duplex-link $n(670) $n(671) $linkBW 1ms DropTail
	$ns duplex-link $n(670) $n(674) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "1690..."; flush stdout }
	$ns duplex-link $n(671) $n(673) $linkBW 1ms DropTail
	$ns duplex-link $n(671) $n(674) $linkBW 1ms DropTail
	$ns duplex-link $n(671) $n(675) $linkBW 2ms DropTail
	$ns duplex-link $n(672) $n(675) $linkBW 2ms DropTail
	$ns duplex-link $n(673) $n(674) $linkBW 1ms DropTail
	$ns duplex-link $n(673) $n(676) $linkBW 1ms DropTail
	$ns duplex-link $n(673) $n(678) $linkBW 1ms DropTail
	$ns duplex-link $n(674) $n(676) $linkBW 2ms DropTail
	$ns duplex-link $n(674) $n(678) $linkBW 2ms DropTail
	$ns duplex-link $n(675) $n(678) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1700..."; flush stdout }
	$ns duplex-link $n(676) $n(677) $linkBW 1ms DropTail
	$ns duplex-link $n(679) $n(680) $linkBW 2ms DropTail
	$ns duplex-link $n(679) $n(681) $linkBW 1ms DropTail
	$ns duplex-link $n(679) $n(682) $linkBW 3ms DropTail
	$ns duplex-link $n(679) $n(687) $linkBW 2ms DropTail
	$ns duplex-link $n(679) $n(688) $linkBW 1ms DropTail
	$ns duplex-link $n(679) $n(690) $linkBW 1ms DropTail
	$ns duplex-link $n(679) $n(691) $linkBW 3ms DropTail
	$ns duplex-link $n(680) $n(681) $linkBW 3ms DropTail
	$ns duplex-link $n(680) $n(682) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1710..."; flush stdout }
	$ns duplex-link $n(680) $n(685) $linkBW 2ms DropTail
	$ns duplex-link $n(680) $n(686) $linkBW 1ms DropTail
	$ns duplex-link $n(680) $n(687) $linkBW 1ms DropTail
	$ns duplex-link $n(680) $n(689) $linkBW 2ms DropTail
	$ns duplex-link $n(681) $n(682) $linkBW 2ms DropTail
	$ns duplex-link $n(681) $n(684) $linkBW 2ms DropTail
	$ns duplex-link $n(681) $n(686) $linkBW 1ms DropTail
	$ns duplex-link $n(681) $n(690) $linkBW 3ms DropTail
	$ns duplex-link $n(682) $n(683) $linkBW 1ms DropTail
	$ns duplex-link $n(682) $n(684) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1720..."; flush stdout }
	$ns duplex-link $n(682) $n(686) $linkBW 2ms DropTail
	$ns duplex-link $n(682) $n(687) $linkBW 1ms DropTail
	$ns duplex-link $n(682) $n(691) $linkBW 1ms DropTail
	$ns duplex-link $n(683) $n(684) $linkBW 1ms DropTail
	$ns duplex-link $n(683) $n(685) $linkBW 1ms DropTail
	$ns duplex-link $n(683) $n(690) $linkBW 2ms DropTail
	$ns duplex-link $n(684) $n(688) $linkBW 1ms DropTail
	$ns duplex-link $n(684) $n(689) $linkBW 1ms DropTail
	$ns duplex-link $n(684) $n(690) $linkBW 2ms DropTail
	$ns duplex-link $n(685) $n(686) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1730..."; flush stdout }
	$ns duplex-link $n(686) $n(687) $linkBW 2ms DropTail
	$ns duplex-link $n(687) $n(688) $linkBW 3ms DropTail
	$ns duplex-link $n(687) $n(689) $linkBW 1ms DropTail
	$ns duplex-link $n(687) $n(690) $linkBW 2ms DropTail
	$ns duplex-link $n(688) $n(691) $linkBW 2ms DropTail
	$ns duplex-link $n(689) $n(691) $linkBW 2ms DropTail
	$ns duplex-link $n(692) $n(693) $linkBW 1ms DropTail
	$ns duplex-link $n(692) $n(696) $linkBW 4ms DropTail
	$ns duplex-link $n(692) $n(698) $linkBW 2ms DropTail
	$ns duplex-link $n(692) $n(699) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1740..."; flush stdout }
	$ns duplex-link $n(692) $n(700) $linkBW 2ms DropTail
	$ns duplex-link $n(693) $n(695) $linkBW 2ms DropTail
	$ns duplex-link $n(694) $n(695) $linkBW 2ms DropTail
	$ns duplex-link $n(694) $n(696) $linkBW 2ms DropTail
	$ns duplex-link $n(694) $n(700) $linkBW 2ms DropTail
	$ns duplex-link $n(695) $n(696) $linkBW 3ms DropTail
	$ns duplex-link $n(695) $n(698) $linkBW 5ms DropTail
	$ns duplex-link $n(695) $n(699) $linkBW 2ms DropTail
	$ns duplex-link $n(696) $n(698) $linkBW 3ms DropTail
	$ns duplex-link $n(696) $n(700) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1750..."; flush stdout }
	$ns duplex-link $n(696) $n(701) $linkBW 1ms DropTail
	$ns duplex-link $n(697) $n(698) $linkBW 2ms DropTail
	$ns duplex-link $n(698) $n(701) $linkBW 2ms DropTail
	$ns duplex-link $n(700) $n(702) $linkBW 1ms DropTail
	$ns duplex-link $n(703) $n(706) $linkBW 3ms DropTail
	$ns duplex-link $n(703) $n(709) $linkBW 1ms DropTail
	$ns duplex-link $n(704) $n(706) $linkBW 1ms DropTail
	$ns duplex-link $n(704) $n(707) $linkBW 3ms DropTail
	$ns duplex-link $n(704) $n(708) $linkBW 2ms DropTail
	$ns duplex-link $n(705) $n(706) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1760..."; flush stdout }
	$ns duplex-link $n(705) $n(707) $linkBW 1ms DropTail
	$ns duplex-link $n(705) $n(708) $linkBW 2ms DropTail
	$ns duplex-link $n(705) $n(710) $linkBW 2ms DropTail
	$ns duplex-link $n(706) $n(710) $linkBW 3ms DropTail
	$ns duplex-link $n(707) $n(708) $linkBW 1ms DropTail
	$ns duplex-link $n(707) $n(709) $linkBW 1ms DropTail
	$ns duplex-link $n(708) $n(709) $linkBW 1ms DropTail
	$ns duplex-link $n(709) $n(711) $linkBW 4ms DropTail
	$ns duplex-link $n(712) $n(713) $linkBW 3ms DropTail
	$ns duplex-link $n(712) $n(714) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1770..."; flush stdout }
	$ns duplex-link $n(712) $n(716) $linkBW 1ms DropTail
	$ns duplex-link $n(712) $n(720) $linkBW 1ms DropTail
	$ns duplex-link $n(712) $n(722) $linkBW 2ms DropTail
	$ns duplex-link $n(712) $n(723) $linkBW 4ms DropTail
	$ns duplex-link $n(712) $n(724) $linkBW 2ms DropTail
	$ns duplex-link $n(712) $n(726) $linkBW 1ms DropTail
	$ns duplex-link $n(713) $n(718) $linkBW 2ms DropTail
	$ns duplex-link $n(713) $n(721) $linkBW 2ms DropTail
	$ns duplex-link $n(713) $n(723) $linkBW 1ms DropTail
	$ns duplex-link $n(713) $n(724) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1780..."; flush stdout }
	$ns duplex-link $n(713) $n(725) $linkBW 2ms DropTail
	$ns duplex-link $n(714) $n(717) $linkBW 2ms DropTail
	$ns duplex-link $n(714) $n(718) $linkBW 1ms DropTail
	$ns duplex-link $n(714) $n(720) $linkBW 1ms DropTail
	$ns duplex-link $n(714) $n(722) $linkBW 1ms DropTail
	$ns duplex-link $n(714) $n(723) $linkBW 2ms DropTail
	$ns duplex-link $n(714) $n(725) $linkBW 1ms DropTail
	$ns duplex-link $n(715) $n(717) $linkBW 4ms DropTail
	$ns duplex-link $n(715) $n(726) $linkBW 71ms DropTail
	$ns duplex-link $n(716) $n(717) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1790..."; flush stdout }
	$ns duplex-link $n(716) $n(719) $linkBW 1ms DropTail
	$ns duplex-link $n(716) $n(722) $linkBW 1ms DropTail
	$ns duplex-link $n(716) $n(725) $linkBW 3ms DropTail
	$ns duplex-link $n(717) $n(720) $linkBW 2ms DropTail
	$ns duplex-link $n(717) $n(722) $linkBW 2ms DropTail
	$ns duplex-link $n(717) $n(724) $linkBW 2ms DropTail
	$ns duplex-link $n(717) $n(726) $linkBW 1ms DropTail
	$ns duplex-link $n(718) $n(721) $linkBW 3ms DropTail
	$ns duplex-link $n(718) $n(726) $linkBW 2ms DropTail
	$ns duplex-link $n(719) $n(721) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1800..."; flush stdout }
	$ns duplex-link $n(719) $n(723) $linkBW 3ms DropTail
	$ns duplex-link $n(719) $n(725) $linkBW 1ms DropTail
	$ns duplex-link $n(720) $n(724) $linkBW 1ms DropTail
	$ns duplex-link $n(721) $n(722) $linkBW 2ms DropTail
	$ns duplex-link $n(721) $n(726) $linkBW 1ms DropTail
	$ns duplex-link $n(722) $n(725) $linkBW 4ms DropTail
	$ns duplex-link $n(722) $n(726) $linkBW 4ms DropTail
	$ns duplex-link $n(725) $n(726) $linkBW 1ms DropTail
	$ns duplex-link $n(727) $n(729) $linkBW 5ms DropTail
	$ns duplex-link $n(727) $n(730) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1810..."; flush stdout }
	$ns duplex-link $n(727) $n(737) $linkBW 2ms DropTail
	$ns duplex-link $n(728) $n(730) $linkBW 1ms DropTail
	$ns duplex-link $n(728) $n(733) $linkBW 2ms DropTail
	$ns duplex-link $n(728) $n(735) $linkBW 1ms DropTail
	$ns duplex-link $n(728) $n(736) $linkBW 3ms DropTail
	$ns duplex-link $n(728) $n(737) $linkBW 2ms DropTail
	$ns duplex-link $n(729) $n(733) $linkBW 1ms DropTail
	$ns duplex-link $n(729) $n(737) $linkBW 1ms DropTail
	$ns duplex-link $n(729) $n(738) $linkBW 2ms DropTail
	$ns duplex-link $n(730) $n(731) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1820..."; flush stdout }
	$ns duplex-link $n(730) $n(734) $linkBW 2ms DropTail
	$ns duplex-link $n(730) $n(736) $linkBW 1ms DropTail
	$ns duplex-link $n(731) $n(733) $linkBW 5ms DropTail
	$ns duplex-link $n(731) $n(734) $linkBW 1ms DropTail
	$ns duplex-link $n(731) $n(735) $linkBW 3ms DropTail
	$ns duplex-link $n(731) $n(736) $linkBW 2ms DropTail
	$ns duplex-link $n(731) $n(737) $linkBW 1ms DropTail
	$ns duplex-link $n(732) $n(736) $linkBW 1ms DropTail
	$ns duplex-link $n(733) $n(736) $linkBW 1ms DropTail
	$ns duplex-link $n(733) $n(737) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1830..."; flush stdout }
	$ns duplex-link $n(734) $n(735) $linkBW 2ms DropTail
	$ns duplex-link $n(734) $n(737) $linkBW 1ms DropTail
	$ns duplex-link $n(736) $n(738) $linkBW 1ms DropTail
	$ns duplex-link $n(739) $n(741) $linkBW 2ms DropTail
	$ns duplex-link $n(739) $n(742) $linkBW 2ms DropTail
	$ns duplex-link $n(739) $n(745) $linkBW 1ms DropTail
	$ns duplex-link $n(739) $n(748) $linkBW 2ms DropTail
	$ns duplex-link $n(740) $n(741) $linkBW 2ms DropTail
	$ns duplex-link $n(740) $n(742) $linkBW 3ms DropTail
	$ns duplex-link $n(740) $n(743) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1840..."; flush stdout }
	$ns duplex-link $n(740) $n(744) $linkBW 1ms DropTail
	$ns duplex-link $n(740) $n(746) $linkBW 2ms DropTail
	$ns duplex-link $n(740) $n(749) $linkBW 4ms DropTail
	$ns duplex-link $n(741) $n(743) $linkBW 1ms DropTail
	$ns duplex-link $n(741) $n(746) $linkBW 1ms DropTail
	$ns duplex-link $n(741) $n(750) $linkBW 2ms DropTail
	$ns duplex-link $n(742) $n(743) $linkBW 1ms DropTail
	$ns duplex-link $n(742) $n(744) $linkBW 1ms DropTail
	$ns duplex-link $n(742) $n(745) $linkBW 5ms DropTail
	$ns duplex-link $n(742) $n(746) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1850..."; flush stdout }
	$ns duplex-link $n(742) $n(748) $linkBW 1ms DropTail
	$ns duplex-link $n(742) $n(750) $linkBW 5ms DropTail
	$ns duplex-link $n(743) $n(747) $linkBW 1ms DropTail
	$ns duplex-link $n(743) $n(750) $linkBW 2ms DropTail
	$ns duplex-link $n(744) $n(746) $linkBW 1ms DropTail
	$ns duplex-link $n(744) $n(750) $linkBW 2ms DropTail
	$ns duplex-link $n(745) $n(746) $linkBW 1ms DropTail
	$ns duplex-link $n(745) $n(750) $linkBW 1ms DropTail
	$ns duplex-link $n(746) $n(747) $linkBW 1ms DropTail
	$ns duplex-link $n(746) $n(750) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1860..."; flush stdout }
	$ns duplex-link $n(747) $n(748) $linkBW 2ms DropTail
	$ns duplex-link $n(747) $n(750) $linkBW 1ms DropTail
	$ns duplex-link $n(748) $n(750) $linkBW 2ms DropTail
	$ns duplex-link $n(749) $n(750) $linkBW 2ms DropTail
	$ns duplex-link $n(751) $n(752) $linkBW 3ms DropTail
	$ns duplex-link $n(751) $n(757) $linkBW 1ms DropTail
	$ns duplex-link $n(751) $n(759) $linkBW 3ms DropTail
	$ns duplex-link $n(751) $n(760) $linkBW 2ms DropTail
	$ns duplex-link $n(752) $n(757) $linkBW 1ms DropTail
	$ns duplex-link $n(752) $n(763) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1870..."; flush stdout }
	$ns duplex-link $n(753) $n(756) $linkBW 2ms DropTail
	$ns duplex-link $n(753) $n(757) $linkBW 2ms DropTail
	$ns duplex-link $n(753) $n(762) $linkBW 2ms DropTail
	$ns duplex-link $n(753) $n(763) $linkBW 1ms DropTail
	$ns duplex-link $n(753) $n(765) $linkBW 1ms DropTail
	$ns duplex-link $n(754) $n(761) $linkBW 1ms DropTail
	$ns duplex-link $n(755) $n(758) $linkBW 3ms DropTail
	$ns duplex-link $n(755) $n(761) $linkBW 4ms DropTail
	$ns duplex-link $n(755) $n(762) $linkBW 1ms DropTail
	$ns duplex-link $n(755) $n(763) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1880..."; flush stdout }
	$ns duplex-link $n(756) $n(762) $linkBW 1ms DropTail
	$ns duplex-link $n(756) $n(765) $linkBW 5ms DropTail
	$ns duplex-link $n(757) $n(758) $linkBW 2ms DropTail
	$ns duplex-link $n(757) $n(760) $linkBW 1ms DropTail
	$ns duplex-link $n(757) $n(761) $linkBW 3ms DropTail
	$ns duplex-link $n(758) $n(759) $linkBW 3ms DropTail
	$ns duplex-link $n(758) $n(762) $linkBW 4ms DropTail
	$ns duplex-link $n(759) $n(760) $linkBW 1ms DropTail
	$ns duplex-link $n(759) $n(763) $linkBW 2ms DropTail
	$ns duplex-link $n(759) $n(764) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1890..."; flush stdout }
	$ns duplex-link $n(760) $n(761) $linkBW 1ms DropTail
	$ns duplex-link $n(761) $n(762) $linkBW 2ms DropTail
	$ns duplex-link $n(761) $n(763) $linkBW 4ms DropTail
	$ns duplex-link $n(761) $n(764) $linkBW 1ms DropTail
	$ns duplex-link $n(761) $n(765) $linkBW 1ms DropTail
	$ns duplex-link $n(762) $n(763) $linkBW 1ms DropTail
	$ns duplex-link $n(763) $n(764) $linkBW 2ms DropTail
	$ns duplex-link $n(763) $n(765) $linkBW 2ms DropTail
	$ns duplex-link $n(766) $n(772) $linkBW 2ms DropTail
	$ns duplex-link $n(766) $n(774) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1900..."; flush stdout }
	$ns duplex-link $n(767) $n(768) $linkBW 2ms DropTail
	$ns duplex-link $n(767) $n(771) $linkBW 2ms DropTail
	$ns duplex-link $n(768) $n(770) $linkBW 1ms DropTail
	$ns duplex-link $n(768) $n(771) $linkBW 2ms DropTail
	$ns duplex-link $n(768) $n(772) $linkBW 2ms DropTail
	$ns duplex-link $n(769) $n(770) $linkBW 1ms DropTail
	$ns duplex-link $n(769) $n(771) $linkBW 2ms DropTail
	$ns duplex-link $n(769) $n(773) $linkBW 2ms DropTail
	$ns duplex-link $n(769) $n(774) $linkBW 1ms DropTail
	$ns duplex-link $n(770) $n(772) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1910..."; flush stdout }
	$ns duplex-link $n(771) $n(772) $linkBW 1ms DropTail
	$ns duplex-link $n(771) $n(774) $linkBW 1ms DropTail
	$ns duplex-link $n(773) $n(774) $linkBW 3ms DropTail
	$ns duplex-link $n(775) $n(788) $linkBW 4ms DropTail
	$ns duplex-link $n(775) $n(776) $linkBW 2ms DropTail
	$ns duplex-link $n(775) $n(777) $linkBW 2ms DropTail
	$ns duplex-link $n(775) $n(779) $linkBW 1ms DropTail
	$ns duplex-link $n(775) $n(780) $linkBW 1ms DropTail
	$ns duplex-link $n(775) $n(781) $linkBW 1ms DropTail
	$ns duplex-link $n(775) $n(782) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1920..."; flush stdout }
	$ns duplex-link $n(776) $n(796) $linkBW 2ms DropTail
	$ns duplex-link $n(776) $n(777) $linkBW 3ms DropTail
	$ns duplex-link $n(776) $n(778) $linkBW 2ms DropTail
	$ns duplex-link $n(776) $n(779) $linkBW 1ms DropTail
	$ns duplex-link $n(777) $n(1008) $linkBW 1ms DropTail
	$ns duplex-link $n(777) $n(823) $linkBW 3ms DropTail
	$ns duplex-link $n(777) $n(821) $linkBW 1ms DropTail
	$ns duplex-link $n(777) $n(778) $linkBW 2ms DropTail
	$ns duplex-link $n(777) $n(779) $linkBW 2ms DropTail
	$ns duplex-link $n(777) $n(781) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1930..."; flush stdout }
	$ns duplex-link $n(778) $n(848) $linkBW 1ms DropTail
	$ns duplex-link $n(778) $n(836) $linkBW 1ms DropTail
	$ns duplex-link $n(778) $n(779) $linkBW 5ms DropTail
	$ns duplex-link $n(778) $n(781) $linkBW 3ms DropTail
	$ns duplex-link $n(778) $n(782) $linkBW 1ms DropTail
	$ns duplex-link $n(778) $n(783) $linkBW 2ms DropTail
	$ns duplex-link $n(779) $n(887) $linkBW 1ms DropTail
	$ns duplex-link $n(779) $n(883) $linkBW 1ms DropTail
	$ns duplex-link $n(779) $n(869) $linkBW 1ms DropTail
	$ns duplex-link $n(779) $n(782) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1940..."; flush stdout }
	$ns duplex-link $n(780) $n(907) $linkBW 1ms DropTail
	$ns duplex-link $n(780) $n(894) $linkBW 3ms DropTail
	$ns duplex-link $n(780) $n(781) $linkBW 1ms DropTail
	$ns duplex-link $n(780) $n(783) $linkBW 1ms DropTail
	$ns duplex-link $n(781) $n(929) $linkBW 3ms DropTail
	$ns duplex-link $n(781) $n(916) $linkBW 1ms DropTail
	$ns duplex-link $n(782) $n(959) $linkBW 1ms DropTail
	$ns duplex-link $n(782) $n(948) $linkBW 2ms DropTail
	$ns duplex-link $n(782) $n(783) $linkBW 1ms DropTail
	$ns duplex-link $n(783) $n(1006) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1950..."; flush stdout }
	$ns duplex-link $n(783) $n(995) $linkBW 2ms DropTail
	$ns duplex-link $n(783) $n(987) $linkBW 4ms DropTail
	$ns duplex-link $n(783) $n(974) $linkBW 2ms DropTail
	$ns duplex-link $n(784) $n(789) $linkBW 1ms DropTail
	$ns duplex-link $n(784) $n(790) $linkBW 5ms DropTail
	$ns duplex-link $n(784) $n(792) $linkBW 1ms DropTail
	$ns duplex-link $n(784) $n(793) $linkBW 2ms DropTail
	$ns duplex-link $n(784) $n(794) $linkBW 1ms DropTail
	$ns duplex-link $n(784) $n(795) $linkBW 1ms DropTail
	$ns duplex-link $n(785) $n(789) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "1960..."; flush stdout }
	$ns duplex-link $n(785) $n(792) $linkBW 1ms DropTail
	$ns duplex-link $n(785) $n(795) $linkBW 2ms DropTail
	$ns duplex-link $n(786) $n(789) $linkBW 4ms DropTail
	$ns duplex-link $n(787) $n(788) $linkBW 1ms DropTail
	$ns duplex-link $n(787) $n(789) $linkBW 2ms DropTail
	$ns duplex-link $n(787) $n(790) $linkBW 1ms DropTail
	$ns duplex-link $n(787) $n(791) $linkBW 3ms DropTail
	$ns duplex-link $n(787) $n(795) $linkBW 1ms DropTail
	$ns duplex-link $n(788) $n(790) $linkBW 5ms DropTail
	$ns duplex-link $n(788) $n(791) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1970..."; flush stdout }
	$ns duplex-link $n(788) $n(793) $linkBW 1ms DropTail
	$ns duplex-link $n(788) $n(795) $linkBW 3ms DropTail
	$ns duplex-link $n(789) $n(793) $linkBW 2ms DropTail
	$ns duplex-link $n(789) $n(795) $linkBW 2ms DropTail
	$ns duplex-link $n(790) $n(791) $linkBW 3ms DropTail
	$ns duplex-link $n(790) $n(793) $linkBW 1ms DropTail
	$ns duplex-link $n(790) $n(795) $linkBW 2ms DropTail
	$ns duplex-link $n(791) $n(793) $linkBW 2ms DropTail
	$ns duplex-link $n(791) $n(795) $linkBW 1ms DropTail
	$ns duplex-link $n(792) $n(794) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "1980..."; flush stdout }
	$ns duplex-link $n(793) $n(794) $linkBW 2ms DropTail
	$ns duplex-link $n(794) $n(795) $linkBW 1ms DropTail
	$ns duplex-link $n(796) $n(797) $linkBW 2ms DropTail
	$ns duplex-link $n(796) $n(798) $linkBW 1ms DropTail
	$ns duplex-link $n(796) $n(800) $linkBW 3ms DropTail
	$ns duplex-link $n(796) $n(801) $linkBW 5ms DropTail
	$ns duplex-link $n(796) $n(805) $linkBW 1ms DropTail
	$ns duplex-link $n(796) $n(807) $linkBW 2ms DropTail
	$ns duplex-link $n(797) $n(799) $linkBW 2ms DropTail
	$ns duplex-link $n(797) $n(800) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "1990..."; flush stdout }
	$ns duplex-link $n(797) $n(804) $linkBW 3ms DropTail
	$ns duplex-link $n(797) $n(806) $linkBW 71ms DropTail
	$ns duplex-link $n(798) $n(800) $linkBW 1ms DropTail
	$ns duplex-link $n(798) $n(802) $linkBW 1ms DropTail
	$ns duplex-link $n(798) $n(804) $linkBW 2ms DropTail
	$ns duplex-link $n(798) $n(805) $linkBW 1ms DropTail
	$ns duplex-link $n(798) $n(806) $linkBW 2ms DropTail
	$ns duplex-link $n(799) $n(801) $linkBW 2ms DropTail
	$ns duplex-link $n(799) $n(802) $linkBW 2ms DropTail
	$ns duplex-link $n(799) $n(806) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2000..."; flush stdout }
	$ns duplex-link $n(800) $n(803) $linkBW 1ms DropTail
	$ns duplex-link $n(800) $n(804) $linkBW 2ms DropTail
	$ns duplex-link $n(800) $n(806) $linkBW 1ms DropTail
	$ns duplex-link $n(800) $n(807) $linkBW 1ms DropTail
	$ns duplex-link $n(801) $n(802) $linkBW 1ms DropTail
	$ns duplex-link $n(801) $n(804) $linkBW 1ms DropTail
	$ns duplex-link $n(801) $n(805) $linkBW 3ms DropTail
	$ns duplex-link $n(801) $n(807) $linkBW 1ms DropTail
	$ns duplex-link $n(802) $n(804) $linkBW 2ms DropTail
	$ns duplex-link $n(802) $n(806) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2010..."; flush stdout }
	$ns duplex-link $n(803) $n(804) $linkBW 1ms DropTail
	$ns duplex-link $n(803) $n(805) $linkBW 1ms DropTail
	$ns duplex-link $n(804) $n(806) $linkBW 3ms DropTail
	$ns duplex-link $n(806) $n(807) $linkBW 2ms DropTail
	$ns duplex-link $n(808) $n(809) $linkBW 1ms DropTail
	$ns duplex-link $n(808) $n(811) $linkBW 1ms DropTail
	$ns duplex-link $n(808) $n(814) $linkBW 2ms DropTail
	$ns duplex-link $n(808) $n(815) $linkBW 2ms DropTail
	$ns duplex-link $n(808) $n(818) $linkBW 1ms DropTail
	$ns duplex-link $n(808) $n(819) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2020..."; flush stdout }
	$ns duplex-link $n(808) $n(820) $linkBW 3ms DropTail
	$ns duplex-link $n(809) $n(810) $linkBW 1ms DropTail
	$ns duplex-link $n(809) $n(811) $linkBW 2ms DropTail
	$ns duplex-link $n(809) $n(814) $linkBW 1ms DropTail
	$ns duplex-link $n(809) $n(821) $linkBW 2ms DropTail
	$ns duplex-link $n(810) $n(811) $linkBW 1ms DropTail
	$ns duplex-link $n(810) $n(813) $linkBW 1ms DropTail
	$ns duplex-link $n(810) $n(814) $linkBW 2ms DropTail
	$ns duplex-link $n(810) $n(815) $linkBW 1ms DropTail
	$ns duplex-link $n(810) $n(817) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2030..."; flush stdout }
	$ns duplex-link $n(810) $n(818) $linkBW 1ms DropTail
	$ns duplex-link $n(810) $n(820) $linkBW 2ms DropTail
	$ns duplex-link $n(810) $n(822) $linkBW 1ms DropTail
	$ns duplex-link $n(811) $n(814) $linkBW 2ms DropTail
	$ns duplex-link $n(811) $n(816) $linkBW 1ms DropTail
	$ns duplex-link $n(811) $n(821) $linkBW 2ms DropTail
	$ns duplex-link $n(812) $n(813) $linkBW 1ms DropTail
	$ns duplex-link $n(812) $n(820) $linkBW 2ms DropTail
	$ns duplex-link $n(812) $n(822) $linkBW 1ms DropTail
	$ns duplex-link $n(813) $n(814) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2040..."; flush stdout }
	$ns duplex-link $n(813) $n(815) $linkBW 1ms DropTail
	$ns duplex-link $n(813) $n(816) $linkBW 3ms DropTail
	$ns duplex-link $n(813) $n(817) $linkBW 3ms DropTail
	$ns duplex-link $n(813) $n(818) $linkBW 2ms DropTail
	$ns duplex-link $n(813) $n(820) $linkBW 1ms DropTail
	$ns duplex-link $n(814) $n(816) $linkBW 2ms DropTail
	$ns duplex-link $n(814) $n(819) $linkBW 2ms DropTail
	$ns duplex-link $n(815) $n(817) $linkBW 1ms DropTail
	$ns duplex-link $n(815) $n(818) $linkBW 1ms DropTail
	$ns duplex-link $n(815) $n(819) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2050..."; flush stdout }
	$ns duplex-link $n(815) $n(820) $linkBW 1ms DropTail
	$ns duplex-link $n(815) $n(822) $linkBW 3ms DropTail
	$ns duplex-link $n(816) $n(818) $linkBW 1ms DropTail
	$ns duplex-link $n(817) $n(818) $linkBW 1ms DropTail
	$ns duplex-link $n(817) $n(819) $linkBW 1ms DropTail
	$ns duplex-link $n(817) $n(820) $linkBW 2ms DropTail
	$ns duplex-link $n(817) $n(821) $linkBW 1ms DropTail
	$ns duplex-link $n(817) $n(822) $linkBW 2ms DropTail
	$ns duplex-link $n(818) $n(821) $linkBW 2ms DropTail
	$ns duplex-link $n(819) $n(820) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2060..."; flush stdout }
	$ns duplex-link $n(819) $n(821) $linkBW 1ms DropTail
	$ns duplex-link $n(820) $n(821) $linkBW 4ms DropTail
	$ns duplex-link $n(821) $n(822) $linkBW 1ms DropTail
	$ns duplex-link $n(823) $n(824) $linkBW 3ms DropTail
	$ns duplex-link $n(823) $n(825) $linkBW 1ms DropTail
	$ns duplex-link $n(823) $n(826) $linkBW 2ms DropTail
	$ns duplex-link $n(823) $n(827) $linkBW 1ms DropTail
	$ns duplex-link $n(823) $n(829) $linkBW 2ms DropTail
	$ns duplex-link $n(824) $n(825) $linkBW 1ms DropTail
	$ns duplex-link $n(824) $n(829) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2070..."; flush stdout }
	$ns duplex-link $n(825) $n(831) $linkBW 1ms DropTail
	$ns duplex-link $n(827) $n(830) $linkBW 1ms DropTail
	$ns duplex-link $n(828) $n(830) $linkBW 3ms DropTail
	$ns duplex-link $n(829) $n(831) $linkBW 1ms DropTail
	$ns duplex-link $n(830) $n(831) $linkBW 2ms DropTail
	$ns duplex-link $n(832) $n(833) $linkBW 2ms DropTail
	$ns duplex-link $n(832) $n(838) $linkBW 3ms DropTail
	$ns duplex-link $n(832) $n(843) $linkBW 2ms DropTail
	$ns duplex-link $n(833) $n(836) $linkBW 1ms DropTail
	$ns duplex-link $n(833) $n(838) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2080..."; flush stdout }
	$ns duplex-link $n(833) $n(839) $linkBW 1ms DropTail
	$ns duplex-link $n(833) $n(841) $linkBW 1ms DropTail
	$ns duplex-link $n(834) $n(837) $linkBW 1ms DropTail
	$ns duplex-link $n(834) $n(843) $linkBW 2ms DropTail
	$ns duplex-link $n(835) $n(837) $linkBW 5ms DropTail
	$ns duplex-link $n(835) $n(839) $linkBW 3ms DropTail
	$ns duplex-link $n(835) $n(841) $linkBW 2ms DropTail
	$ns duplex-link $n(835) $n(843) $linkBW 2ms DropTail
	$ns duplex-link $n(836) $n(841) $linkBW 1ms DropTail
	$ns duplex-link $n(836) $n(843) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2090..."; flush stdout }
	$ns duplex-link $n(837) $n(840) $linkBW 5ms DropTail
	$ns duplex-link $n(837) $n(841) $linkBW 1ms DropTail
	$ns duplex-link $n(837) $n(842) $linkBW 3ms DropTail
	$ns duplex-link $n(838) $n(839) $linkBW 2ms DropTail
	$ns duplex-link $n(839) $n(840) $linkBW 3ms DropTail
	$ns duplex-link $n(840) $n(843) $linkBW 2ms DropTail
	$ns duplex-link $n(844) $n(845) $linkBW 2ms DropTail
	$ns duplex-link $n(844) $n(846) $linkBW 1ms DropTail
	$ns duplex-link $n(844) $n(848) $linkBW 2ms DropTail
	$ns duplex-link $n(844) $n(849) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2100..."; flush stdout }
	$ns duplex-link $n(844) $n(850) $linkBW 3ms DropTail
	$ns duplex-link $n(844) $n(851) $linkBW 1ms DropTail
	$ns duplex-link $n(844) $n(852) $linkBW 3ms DropTail
	$ns duplex-link $n(844) $n(855) $linkBW 1ms DropTail
	$ns duplex-link $n(845) $n(848) $linkBW 3ms DropTail
	$ns duplex-link $n(845) $n(849) $linkBW 3ms DropTail
	$ns duplex-link $n(845) $n(853) $linkBW 4ms DropTail
	$ns duplex-link $n(845) $n(854) $linkBW 2ms DropTail
	$ns duplex-link $n(846) $n(848) $linkBW 1ms DropTail
	$ns duplex-link $n(846) $n(849) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2110..."; flush stdout }
	$ns duplex-link $n(846) $n(850) $linkBW 3ms DropTail
	$ns duplex-link $n(846) $n(851) $linkBW 1ms DropTail
	$ns duplex-link $n(846) $n(852) $linkBW 1ms DropTail
	$ns duplex-link $n(846) $n(855) $linkBW 3ms DropTail
	$ns duplex-link $n(847) $n(849) $linkBW 1ms DropTail
	$ns duplex-link $n(847) $n(852) $linkBW 1ms DropTail
	$ns duplex-link $n(847) $n(853) $linkBW 3ms DropTail
	$ns duplex-link $n(848) $n(849) $linkBW 1ms DropTail
	$ns duplex-link $n(848) $n(850) $linkBW 1ms DropTail
	$ns duplex-link $n(848) $n(851) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2120..."; flush stdout }
	$ns duplex-link $n(848) $n(853) $linkBW 2ms DropTail
	$ns duplex-link $n(849) $n(852) $linkBW 1ms DropTail
	$ns duplex-link $n(849) $n(855) $linkBW 1ms DropTail
	$ns duplex-link $n(850) $n(851) $linkBW 4ms DropTail
	$ns duplex-link $n(850) $n(852) $linkBW 1ms DropTail
	$ns duplex-link $n(850) $n(853) $linkBW 1ms DropTail
	$ns duplex-link $n(850) $n(854) $linkBW 1ms DropTail
	$ns duplex-link $n(851) $n(852) $linkBW 2ms DropTail
	$ns duplex-link $n(851) $n(854) $linkBW 3ms DropTail
	$ns duplex-link $n(852) $n(854) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2130..."; flush stdout }
	$ns duplex-link $n(853) $n(854) $linkBW 2ms DropTail
	$ns duplex-link $n(856) $n(857) $linkBW 1ms DropTail
	$ns duplex-link $n(856) $n(860) $linkBW 3ms DropTail
	$ns duplex-link $n(856) $n(862) $linkBW 1ms DropTail
	$ns duplex-link $n(856) $n(864) $linkBW 1ms DropTail
	$ns duplex-link $n(856) $n(865) $linkBW 1ms DropTail
	$ns duplex-link $n(856) $n(866) $linkBW 5ms DropTail
	$ns duplex-link $n(856) $n(867) $linkBW 2ms DropTail
	$ns duplex-link $n(856) $n(868) $linkBW 2ms DropTail
	$ns duplex-link $n(856) $n(870) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2140..."; flush stdout }
	$ns duplex-link $n(856) $n(871) $linkBW 1ms DropTail
	$ns duplex-link $n(856) $n(872) $linkBW 1ms DropTail
	$ns duplex-link $n(857) $n(858) $linkBW 1ms DropTail
	$ns duplex-link $n(857) $n(859) $linkBW 3ms DropTail
	$ns duplex-link $n(857) $n(860) $linkBW 2ms DropTail
	$ns duplex-link $n(857) $n(861) $linkBW 3ms DropTail
	$ns duplex-link $n(857) $n(865) $linkBW 3ms DropTail
	$ns duplex-link $n(857) $n(870) $linkBW 1ms DropTail
	$ns duplex-link $n(858) $n(860) $linkBW 2ms DropTail
	$ns duplex-link $n(858) $n(861) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2150..."; flush stdout }
	$ns duplex-link $n(858) $n(862) $linkBW 1ms DropTail
	$ns duplex-link $n(858) $n(865) $linkBW 1ms DropTail
	$ns duplex-link $n(858) $n(866) $linkBW 1ms DropTail
	$ns duplex-link $n(858) $n(868) $linkBW 1ms DropTail
	$ns duplex-link $n(858) $n(869) $linkBW 1ms DropTail
	$ns duplex-link $n(859) $n(862) $linkBW 1ms DropTail
	$ns duplex-link $n(859) $n(863) $linkBW 1ms DropTail
	$ns duplex-link $n(859) $n(866) $linkBW 3ms DropTail
	$ns duplex-link $n(859) $n(867) $linkBW 3ms DropTail
	$ns duplex-link $n(859) $n(870) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "2160..."; flush stdout }
	$ns duplex-link $n(859) $n(872) $linkBW 3ms DropTail
	$ns duplex-link $n(860) $n(861) $linkBW 3ms DropTail
	$ns duplex-link $n(860) $n(868) $linkBW 1ms DropTail
	$ns duplex-link $n(860) $n(869) $linkBW 3ms DropTail
	$ns duplex-link $n(860) $n(870) $linkBW 2ms DropTail
	$ns duplex-link $n(860) $n(871) $linkBW 2ms DropTail
	$ns duplex-link $n(860) $n(872) $linkBW 3ms DropTail
	$ns duplex-link $n(861) $n(863) $linkBW 3ms DropTail
	$ns duplex-link $n(861) $n(866) $linkBW 1ms DropTail
	$ns duplex-link $n(861) $n(867) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2170..."; flush stdout }
	$ns duplex-link $n(861) $n(868) $linkBW 2ms DropTail
	$ns duplex-link $n(861) $n(869) $linkBW 3ms DropTail
	$ns duplex-link $n(861) $n(870) $linkBW 1ms DropTail
	$ns duplex-link $n(862) $n(863) $linkBW 3ms DropTail
	$ns duplex-link $n(862) $n(868) $linkBW 1ms DropTail
	$ns duplex-link $n(862) $n(871) $linkBW 3ms DropTail
	$ns duplex-link $n(862) $n(872) $linkBW 2ms DropTail
	$ns duplex-link $n(863) $n(866) $linkBW 2ms DropTail
	$ns duplex-link $n(863) $n(870) $linkBW 2ms DropTail
	$ns duplex-link $n(863) $n(872) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2180..."; flush stdout }
	$ns duplex-link $n(866) $n(868) $linkBW 1ms DropTail
	$ns duplex-link $n(866) $n(869) $linkBW 1ms DropTail
	$ns duplex-link $n(866) $n(872) $linkBW 3ms DropTail
	$ns duplex-link $n(867) $n(868) $linkBW 1ms DropTail
	$ns duplex-link $n(867) $n(869) $linkBW 1ms DropTail
	$ns duplex-link $n(867) $n(870) $linkBW 2ms DropTail
	$ns duplex-link $n(868) $n(869) $linkBW 2ms DropTail
	$ns duplex-link $n(868) $n(872) $linkBW 3ms DropTail
	$ns duplex-link $n(869) $n(870) $linkBW 3ms DropTail
	$ns duplex-link $n(871) $n(872) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2190..."; flush stdout }
	$ns duplex-link $n(873) $n(875) $linkBW 5ms DropTail
	$ns duplex-link $n(873) $n(878) $linkBW 1ms DropTail
	$ns duplex-link $n(873) $n(880) $linkBW 1ms DropTail
	$ns duplex-link $n(873) $n(883) $linkBW 1ms DropTail
	$ns duplex-link $n(873) $n(884) $linkBW 1ms DropTail
	$ns duplex-link $n(874) $n(877) $linkBW 1ms DropTail
	$ns duplex-link $n(874) $n(878) $linkBW 2ms DropTail
	$ns duplex-link $n(874) $n(883) $linkBW 1ms DropTail
	$ns duplex-link $n(874) $n(885) $linkBW 3ms DropTail
	$ns duplex-link $n(875) $n(876) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "2200..."; flush stdout }
	$ns duplex-link $n(875) $n(878) $linkBW 1ms DropTail
	$ns duplex-link $n(875) $n(882) $linkBW 2ms DropTail
	$ns duplex-link $n(876) $n(877) $linkBW 1ms DropTail
	$ns duplex-link $n(876) $n(879) $linkBW 2ms DropTail
	$ns duplex-link $n(876) $n(882) $linkBW 3ms DropTail
	$ns duplex-link $n(876) $n(883) $linkBW 1ms DropTail
	$ns duplex-link $n(876) $n(885) $linkBW 3ms DropTail
	$ns duplex-link $n(877) $n(880) $linkBW 2ms DropTail
	$ns duplex-link $n(877) $n(882) $linkBW 2ms DropTail
	$ns duplex-link $n(877) $n(885) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2210..."; flush stdout }
	$ns duplex-link $n(878) $n(879) $linkBW 1ms DropTail
	$ns duplex-link $n(878) $n(880) $linkBW 1ms DropTail
	$ns duplex-link $n(878) $n(881) $linkBW 1ms DropTail
	$ns duplex-link $n(880) $n(881) $linkBW 1ms DropTail
	$ns duplex-link $n(880) $n(882) $linkBW 2ms DropTail
	$ns duplex-link $n(880) $n(885) $linkBW 3ms DropTail
	$ns duplex-link $n(881) $n(882) $linkBW 2ms DropTail
	$ns duplex-link $n(882) $n(885) $linkBW 2ms DropTail
	$ns duplex-link $n(884) $n(885) $linkBW 1ms DropTail
	$ns duplex-link $n(886) $n(888) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "2220..."; flush stdout }
	$ns duplex-link $n(886) $n(889) $linkBW 1ms DropTail
	$ns duplex-link $n(886) $n(890) $linkBW 1ms DropTail
	$ns duplex-link $n(886) $n(891) $linkBW 2ms DropTail
	$ns duplex-link $n(887) $n(889) $linkBW 3ms DropTail
	$ns duplex-link $n(888) $n(889) $linkBW 1ms DropTail
	$ns duplex-link $n(888) $n(890) $linkBW 1ms DropTail
	$ns duplex-link $n(889) $n(891) $linkBW 5ms DropTail
	$ns duplex-link $n(890) $n(891) $linkBW 3ms DropTail
	$ns duplex-link $n(892) $n(902) $linkBW 1ms DropTail
	$ns duplex-link $n(893) $n(894) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2230..."; flush stdout }
	$ns duplex-link $n(893) $n(896) $linkBW 3ms DropTail
	$ns duplex-link $n(893) $n(901) $linkBW 1ms DropTail
	$ns duplex-link $n(894) $n(895) $linkBW 2ms DropTail
	$ns duplex-link $n(894) $n(900) $linkBW 1ms DropTail
	$ns duplex-link $n(895) $n(896) $linkBW 1ms DropTail
	$ns duplex-link $n(895) $n(897) $linkBW 1ms DropTail
	$ns duplex-link $n(895) $n(899) $linkBW 1ms DropTail
	$ns duplex-link $n(895) $n(900) $linkBW 2ms DropTail
	$ns duplex-link $n(896) $n(897) $linkBW 1ms DropTail
	$ns duplex-link $n(896) $n(898) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2240..."; flush stdout }
	$ns duplex-link $n(897) $n(900) $linkBW 1ms DropTail
	$ns duplex-link $n(897) $n(901) $linkBW 2ms DropTail
	$ns duplex-link $n(898) $n(899) $linkBW 1ms DropTail
	$ns duplex-link $n(898) $n(901) $linkBW 1ms DropTail
	$ns duplex-link $n(899) $n(900) $linkBW 1ms DropTail
	$ns duplex-link $n(899) $n(902) $linkBW 2ms DropTail
	$ns duplex-link $n(901) $n(902) $linkBW 1ms DropTail
	$ns duplex-link $n(903) $n(911) $linkBW 2ms DropTail
	$ns duplex-link $n(903) $n(914) $linkBW 1ms DropTail
	$ns duplex-link $n(904) $n(907) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2250..."; flush stdout }
	$ns duplex-link $n(904) $n(908) $linkBW 5ms DropTail
	$ns duplex-link $n(904) $n(909) $linkBW 2ms DropTail
	$ns duplex-link $n(904) $n(915) $linkBW 1ms DropTail
	$ns duplex-link $n(905) $n(906) $linkBW 2ms DropTail
	$ns duplex-link $n(905) $n(910) $linkBW 1ms DropTail
	$ns duplex-link $n(905) $n(915) $linkBW 1ms DropTail
	$ns duplex-link $n(906) $n(910) $linkBW 1ms DropTail
	$ns duplex-link $n(906) $n(913) $linkBW 3ms DropTail
	$ns duplex-link $n(906) $n(914) $linkBW 1ms DropTail
	$ns duplex-link $n(907) $n(908) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2260..."; flush stdout }
	$ns duplex-link $n(907) $n(910) $linkBW 1ms DropTail
	$ns duplex-link $n(907) $n(913) $linkBW 1ms DropTail
	$ns duplex-link $n(907) $n(915) $linkBW 1ms DropTail
	$ns duplex-link $n(908) $n(909) $linkBW 1ms DropTail
	$ns duplex-link $n(908) $n(910) $linkBW 1ms DropTail
	$ns duplex-link $n(908) $n(912) $linkBW 1ms DropTail
	$ns duplex-link $n(908) $n(913) $linkBW 3ms DropTail
	$ns duplex-link $n(908) $n(915) $linkBW 1ms DropTail
	$ns duplex-link $n(909) $n(911) $linkBW 1ms DropTail
	$ns duplex-link $n(909) $n(912) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2270..."; flush stdout }
	$ns duplex-link $n(909) $n(914) $linkBW 2ms DropTail
	$ns duplex-link $n(910) $n(911) $linkBW 4ms DropTail
	$ns duplex-link $n(910) $n(913) $linkBW 1ms DropTail
	$ns duplex-link $n(910) $n(914) $linkBW 3ms DropTail
	$ns duplex-link $n(911) $n(912) $linkBW 2ms DropTail
	$ns duplex-link $n(911) $n(913) $linkBW 4ms DropTail
	$ns duplex-link $n(912) $n(913) $linkBW 1ms DropTail
	$ns duplex-link $n(912) $n(915) $linkBW 1ms DropTail
	$ns duplex-link $n(913) $n(914) $linkBW 3ms DropTail
	$ns duplex-link $n(914) $n(915) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2280..."; flush stdout }
	$ns duplex-link $n(916) $n(918) $linkBW 3ms DropTail
	$ns duplex-link $n(916) $n(922) $linkBW 1ms DropTail
	$ns duplex-link $n(917) $n(920) $linkBW 2ms DropTail
	$ns duplex-link $n(917) $n(922) $linkBW 3ms DropTail
	$ns duplex-link $n(918) $n(920) $linkBW 3ms DropTail
	$ns duplex-link $n(918) $n(923) $linkBW 2ms DropTail
	$ns duplex-link $n(919) $n(921) $linkBW 4ms DropTail
	$ns duplex-link $n(919) $n(922) $linkBW 3ms DropTail
	$ns duplex-link $n(919) $n(923) $linkBW 1ms DropTail
	$ns duplex-link $n(920) $n(921) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2290..."; flush stdout }
	$ns duplex-link $n(920) $n(923) $linkBW 2ms DropTail
	$ns duplex-link $n(920) $n(924) $linkBW 1ms DropTail
	$ns duplex-link $n(921) $n(922) $linkBW 2ms DropTail
	$ns duplex-link $n(921) $n(923) $linkBW 3ms DropTail
	$ns duplex-link $n(922) $n(924) $linkBW 1ms DropTail
	$ns duplex-link $n(925) $n(927) $linkBW 1ms DropTail
	$ns duplex-link $n(925) $n(928) $linkBW 3ms DropTail
	$ns duplex-link $n(925) $n(930) $linkBW 1ms DropTail
	$ns duplex-link $n(925) $n(933) $linkBW 1ms DropTail
	$ns duplex-link $n(925) $n(934) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2300..."; flush stdout }
	$ns duplex-link $n(925) $n(938) $linkBW 1ms DropTail
	$ns duplex-link $n(925) $n(939) $linkBW 1ms DropTail
	$ns duplex-link $n(926) $n(927) $linkBW 1ms DropTail
	$ns duplex-link $n(926) $n(928) $linkBW 1ms DropTail
	$ns duplex-link $n(926) $n(929) $linkBW 1ms DropTail
	$ns duplex-link $n(926) $n(931) $linkBW 2ms DropTail
	$ns duplex-link $n(926) $n(932) $linkBW 2ms DropTail
	$ns duplex-link $n(926) $n(935) $linkBW 1ms DropTail
	$ns duplex-link $n(927) $n(929) $linkBW 2ms DropTail
	$ns duplex-link $n(927) $n(930) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2310..."; flush stdout }
	$ns duplex-link $n(927) $n(932) $linkBW 1ms DropTail
	$ns duplex-link $n(927) $n(933) $linkBW 3ms DropTail
	$ns duplex-link $n(927) $n(934) $linkBW 5ms DropTail
	$ns duplex-link $n(927) $n(935) $linkBW 1ms DropTail
	$ns duplex-link $n(927) $n(936) $linkBW 5ms DropTail
	$ns duplex-link $n(927) $n(937) $linkBW 2ms DropTail
	$ns duplex-link $n(928) $n(929) $linkBW 1ms DropTail
	$ns duplex-link $n(928) $n(935) $linkBW 2ms DropTail
	$ns duplex-link $n(928) $n(938) $linkBW 1ms DropTail
	$ns duplex-link $n(928) $n(939) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2320..."; flush stdout }
	$ns duplex-link $n(929) $n(933) $linkBW 2ms DropTail
	$ns duplex-link $n(929) $n(935) $linkBW 2ms DropTail
	$ns duplex-link $n(930) $n(931) $linkBW 1ms DropTail
	$ns duplex-link $n(930) $n(936) $linkBW 1ms DropTail
	$ns duplex-link $n(930) $n(938) $linkBW 4ms DropTail
	$ns duplex-link $n(931) $n(934) $linkBW 1ms DropTail
	$ns duplex-link $n(931) $n(935) $linkBW 2ms DropTail
	$ns duplex-link $n(931) $n(936) $linkBW 2ms DropTail
	$ns duplex-link $n(931) $n(939) $linkBW 1ms DropTail
	$ns duplex-link $n(932) $n(933) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2330..."; flush stdout }
	$ns duplex-link $n(932) $n(935) $linkBW 1ms DropTail
	$ns duplex-link $n(932) $n(937) $linkBW 1ms DropTail
	$ns duplex-link $n(933) $n(934) $linkBW 2ms DropTail
	$ns duplex-link $n(933) $n(937) $linkBW 1ms DropTail
	$ns duplex-link $n(933) $n(939) $linkBW 1ms DropTail
	$ns duplex-link $n(934) $n(936) $linkBW 2ms DropTail
	$ns duplex-link $n(934) $n(938) $linkBW 2ms DropTail
	$ns duplex-link $n(934) $n(939) $linkBW 2ms DropTail
	$ns duplex-link $n(935) $n(939) $linkBW 1ms DropTail
	$ns duplex-link $n(936) $n(937) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2340..."; flush stdout }
	$ns duplex-link $n(936) $n(938) $linkBW 2ms DropTail
	$ns duplex-link $n(936) $n(939) $linkBW 2ms DropTail
	$ns duplex-link $n(940) $n(944) $linkBW 2ms DropTail
	$ns duplex-link $n(940) $n(949) $linkBW 1ms DropTail
	$ns duplex-link $n(940) $n(951) $linkBW 1ms DropTail
	$ns duplex-link $n(940) $n(952) $linkBW 2ms DropTail
	$ns duplex-link $n(941) $n(942) $linkBW 2ms DropTail
	$ns duplex-link $n(941) $n(943) $linkBW 1ms DropTail
	$ns duplex-link $n(941) $n(945) $linkBW 2ms DropTail
	$ns duplex-link $n(941) $n(946) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2350..."; flush stdout }
	$ns duplex-link $n(941) $n(949) $linkBW 1ms DropTail
	$ns duplex-link $n(941) $n(951) $linkBW 1ms DropTail
	$ns duplex-link $n(941) $n(952) $linkBW 5ms DropTail
	$ns duplex-link $n(942) $n(943) $linkBW 2ms DropTail
	$ns duplex-link $n(942) $n(947) $linkBW 1ms DropTail
	$ns duplex-link $n(942) $n(952) $linkBW 2ms DropTail
	$ns duplex-link $n(942) $n(953) $linkBW 1ms DropTail
	$ns duplex-link $n(943) $n(944) $linkBW 1ms DropTail
	$ns duplex-link $n(943) $n(946) $linkBW 2ms DropTail
	$ns duplex-link $n(943) $n(950) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2360..."; flush stdout }
	$ns duplex-link $n(944) $n(945) $linkBW 1ms DropTail
	$ns duplex-link $n(944) $n(946) $linkBW 2ms DropTail
	$ns duplex-link $n(944) $n(949) $linkBW 1ms DropTail
	$ns duplex-link $n(944) $n(951) $linkBW 2ms DropTail
	$ns duplex-link $n(944) $n(952) $linkBW 1ms DropTail
	$ns duplex-link $n(944) $n(953) $linkBW 1ms DropTail
	$ns duplex-link $n(945) $n(946) $linkBW 1ms DropTail
	$ns duplex-link $n(945) $n(947) $linkBW 3ms DropTail
	$ns duplex-link $n(946) $n(947) $linkBW 1ms DropTail
	$ns duplex-link $n(946) $n(950) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2370..."; flush stdout }
	$ns duplex-link $n(946) $n(952) $linkBW 1ms DropTail
	$ns duplex-link $n(946) $n(953) $linkBW 1ms DropTail
	$ns duplex-link $n(947) $n(949) $linkBW 1ms DropTail
	$ns duplex-link $n(947) $n(953) $linkBW 3ms DropTail
	$ns duplex-link $n(948) $n(950) $linkBW 2ms DropTail
	$ns duplex-link $n(949) $n(951) $linkBW 3ms DropTail
	$ns duplex-link $n(951) $n(953) $linkBW 2ms DropTail
	$ns duplex-link $n(952) $n(953) $linkBW 1ms DropTail
	$ns duplex-link $n(954) $n(957) $linkBW 2ms DropTail
	$ns duplex-link $n(954) $n(958) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2380..."; flush stdout }
	$ns duplex-link $n(954) $n(962) $linkBW 3ms DropTail
	$ns duplex-link $n(955) $n(958) $linkBW 1ms DropTail
	$ns duplex-link $n(955) $n(959) $linkBW 1ms DropTail
	$ns duplex-link $n(955) $n(961) $linkBW 2ms DropTail
	$ns duplex-link $n(956) $n(957) $linkBW 5ms DropTail
	$ns duplex-link $n(956) $n(958) $linkBW 2ms DropTail
	$ns duplex-link $n(956) $n(959) $linkBW 2ms DropTail
	$ns duplex-link $n(956) $n(960) $linkBW 3ms DropTail
	$ns duplex-link $n(956) $n(963) $linkBW 2ms DropTail
	$ns duplex-link $n(957) $n(961) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2390..."; flush stdout }
	$ns duplex-link $n(957) $n(963) $linkBW 1ms DropTail
	$ns duplex-link $n(958) $n(959) $linkBW 1ms DropTail
	$ns duplex-link $n(958) $n(961) $linkBW 2ms DropTail
	$ns duplex-link $n(959) $n(963) $linkBW 3ms DropTail
	$ns duplex-link $n(962) $n(963) $linkBW 2ms DropTail
	$ns duplex-link $n(964) $n(966) $linkBW 3ms DropTail
	$ns duplex-link $n(964) $n(969) $linkBW 1ms DropTail
	$ns duplex-link $n(964) $n(970) $linkBW 1ms DropTail
	$ns duplex-link $n(964) $n(971) $linkBW 1ms DropTail
	$ns duplex-link $n(964) $n(972) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2400..."; flush stdout }
	$ns duplex-link $n(964) $n(976) $linkBW 1ms DropTail
	$ns duplex-link $n(965) $n(966) $linkBW 2ms DropTail
	$ns duplex-link $n(965) $n(967) $linkBW 1ms DropTail
	$ns duplex-link $n(965) $n(969) $linkBW 2ms DropTail
	$ns duplex-link $n(965) $n(971) $linkBW 3ms DropTail
	$ns duplex-link $n(965) $n(972) $linkBW 1ms DropTail
	$ns duplex-link $n(965) $n(977) $linkBW 1ms DropTail
	$ns duplex-link $n(966) $n(967) $linkBW 2ms DropTail
	$ns duplex-link $n(966) $n(969) $linkBW 1ms DropTail
	$ns duplex-link $n(966) $n(972) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2410..."; flush stdout }
	$ns duplex-link $n(966) $n(973) $linkBW 3ms DropTail
	$ns duplex-link $n(967) $n(968) $linkBW 1ms DropTail
	$ns duplex-link $n(967) $n(969) $linkBW 1ms DropTail
	$ns duplex-link $n(967) $n(970) $linkBW 2ms DropTail
	$ns duplex-link $n(967) $n(971) $linkBW 2ms DropTail
	$ns duplex-link $n(967) $n(972) $linkBW 3ms DropTail
	$ns duplex-link $n(967) $n(974) $linkBW 2ms DropTail
	$ns duplex-link $n(967) $n(975) $linkBW 2ms DropTail
	$ns duplex-link $n(967) $n(977) $linkBW 2ms DropTail
	$ns duplex-link $n(968) $n(971) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2420..."; flush stdout }
	$ns duplex-link $n(968) $n(972) $linkBW 2ms DropTail
	$ns duplex-link $n(968) $n(974) $linkBW 1ms DropTail
	$ns duplex-link $n(968) $n(975) $linkBW 1ms DropTail
	$ns duplex-link $n(968) $n(976) $linkBW 2ms DropTail
	$ns duplex-link $n(968) $n(977) $linkBW 1ms DropTail
	$ns duplex-link $n(969) $n(970) $linkBW 3ms DropTail
	$ns duplex-link $n(969) $n(972) $linkBW 2ms DropTail
	$ns duplex-link $n(969) $n(975) $linkBW 1ms DropTail
	$ns duplex-link $n(970) $n(971) $linkBW 1ms DropTail
	$ns duplex-link $n(970) $n(972) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2430..."; flush stdout }
	$ns duplex-link $n(970) $n(974) $linkBW 1ms DropTail
	$ns duplex-link $n(971) $n(974) $linkBW 2ms DropTail
	$ns duplex-link $n(971) $n(975) $linkBW 1ms DropTail
	$ns duplex-link $n(972) $n(974) $linkBW 3ms DropTail
	$ns duplex-link $n(972) $n(976) $linkBW 1ms DropTail
	$ns duplex-link $n(972) $n(977) $linkBW 5ms DropTail
	$ns duplex-link $n(973) $n(974) $linkBW 1ms DropTail
	$ns duplex-link $n(973) $n(975) $linkBW 1ms DropTail
	$ns duplex-link $n(973) $n(976) $linkBW 2ms DropTail
	$ns duplex-link $n(973) $n(977) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2440..."; flush stdout }
	$ns duplex-link $n(974) $n(976) $linkBW 1ms DropTail
	$ns duplex-link $n(975) $n(976) $linkBW 3ms DropTail
	$ns duplex-link $n(976) $n(977) $linkBW 3ms DropTail
	$ns duplex-link $n(978) $n(980) $linkBW 4ms DropTail
	$ns duplex-link $n(978) $n(981) $linkBW 1ms DropTail
	$ns duplex-link $n(978) $n(988) $linkBW 1ms DropTail
	$ns duplex-link $n(979) $n(983) $linkBW 2ms DropTail
	$ns duplex-link $n(979) $n(986) $linkBW 4ms DropTail
	$ns duplex-link $n(979) $n(987) $linkBW 2ms DropTail
	$ns duplex-link $n(980) $n(981) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "2450..."; flush stdout }
	$ns duplex-link $n(980) $n(985) $linkBW 1ms DropTail
	$ns duplex-link $n(980) $n(987) $linkBW 1ms DropTail
	$ns duplex-link $n(981) $n(982) $linkBW 2ms DropTail
	$ns duplex-link $n(981) $n(983) $linkBW 1ms DropTail
	$ns duplex-link $n(981) $n(985) $linkBW 1ms DropTail
	$ns duplex-link $n(981) $n(986) $linkBW 2ms DropTail
	$ns duplex-link $n(981) $n(987) $linkBW 2ms DropTail
	$ns duplex-link $n(982) $n(983) $linkBW 2ms DropTail
	$ns duplex-link $n(982) $n(988) $linkBW 1ms DropTail
	$ns duplex-link $n(983) $n(986) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2460..."; flush stdout }
	$ns duplex-link $n(983) $n(988) $linkBW 1ms DropTail
	$ns duplex-link $n(984) $n(987) $linkBW 1ms DropTail
	$ns duplex-link $n(985) $n(987) $linkBW 1ms DropTail
	$ns duplex-link $n(989) $n(990) $linkBW 2ms DropTail
	$ns duplex-link $n(989) $n(991) $linkBW 1ms DropTail
	$ns duplex-link $n(989) $n(998) $linkBW 1ms DropTail
	$ns duplex-link $n(990) $n(991) $linkBW 5ms DropTail
	$ns duplex-link $n(990) $n(995) $linkBW 1ms DropTail
	$ns duplex-link $n(990) $n(996) $linkBW 1ms DropTail
	$ns duplex-link $n(990) $n(998) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2470..."; flush stdout }
	$ns duplex-link $n(990) $n(999) $linkBW 5ms DropTail
	$ns duplex-link $n(991) $n(992) $linkBW 1ms DropTail
	$ns duplex-link $n(991) $n(993) $linkBW 2ms DropTail
	$ns duplex-link $n(991) $n(996) $linkBW 2ms DropTail
	$ns duplex-link $n(991) $n(998) $linkBW 1ms DropTail
	$ns duplex-link $n(992) $n(999) $linkBW 3ms DropTail
	$ns duplex-link $n(993) $n(998) $linkBW 2ms DropTail
	$ns duplex-link $n(994) $n(995) $linkBW 3ms DropTail
	$ns duplex-link $n(994) $n(997) $linkBW 1ms DropTail
	$ns duplex-link $n(994) $n(999) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "2480..."; flush stdout }
	$ns duplex-link $n(995) $n(997) $linkBW 1ms DropTail
	$ns duplex-link $n(995) $n(999) $linkBW 1ms DropTail
	$ns duplex-link $n(996) $n(997) $linkBW 3ms DropTail
	$ns duplex-link $n(996) $n(999) $linkBW 2ms DropTail
	$ns duplex-link $n(998) $n(999) $linkBW 2ms DropTail
	$ns duplex-link $n(1000) $n(1014) $linkBW 3ms DropTail
	$ns duplex-link $n(1000) $n(1001) $linkBW 1ms DropTail
	$ns duplex-link $n(1000) $n(1002) $linkBW 5ms DropTail
	$ns duplex-link $n(1000) $n(1005) $linkBW 3ms DropTail
	$ns duplex-link $n(1000) $n(1007) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2490..."; flush stdout }
	$ns duplex-link $n(1000) $n(1008) $linkBW 1ms DropTail
	$ns duplex-link $n(1001) $n(1048) $linkBW 2ms DropTail
	$ns duplex-link $n(1001) $n(1037) $linkBW 1ms DropTail
	$ns duplex-link $n(1001) $n(1027) $linkBW 2ms DropTail
	$ns duplex-link $n(1001) $n(1004) $linkBW 1ms DropTail
	$ns duplex-link $n(1001) $n(1006) $linkBW 1ms DropTail
	$ns duplex-link $n(1001) $n(1007) $linkBW 1ms DropTail
	$ns duplex-link $n(1001) $n(1008) $linkBW 2ms DropTail
	$ns duplex-link $n(1001) $n(1009) $linkBW 2ms DropTail
	$ns duplex-link $n(1002) $n(1078) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2500..."; flush stdout }
	$ns duplex-link $n(1002) $n(1069) $linkBW 2ms DropTail
	$ns duplex-link $n(1002) $n(1004) $linkBW 2ms DropTail
	$ns duplex-link $n(1002) $n(1008) $linkBW 1ms DropTail
	$ns duplex-link $n(1003) $n(1134) $linkBW 2ms DropTail
	$ns duplex-link $n(1003) $n(1121) $linkBW 3ms DropTail
	$ns duplex-link $n(1003) $n(1113) $linkBW 5ms DropTail
	$ns duplex-link $n(1003) $n(1105) $linkBW 1ms DropTail
	$ns duplex-link $n(1003) $n(1094) $linkBW 2ms DropTail
	$ns duplex-link $n(1003) $n(1006) $linkBW 1ms DropTail
	$ns duplex-link $n(1003) $n(1007) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2510..."; flush stdout }
	$ns duplex-link $n(1003) $n(1009) $linkBW 1ms DropTail
	$ns duplex-link $n(1004) $n(1156) $linkBW 2ms DropTail
	$ns duplex-link $n(1004) $n(1152) $linkBW 3ms DropTail
	$ns duplex-link $n(1004) $n(1005) $linkBW 3ms DropTail
	$ns duplex-link $n(1004) $n(1006) $linkBW 1ms DropTail
	$ns duplex-link $n(1005) $n(1176) $linkBW 4ms DropTail
	$ns duplex-link $n(1005) $n(1006) $linkBW 2ms DropTail
	$ns duplex-link $n(1005) $n(1009) $linkBW 2ms DropTail
	$ns duplex-link $n(1006) $n(1200) $linkBW 1ms DropTail
	$ns duplex-link $n(1006) $n(1180) $linkBW 4ms DropTail
	if {$verbose} { puts -nonewline "2520..."; flush stdout }
	$ns duplex-link $n(1006) $n(1008) $linkBW 1ms DropTail
	$ns duplex-link $n(1007) $n(1209) $linkBW 3ms DropTail
	$ns duplex-link $n(1007) $n(1008) $linkBW 1ms DropTail
	$ns duplex-link $n(1008) $n(1234) $linkBW 3ms DropTail
	$ns duplex-link $n(1008) $n(1214) $linkBW 1ms DropTail
	$ns duplex-link $n(1009) $n(1249) $linkBW 2ms DropTail
	$ns duplex-link $n(1010) $n(1015) $linkBW 2ms DropTail
	$ns duplex-link $n(1010) $n(1018) $linkBW 5ms DropTail
	$ns duplex-link $n(1010) $n(1019) $linkBW 2ms DropTail
	$ns duplex-link $n(1010) $n(1020) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2530..."; flush stdout }
	$ns duplex-link $n(1010) $n(1021) $linkBW 3ms DropTail
	$ns duplex-link $n(1011) $n(1015) $linkBW 2ms DropTail
	$ns duplex-link $n(1011) $n(1016) $linkBW 2ms DropTail
	$ns duplex-link $n(1011) $n(1017) $linkBW 1ms DropTail
	$ns duplex-link $n(1011) $n(1018) $linkBW 2ms DropTail
	$ns duplex-link $n(1011) $n(1019) $linkBW 1ms DropTail
	$ns duplex-link $n(1011) $n(1021) $linkBW 1ms DropTail
	$ns duplex-link $n(1012) $n(1015) $linkBW 2ms DropTail
	$ns duplex-link $n(1012) $n(1016) $linkBW 1ms DropTail
	$ns duplex-link $n(1012) $n(1020) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2540..."; flush stdout }
	$ns duplex-link $n(1013) $n(1015) $linkBW 2ms DropTail
	$ns duplex-link $n(1013) $n(1016) $linkBW 1ms DropTail
	$ns duplex-link $n(1013) $n(1018) $linkBW 2ms DropTail
	$ns duplex-link $n(1014) $n(1016) $linkBW 3ms DropTail
	$ns duplex-link $n(1014) $n(1017) $linkBW 3ms DropTail
	$ns duplex-link $n(1014) $n(1020) $linkBW 1ms DropTail
	$ns duplex-link $n(1016) $n(1020) $linkBW 2ms DropTail
	$ns duplex-link $n(1017) $n(1018) $linkBW 2ms DropTail
	$ns duplex-link $n(1017) $n(1021) $linkBW 2ms DropTail
	$ns duplex-link $n(1020) $n(1021) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2550..."; flush stdout }
	$ns duplex-link $n(1022) $n(1026) $linkBW 1ms DropTail
	$ns duplex-link $n(1022) $n(1027) $linkBW 1ms DropTail
	$ns duplex-link $n(1022) $n(1028) $linkBW 2ms DropTail
	$ns duplex-link $n(1022) $n(1030) $linkBW 3ms DropTail
	$ns duplex-link $n(1023) $n(1025) $linkBW 2ms DropTail
	$ns duplex-link $n(1023) $n(1028) $linkBW 4ms DropTail
	$ns duplex-link $n(1023) $n(1029) $linkBW 3ms DropTail
	$ns duplex-link $n(1023) $n(1030) $linkBW 2ms DropTail
	$ns duplex-link $n(1023) $n(1032) $linkBW 3ms DropTail
	$ns duplex-link $n(1024) $n(1025) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2560..."; flush stdout }
	$ns duplex-link $n(1024) $n(1026) $linkBW 2ms DropTail
	$ns duplex-link $n(1024) $n(1027) $linkBW 1ms DropTail
	$ns duplex-link $n(1024) $n(1030) $linkBW 1ms DropTail
	$ns duplex-link $n(1024) $n(1032) $linkBW 1ms DropTail
	$ns duplex-link $n(1024) $n(1033) $linkBW 2ms DropTail
	$ns duplex-link $n(1025) $n(1026) $linkBW 1ms DropTail
	$ns duplex-link $n(1025) $n(1027) $linkBW 1ms DropTail
	$ns duplex-link $n(1025) $n(1032) $linkBW 1ms DropTail
	$ns duplex-link $n(1025) $n(1033) $linkBW 1ms DropTail
	$ns duplex-link $n(1025) $n(1035) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2570..."; flush stdout }
	$ns duplex-link $n(1026) $n(1031) $linkBW 1ms DropTail
	$ns duplex-link $n(1026) $n(1033) $linkBW 1ms DropTail
	$ns duplex-link $n(1027) $n(1028) $linkBW 1ms DropTail
	$ns duplex-link $n(1027) $n(1031) $linkBW 1ms DropTail
	$ns duplex-link $n(1027) $n(1032) $linkBW 3ms DropTail
	$ns duplex-link $n(1027) $n(1035) $linkBW 2ms DropTail
	$ns duplex-link $n(1028) $n(1029) $linkBW 1ms DropTail
	$ns duplex-link $n(1028) $n(1030) $linkBW 5ms DropTail
	$ns duplex-link $n(1028) $n(1032) $linkBW 1ms DropTail
	$ns duplex-link $n(1029) $n(1032) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2580..."; flush stdout }
	$ns duplex-link $n(1029) $n(1035) $linkBW 1ms DropTail
	$ns duplex-link $n(1030) $n(1031) $linkBW 1ms DropTail
	$ns duplex-link $n(1030) $n(1033) $linkBW 1ms DropTail
	$ns duplex-link $n(1030) $n(1034) $linkBW 2ms DropTail
	$ns duplex-link $n(1031) $n(1034) $linkBW 5ms DropTail
	$ns duplex-link $n(1032) $n(1033) $linkBW 2ms DropTail
	$ns duplex-link $n(1032) $n(1034) $linkBW 1ms DropTail
	$ns duplex-link $n(1033) $n(1035) $linkBW 2ms DropTail
	$ns duplex-link $n(1036) $n(1038) $linkBW 1ms DropTail
	$ns duplex-link $n(1036) $n(1039) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2590..."; flush stdout }
	$ns duplex-link $n(1036) $n(1042) $linkBW 2ms DropTail
	$ns duplex-link $n(1036) $n(1043) $linkBW 1ms DropTail
	$ns duplex-link $n(1036) $n(1044) $linkBW 2ms DropTail
	$ns duplex-link $n(1036) $n(1046) $linkBW 1ms DropTail
	$ns duplex-link $n(1037) $n(1038) $linkBW 2ms DropTail
	$ns duplex-link $n(1037) $n(1039) $linkBW 3ms DropTail
	$ns duplex-link $n(1037) $n(1042) $linkBW 1ms DropTail
	$ns duplex-link $n(1037) $n(1044) $linkBW 1ms DropTail
	$ns duplex-link $n(1038) $n(1039) $linkBW 3ms DropTail
	$ns duplex-link $n(1038) $n(1040) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2600..."; flush stdout }
	$ns duplex-link $n(1038) $n(1043) $linkBW 2ms DropTail
	$ns duplex-link $n(1038) $n(1045) $linkBW 2ms DropTail
	$ns duplex-link $n(1038) $n(1046) $linkBW 1ms DropTail
	$ns duplex-link $n(1039) $n(1040) $linkBW 3ms DropTail
	$ns duplex-link $n(1039) $n(1041) $linkBW 1ms DropTail
	$ns duplex-link $n(1039) $n(1044) $linkBW 1ms DropTail
	$ns duplex-link $n(1039) $n(1045) $linkBW 3ms DropTail
	$ns duplex-link $n(1041) $n(1043) $linkBW 1ms DropTail
	$ns duplex-link $n(1041) $n(1044) $linkBW 1ms DropTail
	$ns duplex-link $n(1041) $n(1045) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2610..."; flush stdout }
	$ns duplex-link $n(1042) $n(1045) $linkBW 1ms DropTail
	$ns duplex-link $n(1044) $n(1045) $linkBW 1ms DropTail
	$ns duplex-link $n(1044) $n(1046) $linkBW 1ms DropTail
	$ns duplex-link $n(1047) $n(1048) $linkBW 3ms DropTail
	$ns duplex-link $n(1047) $n(1049) $linkBW 1ms DropTail
	$ns duplex-link $n(1047) $n(1050) $linkBW 1ms DropTail
	$ns duplex-link $n(1047) $n(1051) $linkBW 5ms DropTail
	$ns duplex-link $n(1047) $n(1055) $linkBW 3ms DropTail
	$ns duplex-link $n(1047) $n(1056) $linkBW 1ms DropTail
	$ns duplex-link $n(1048) $n(1052) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2620..."; flush stdout }
	$ns duplex-link $n(1048) $n(1055) $linkBW 2ms DropTail
	$ns duplex-link $n(1049) $n(1050) $linkBW 2ms DropTail
	$ns duplex-link $n(1049) $n(1051) $linkBW 1ms DropTail
	$ns duplex-link $n(1049) $n(1054) $linkBW 1ms DropTail
	$ns duplex-link $n(1049) $n(1056) $linkBW 2ms DropTail
	$ns duplex-link $n(1050) $n(1051) $linkBW 2ms DropTail
	$ns duplex-link $n(1050) $n(1052) $linkBW 1ms DropTail
	$ns duplex-link $n(1050) $n(1057) $linkBW 3ms DropTail
	$ns duplex-link $n(1051) $n(1053) $linkBW 1ms DropTail
	$ns duplex-link $n(1051) $n(1054) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2630..."; flush stdout }
	$ns duplex-link $n(1051) $n(1056) $linkBW 2ms DropTail
	$ns duplex-link $n(1051) $n(1057) $linkBW 2ms DropTail
	$ns duplex-link $n(1053) $n(1054) $linkBW 2ms DropTail
	$ns duplex-link $n(1053) $n(1056) $linkBW 2ms DropTail
	$ns duplex-link $n(1053) $n(1057) $linkBW 3ms DropTail
	$ns duplex-link $n(1054) $n(1055) $linkBW 1ms DropTail
	$ns duplex-link $n(1054) $n(1057) $linkBW 1ms DropTail
	$ns duplex-link $n(1058) $n(1060) $linkBW 1ms DropTail
	$ns duplex-link $n(1058) $n(1067) $linkBW 1ms DropTail
	$ns duplex-link $n(1058) $n(1070) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2640..."; flush stdout }
	$ns duplex-link $n(1058) $n(1071) $linkBW 1ms DropTail
	$ns duplex-link $n(1059) $n(1062) $linkBW 1ms DropTail
	$ns duplex-link $n(1059) $n(1067) $linkBW 1ms DropTail
	$ns duplex-link $n(1059) $n(1068) $linkBW 1ms DropTail
	$ns duplex-link $n(1060) $n(1062) $linkBW 1ms DropTail
	$ns duplex-link $n(1060) $n(1064) $linkBW 3ms DropTail
	$ns duplex-link $n(1060) $n(1068) $linkBW 1ms DropTail
	$ns duplex-link $n(1060) $n(1070) $linkBW 1ms DropTail
	$ns duplex-link $n(1060) $n(1071) $linkBW 2ms DropTail
	$ns duplex-link $n(1061) $n(1062) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2650..."; flush stdout }
	$ns duplex-link $n(1061) $n(1065) $linkBW 3ms DropTail
	$ns duplex-link $n(1061) $n(1068) $linkBW 3ms DropTail
	$ns duplex-link $n(1062) $n(1064) $linkBW 2ms DropTail
	$ns duplex-link $n(1062) $n(1067) $linkBW 1ms DropTail
	$ns duplex-link $n(1062) $n(1069) $linkBW 1ms DropTail
	$ns duplex-link $n(1062) $n(1070) $linkBW 1ms DropTail
	$ns duplex-link $n(1062) $n(1071) $linkBW 3ms DropTail
	$ns duplex-link $n(1063) $n(1064) $linkBW 4ms DropTail
	$ns duplex-link $n(1063) $n(1069) $linkBW 1ms DropTail
	$ns duplex-link $n(1063) $n(1071) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2660..."; flush stdout }
	$ns duplex-link $n(1064) $n(1065) $linkBW 1ms DropTail
	$ns duplex-link $n(1064) $n(1066) $linkBW 1ms DropTail
	$ns duplex-link $n(1064) $n(1068) $linkBW 1ms DropTail
	$ns duplex-link $n(1064) $n(1069) $linkBW 1ms DropTail
	$ns duplex-link $n(1064) $n(1071) $linkBW 2ms DropTail
	$ns duplex-link $n(1065) $n(1068) $linkBW 2ms DropTail
	$ns duplex-link $n(1065) $n(1069) $linkBW 1ms DropTail
	$ns duplex-link $n(1065) $n(1070) $linkBW 2ms DropTail
	$ns duplex-link $n(1066) $n(1067) $linkBW 1ms DropTail
	$ns duplex-link $n(1066) $n(1068) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2670..."; flush stdout }
	$ns duplex-link $n(1066) $n(1069) $linkBW 1ms DropTail
	$ns duplex-link $n(1066) $n(1071) $linkBW 1ms DropTail
	$ns duplex-link $n(1067) $n(1071) $linkBW 1ms DropTail
	$ns duplex-link $n(1069) $n(1070) $linkBW 1ms DropTail
	$ns duplex-link $n(1072) $n(1074) $linkBW 1ms DropTail
	$ns duplex-link $n(1072) $n(1075) $linkBW 1ms DropTail
	$ns duplex-link $n(1072) $n(1081) $linkBW 1ms DropTail
	$ns duplex-link $n(1073) $n(1075) $linkBW 1ms DropTail
	$ns duplex-link $n(1073) $n(1079) $linkBW 3ms DropTail
	$ns duplex-link $n(1074) $n(1075) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2680..."; flush stdout }
	$ns duplex-link $n(1074) $n(1079) $linkBW 1ms DropTail
	$ns duplex-link $n(1075) $n(1077) $linkBW 3ms DropTail
	$ns duplex-link $n(1075) $n(1078) $linkBW 2ms DropTail
	$ns duplex-link $n(1075) $n(1079) $linkBW 1ms DropTail
	$ns duplex-link $n(1075) $n(1081) $linkBW 1ms DropTail
	$ns duplex-link $n(1076) $n(1080) $linkBW 5ms DropTail
	$ns duplex-link $n(1077) $n(1079) $linkBW 4ms DropTail
	$ns duplex-link $n(1078) $n(1080) $linkBW 1ms DropTail
	$ns duplex-link $n(1079) $n(1080) $linkBW 2ms DropTail
	$ns duplex-link $n(1082) $n(1084) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2690..."; flush stdout }
	$ns duplex-link $n(1082) $n(1085) $linkBW 1ms DropTail
	$ns duplex-link $n(1082) $n(1086) $linkBW 2ms DropTail
	$ns duplex-link $n(1082) $n(1089) $linkBW 1ms DropTail
	$ns duplex-link $n(1082) $n(1090) $linkBW 1ms DropTail
	$ns duplex-link $n(1082) $n(1092) $linkBW 1ms DropTail
	$ns duplex-link $n(1082) $n(1093) $linkBW 1ms DropTail
	$ns duplex-link $n(1083) $n(1085) $linkBW 3ms DropTail
	$ns duplex-link $n(1083) $n(1088) $linkBW 3ms DropTail
	$ns duplex-link $n(1083) $n(1090) $linkBW 1ms DropTail
	$ns duplex-link $n(1083) $n(1091) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2700..."; flush stdout }
	$ns duplex-link $n(1083) $n(1094) $linkBW 2ms DropTail
	$ns duplex-link $n(1084) $n(1086) $linkBW 4ms DropTail
	$ns duplex-link $n(1084) $n(1087) $linkBW 1ms DropTail
	$ns duplex-link $n(1084) $n(1088) $linkBW 1ms DropTail
	$ns duplex-link $n(1084) $n(1089) $linkBW 2ms DropTail
	$ns duplex-link $n(1084) $n(1093) $linkBW 2ms DropTail
	$ns duplex-link $n(1085) $n(1087) $linkBW 2ms DropTail
	$ns duplex-link $n(1085) $n(1089) $linkBW 1ms DropTail
	$ns duplex-link $n(1085) $n(1090) $linkBW 2ms DropTail
	$ns duplex-link $n(1085) $n(1092) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2710..."; flush stdout }
	$ns duplex-link $n(1085) $n(1094) $linkBW 1ms DropTail
	$ns duplex-link $n(1086) $n(1089) $linkBW 5ms DropTail
	$ns duplex-link $n(1086) $n(1091) $linkBW 3ms DropTail
	$ns duplex-link $n(1087) $n(1088) $linkBW 3ms DropTail
	$ns duplex-link $n(1087) $n(1089) $linkBW 1ms DropTail
	$ns duplex-link $n(1087) $n(1091) $linkBW 1ms DropTail
	$ns duplex-link $n(1087) $n(1092) $linkBW 1ms DropTail
	$ns duplex-link $n(1087) $n(1094) $linkBW 2ms DropTail
	$ns duplex-link $n(1088) $n(1089) $linkBW 2ms DropTail
	$ns duplex-link $n(1088) $n(1090) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2720..."; flush stdout }
	$ns duplex-link $n(1088) $n(1092) $linkBW 2ms DropTail
	$ns duplex-link $n(1089) $n(1091) $linkBW 1ms DropTail
	$ns duplex-link $n(1089) $n(1094) $linkBW 2ms DropTail
	$ns duplex-link $n(1090) $n(1092) $linkBW 2ms DropTail
	$ns duplex-link $n(1091) $n(1094) $linkBW 3ms DropTail
	$ns duplex-link $n(1095) $n(1098) $linkBW 1ms DropTail
	$ns duplex-link $n(1095) $n(1099) $linkBW 1ms DropTail
	$ns duplex-link $n(1095) $n(1102) $linkBW 1ms DropTail
	$ns duplex-link $n(1096) $n(1099) $linkBW 2ms DropTail
	$ns duplex-link $n(1096) $n(1100) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2730..."; flush stdout }
	$ns duplex-link $n(1096) $n(1102) $linkBW 1ms DropTail
	$ns duplex-link $n(1096) $n(1104) $linkBW 3ms DropTail
	$ns duplex-link $n(1097) $n(1103) $linkBW 2ms DropTail
	$ns duplex-link $n(1097) $n(1104) $linkBW 1ms DropTail
	$ns duplex-link $n(1097) $n(1105) $linkBW 2ms DropTail
	$ns duplex-link $n(1098) $n(1100) $linkBW 1ms DropTail
	$ns duplex-link $n(1098) $n(1101) $linkBW 1ms DropTail
	$ns duplex-link $n(1098) $n(1105) $linkBW 1ms DropTail
	$ns duplex-link $n(1099) $n(1103) $linkBW 1ms DropTail
	$ns duplex-link $n(1099) $n(1105) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2740..."; flush stdout }
	$ns duplex-link $n(1100) $n(1101) $linkBW 1ms DropTail
	$ns duplex-link $n(1100) $n(1102) $linkBW 1ms DropTail
	$ns duplex-link $n(1100) $n(1103) $linkBW 1ms DropTail
	$ns duplex-link $n(1100) $n(1104) $linkBW 2ms DropTail
	$ns duplex-link $n(1101) $n(1105) $linkBW 2ms DropTail
	$ns duplex-link $n(1103) $n(1104) $linkBW 1ms DropTail
	$ns duplex-link $n(1103) $n(1105) $linkBW 4ms DropTail
	$ns duplex-link $n(1106) $n(1107) $linkBW 2ms DropTail
	$ns duplex-link $n(1106) $n(1108) $linkBW 3ms DropTail
	$ns duplex-link $n(1106) $n(1111) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2750..."; flush stdout }
	$ns duplex-link $n(1106) $n(1114) $linkBW 1ms DropTail
	$ns duplex-link $n(1106) $n(1117) $linkBW 1ms DropTail
	$ns duplex-link $n(1106) $n(1119) $linkBW 5ms DropTail
	$ns duplex-link $n(1107) $n(1111) $linkBW 1ms DropTail
	$ns duplex-link $n(1107) $n(1118) $linkBW 2ms DropTail
	$ns duplex-link $n(1107) $n(1119) $linkBW 2ms DropTail
	$ns duplex-link $n(1108) $n(1110) $linkBW 3ms DropTail
	$ns duplex-link $n(1108) $n(1111) $linkBW 1ms DropTail
	$ns duplex-link $n(1108) $n(1114) $linkBW 2ms DropTail
	$ns duplex-link $n(1108) $n(1116) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2760..."; flush stdout }
	$ns duplex-link $n(1108) $n(1118) $linkBW 2ms DropTail
	$ns duplex-link $n(1108) $n(1120) $linkBW 1ms DropTail
	$ns duplex-link $n(1109) $n(1113) $linkBW 1ms DropTail
	$ns duplex-link $n(1109) $n(1114) $linkBW 2ms DropTail
	$ns duplex-link $n(1109) $n(1119) $linkBW 2ms DropTail
	$ns duplex-link $n(1110) $n(1113) $linkBW 1ms DropTail
	$ns duplex-link $n(1110) $n(1117) $linkBW 2ms DropTail
	$ns duplex-link $n(1111) $n(1112) $linkBW 2ms DropTail
	$ns duplex-link $n(1111) $n(1120) $linkBW 1ms DropTail
	$ns duplex-link $n(1112) $n(1113) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2770..."; flush stdout }
	$ns duplex-link $n(1112) $n(1118) $linkBW 2ms DropTail
	$ns duplex-link $n(1113) $n(1115) $linkBW 1ms DropTail
	$ns duplex-link $n(1113) $n(1116) $linkBW 1ms DropTail
	$ns duplex-link $n(1113) $n(1118) $linkBW 1ms DropTail
	$ns duplex-link $n(1114) $n(1116) $linkBW 3ms DropTail
	$ns duplex-link $n(1114) $n(1117) $linkBW 2ms DropTail
	$ns duplex-link $n(1114) $n(1120) $linkBW 3ms DropTail
	$ns duplex-link $n(1115) $n(1119) $linkBW 2ms DropTail
	$ns duplex-link $n(1115) $n(1120) $linkBW 2ms DropTail
	$ns duplex-link $n(1116) $n(1117) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2780..."; flush stdout }
	$ns duplex-link $n(1116) $n(1118) $linkBW 3ms DropTail
	$ns duplex-link $n(1117) $n(1119) $linkBW 1ms DropTail
	$ns duplex-link $n(1118) $n(1119) $linkBW 1ms DropTail
	$ns duplex-link $n(1118) $n(1120) $linkBW 1ms DropTail
	$ns duplex-link $n(1121) $n(1122) $linkBW 2ms DropTail
	$ns duplex-link $n(1121) $n(1124) $linkBW 2ms DropTail
	$ns duplex-link $n(1121) $n(1126) $linkBW 1ms DropTail
	$ns duplex-link $n(1121) $n(1127) $linkBW 2ms DropTail
	$ns duplex-link $n(1121) $n(1131) $linkBW 1ms DropTail
	$ns duplex-link $n(1122) $n(1123) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2790..."; flush stdout }
	$ns duplex-link $n(1122) $n(1125) $linkBW 1ms DropTail
	$ns duplex-link $n(1122) $n(1127) $linkBW 3ms DropTail
	$ns duplex-link $n(1122) $n(1128) $linkBW 1ms DropTail
	$ns duplex-link $n(1122) $n(1131) $linkBW 1ms DropTail
	$ns duplex-link $n(1123) $n(1125) $linkBW 5ms DropTail
	$ns duplex-link $n(1123) $n(1127) $linkBW 2ms DropTail
	$ns duplex-link $n(1123) $n(1129) $linkBW 1ms DropTail
	$ns duplex-link $n(1124) $n(1125) $linkBW 1ms DropTail
	$ns duplex-link $n(1124) $n(1126) $linkBW 1ms DropTail
	$ns duplex-link $n(1124) $n(1127) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "2800..."; flush stdout }
	$ns duplex-link $n(1124) $n(1129) $linkBW 1ms DropTail
	$ns duplex-link $n(1124) $n(1130) $linkBW 2ms DropTail
	$ns duplex-link $n(1125) $n(1128) $linkBW 2ms DropTail
	$ns duplex-link $n(1125) $n(1130) $linkBW 1ms DropTail
	$ns duplex-link $n(1126) $n(1127) $linkBW 1ms DropTail
	$ns duplex-link $n(1126) $n(1128) $linkBW 2ms DropTail
	$ns duplex-link $n(1126) $n(1130) $linkBW 2ms DropTail
	$ns duplex-link $n(1129) $n(1130) $linkBW 1ms DropTail
	$ns duplex-link $n(1129) $n(1131) $linkBW 2ms DropTail
	$ns duplex-link $n(1130) $n(1131) $linkBW 5ms DropTail
	if {$verbose} { puts -nonewline "2810..."; flush stdout }
	$ns duplex-link $n(1132) $n(1134) $linkBW 2ms DropTail
	$ns duplex-link $n(1132) $n(1140) $linkBW 1ms DropTail
	$ns duplex-link $n(1133) $n(1135) $linkBW 1ms DropTail
	$ns duplex-link $n(1133) $n(1136) $linkBW 2ms DropTail
	$ns duplex-link $n(1133) $n(1137) $linkBW 2ms DropTail
	$ns duplex-link $n(1133) $n(1138) $linkBW 3ms DropTail
	$ns duplex-link $n(1133) $n(1139) $linkBW 2ms DropTail
	$ns duplex-link $n(1133) $n(1141) $linkBW 1ms DropTail
	$ns duplex-link $n(1134) $n(1135) $linkBW 4ms DropTail
	$ns duplex-link $n(1134) $n(1136) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2820..."; flush stdout }
	$ns duplex-link $n(1134) $n(1138) $linkBW 1ms DropTail
	$ns duplex-link $n(1134) $n(1140) $linkBW 1ms DropTail
	$ns duplex-link $n(1135) $n(1136) $linkBW 1ms DropTail
	$ns duplex-link $n(1135) $n(1137) $linkBW 2ms DropTail
	$ns duplex-link $n(1135) $n(1139) $linkBW 1ms DropTail
	$ns duplex-link $n(1135) $n(1140) $linkBW 3ms DropTail
	$ns duplex-link $n(1135) $n(1141) $linkBW 3ms DropTail
	$ns duplex-link $n(1136) $n(1137) $linkBW 2ms DropTail
	$ns duplex-link $n(1136) $n(1140) $linkBW 1ms DropTail
	$ns duplex-link $n(1137) $n(1138) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2830..."; flush stdout }
	$ns duplex-link $n(1137) $n(1140) $linkBW 1ms DropTail
	$ns duplex-link $n(1137) $n(1141) $linkBW 2ms DropTail
	$ns duplex-link $n(1138) $n(1141) $linkBW 2ms DropTail
	$ns duplex-link $n(1142) $n(1145) $linkBW 2ms DropTail
	$ns duplex-link $n(1142) $n(1148) $linkBW 2ms DropTail
	$ns duplex-link $n(1142) $n(1149) $linkBW 1ms DropTail
	$ns duplex-link $n(1142) $n(1150) $linkBW 2ms DropTail
	$ns duplex-link $n(1142) $n(1151) $linkBW 1ms DropTail
	$ns duplex-link $n(1143) $n(1147) $linkBW 1ms DropTail
	$ns duplex-link $n(1143) $n(1151) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2840..."; flush stdout }
	$ns duplex-link $n(1143) $n(1152) $linkBW 3ms DropTail
	$ns duplex-link $n(1144) $n(1147) $linkBW 3ms DropTail
	$ns duplex-link $n(1144) $n(1149) $linkBW 1ms DropTail
	$ns duplex-link $n(1144) $n(1151) $linkBW 1ms DropTail
	$ns duplex-link $n(1144) $n(1152) $linkBW 2ms DropTail
	$ns duplex-link $n(1144) $n(1153) $linkBW 1ms DropTail
	$ns duplex-link $n(1145) $n(1147) $linkBW 1ms DropTail
	$ns duplex-link $n(1145) $n(1149) $linkBW 2ms DropTail
	$ns duplex-link $n(1145) $n(1150) $linkBW 1ms DropTail
	$ns duplex-link $n(1145) $n(1152) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2850..."; flush stdout }
	$ns duplex-link $n(1145) $n(1153) $linkBW 2ms DropTail
	$ns duplex-link $n(1146) $n(1148) $linkBW 2ms DropTail
	$ns duplex-link $n(1146) $n(1152) $linkBW 1ms DropTail
	$ns duplex-link $n(1147) $n(1148) $linkBW 1ms DropTail
	$ns duplex-link $n(1147) $n(1150) $linkBW 3ms DropTail
	$ns duplex-link $n(1148) $n(1153) $linkBW 2ms DropTail
	$ns duplex-link $n(1150) $n(1152) $linkBW 1ms DropTail
	$ns duplex-link $n(1151) $n(1153) $linkBW 3ms DropTail
	$ns duplex-link $n(1154) $n(1155) $linkBW 1ms DropTail
	$ns duplex-link $n(1154) $n(1162) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2860..."; flush stdout }
	$ns duplex-link $n(1154) $n(1163) $linkBW 1ms DropTail
	$ns duplex-link $n(1154) $n(1164) $linkBW 1ms DropTail
	$ns duplex-link $n(1155) $n(1157) $linkBW 3ms DropTail
	$ns duplex-link $n(1155) $n(1159) $linkBW 2ms DropTail
	$ns duplex-link $n(1155) $n(1163) $linkBW 1ms DropTail
	$ns duplex-link $n(1156) $n(1158) $linkBW 3ms DropTail
	$ns duplex-link $n(1156) $n(1160) $linkBW 1ms DropTail
	$ns duplex-link $n(1156) $n(1161) $linkBW 2ms DropTail
	$ns duplex-link $n(1156) $n(1162) $linkBW 2ms DropTail
	$ns duplex-link $n(1156) $n(1163) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2870..."; flush stdout }
	$ns duplex-link $n(1156) $n(1165) $linkBW 1ms DropTail
	$ns duplex-link $n(1157) $n(1160) $linkBW 3ms DropTail
	$ns duplex-link $n(1157) $n(1164) $linkBW 1ms DropTail
	$ns duplex-link $n(1158) $n(1159) $linkBW 2ms DropTail
	$ns duplex-link $n(1158) $n(1161) $linkBW 2ms DropTail
	$ns duplex-link $n(1159) $n(1161) $linkBW 1ms DropTail
	$ns duplex-link $n(1159) $n(1162) $linkBW 3ms DropTail
	$ns duplex-link $n(1160) $n(1163) $linkBW 2ms DropTail
	$ns duplex-link $n(1160) $n(1165) $linkBW 3ms DropTail
	$ns duplex-link $n(1161) $n(1163) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2880..."; flush stdout }
	$ns duplex-link $n(1161) $n(1165) $linkBW 1ms DropTail
	$ns duplex-link $n(1162) $n(1163) $linkBW 1ms DropTail
	$ns duplex-link $n(1162) $n(1164) $linkBW 3ms DropTail
	$ns duplex-link $n(1162) $n(1165) $linkBW 2ms DropTail
	$ns duplex-link $n(1163) $n(1164) $linkBW 2ms DropTail
	$ns duplex-link $n(1164) $n(1165) $linkBW 1ms DropTail
	$ns duplex-link $n(1166) $n(1167) $linkBW 1ms DropTail
	$ns duplex-link $n(1166) $n(1168) $linkBW 5ms DropTail
	$ns duplex-link $n(1166) $n(1169) $linkBW 1ms DropTail
	$ns duplex-link $n(1166) $n(1171) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2890..."; flush stdout }
	$ns duplex-link $n(1166) $n(1173) $linkBW 2ms DropTail
	$ns duplex-link $n(1166) $n(1176) $linkBW 2ms DropTail
	$ns duplex-link $n(1166) $n(1177) $linkBW 2ms DropTail
	$ns duplex-link $n(1167) $n(1175) $linkBW 1ms DropTail
	$ns duplex-link $n(1167) $n(1177) $linkBW 2ms DropTail
	$ns duplex-link $n(1168) $n(1169) $linkBW 1ms DropTail
	$ns duplex-link $n(1168) $n(1170) $linkBW 1ms DropTail
	$ns duplex-link $n(1168) $n(1171) $linkBW 1ms DropTail
	$ns duplex-link $n(1168) $n(1173) $linkBW 1ms DropTail
	$ns duplex-link $n(1168) $n(1175) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2900..."; flush stdout }
	$ns duplex-link $n(1168) $n(1177) $linkBW 1ms DropTail
	$ns duplex-link $n(1169) $n(1170) $linkBW 1ms DropTail
	$ns duplex-link $n(1169) $n(1174) $linkBW 3ms DropTail
	$ns duplex-link $n(1169) $n(1175) $linkBW 2ms DropTail
	$ns duplex-link $n(1169) $n(1177) $linkBW 2ms DropTail
	$ns duplex-link $n(1170) $n(1176) $linkBW 1ms DropTail
	$ns duplex-link $n(1171) $n(1175) $linkBW 1ms DropTail
	$ns duplex-link $n(1171) $n(1177) $linkBW 1ms DropTail
	$ns duplex-link $n(1172) $n(1173) $linkBW 2ms DropTail
	$ns duplex-link $n(1172) $n(1175) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2910..."; flush stdout }
	$ns duplex-link $n(1172) $n(1176) $linkBW 1ms DropTail
	$ns duplex-link $n(1173) $n(1174) $linkBW 1ms DropTail
	$ns duplex-link $n(1174) $n(1177) $linkBW 2ms DropTail
	$ns duplex-link $n(1175) $n(1176) $linkBW 2ms DropTail
	$ns duplex-link $n(1178) $n(1181) $linkBW 1ms DropTail
	$ns duplex-link $n(1178) $n(1183) $linkBW 1ms DropTail
	$ns duplex-link $n(1178) $n(1188) $linkBW 2ms DropTail
	$ns duplex-link $n(1178) $n(1189) $linkBW 1ms DropTail
	$ns duplex-link $n(1179) $n(1184) $linkBW 1ms DropTail
	$ns duplex-link $n(1179) $n(1186) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2920..."; flush stdout }
	$ns duplex-link $n(1180) $n(1186) $linkBW 3ms DropTail
	$ns duplex-link $n(1181) $n(1182) $linkBW 1ms DropTail
	$ns duplex-link $n(1181) $n(1183) $linkBW 3ms DropTail
	$ns duplex-link $n(1181) $n(1184) $linkBW 1ms DropTail
	$ns duplex-link $n(1181) $n(1188) $linkBW 1ms DropTail
	$ns duplex-link $n(1181) $n(1189) $linkBW 2ms DropTail
	$ns duplex-link $n(1182) $n(1183) $linkBW 2ms DropTail
	$ns duplex-link $n(1182) $n(1184) $linkBW 2ms DropTail
	$ns duplex-link $n(1182) $n(1185) $linkBW 3ms DropTail
	$ns duplex-link $n(1182) $n(1186) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2930..."; flush stdout }
	$ns duplex-link $n(1182) $n(1188) $linkBW 1ms DropTail
	$ns duplex-link $n(1182) $n(1189) $linkBW 1ms DropTail
	$ns duplex-link $n(1183) $n(1184) $linkBW 2ms DropTail
	$ns duplex-link $n(1183) $n(1185) $linkBW 2ms DropTail
	$ns duplex-link $n(1183) $n(1187) $linkBW 2ms DropTail
	$ns duplex-link $n(1183) $n(1188) $linkBW 2ms DropTail
	$ns duplex-link $n(1184) $n(1187) $linkBW 1ms DropTail
	$ns duplex-link $n(1184) $n(1188) $linkBW 2ms DropTail
	$ns duplex-link $n(1184) $n(1189) $linkBW 2ms DropTail
	$ns duplex-link $n(1185) $n(1186) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2940..."; flush stdout }
	$ns duplex-link $n(1185) $n(1188) $linkBW 3ms DropTail
	$ns duplex-link $n(1185) $n(1189) $linkBW 1ms DropTail
	$ns duplex-link $n(1186) $n(1187) $linkBW 3ms DropTail
	$ns duplex-link $n(1188) $n(1189) $linkBW 1ms DropTail
	$ns duplex-link $n(1190) $n(1193) $linkBW 5ms DropTail
	$ns duplex-link $n(1190) $n(1195) $linkBW 1ms DropTail
	$ns duplex-link $n(1190) $n(1197) $linkBW 1ms DropTail
	$ns duplex-link $n(1190) $n(1201) $linkBW 3ms DropTail
	$ns duplex-link $n(1191) $n(1196) $linkBW 2ms DropTail
	$ns duplex-link $n(1191) $n(1197) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2950..."; flush stdout }
	$ns duplex-link $n(1192) $n(1195) $linkBW 1ms DropTail
	$ns duplex-link $n(1192) $n(1198) $linkBW 1ms DropTail
	$ns duplex-link $n(1192) $n(1199) $linkBW 2ms DropTail
	$ns duplex-link $n(1192) $n(1200) $linkBW 1ms DropTail
	$ns duplex-link $n(1193) $n(1194) $linkBW 3ms DropTail
	$ns duplex-link $n(1193) $n(1197) $linkBW 2ms DropTail
	$ns duplex-link $n(1193) $n(1198) $linkBW 1ms DropTail
	$ns duplex-link $n(1193) $n(1200) $linkBW 1ms DropTail
	$ns duplex-link $n(1193) $n(1201) $linkBW 1ms DropTail
	$ns duplex-link $n(1194) $n(1195) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2960..."; flush stdout }
	$ns duplex-link $n(1194) $n(1196) $linkBW 2ms DropTail
	$ns duplex-link $n(1194) $n(1197) $linkBW 2ms DropTail
	$ns duplex-link $n(1194) $n(1198) $linkBW 1ms DropTail
	$ns duplex-link $n(1194) $n(1199) $linkBW 1ms DropTail
	$ns duplex-link $n(1195) $n(1196) $linkBW 3ms DropTail
	$ns duplex-link $n(1195) $n(1199) $linkBW 1ms DropTail
	$ns duplex-link $n(1195) $n(1200) $linkBW 2ms DropTail
	$ns duplex-link $n(1195) $n(1201) $linkBW 1ms DropTail
	$ns duplex-link $n(1196) $n(1197) $linkBW 3ms DropTail
	$ns duplex-link $n(1197) $n(1200) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2970..."; flush stdout }
	$ns duplex-link $n(1197) $n(1201) $linkBW 2ms DropTail
	$ns duplex-link $n(1198) $n(1199) $linkBW 1ms DropTail
	$ns duplex-link $n(1198) $n(1201) $linkBW 2ms DropTail
	$ns duplex-link $n(1202) $n(1203) $linkBW 2ms DropTail
	$ns duplex-link $n(1202) $n(1205) $linkBW 2ms DropTail
	$ns duplex-link $n(1202) $n(1208) $linkBW 1ms DropTail
	$ns duplex-link $n(1202) $n(1211) $linkBW 1ms DropTail
	$ns duplex-link $n(1202) $n(1212) $linkBW 1ms DropTail
	$ns duplex-link $n(1203) $n(1204) $linkBW 1ms DropTail
	$ns duplex-link $n(1203) $n(1206) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "2980..."; flush stdout }
	$ns duplex-link $n(1204) $n(1206) $linkBW 2ms DropTail
	$ns duplex-link $n(1204) $n(1213) $linkBW 2ms DropTail
	$ns duplex-link $n(1205) $n(1206) $linkBW 1ms DropTail
	$ns duplex-link $n(1205) $n(1207) $linkBW 2ms DropTail
	$ns duplex-link $n(1205) $n(1208) $linkBW 3ms DropTail
	$ns duplex-link $n(1205) $n(1211) $linkBW 2ms DropTail
	$ns duplex-link $n(1206) $n(1209) $linkBW 1ms DropTail
	$ns duplex-link $n(1207) $n(1208) $linkBW 1ms DropTail
	$ns duplex-link $n(1207) $n(1209) $linkBW 1ms DropTail
	$ns duplex-link $n(1208) $n(1212) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "2990..."; flush stdout }
	$ns duplex-link $n(1208) $n(1213) $linkBW 3ms DropTail
	$ns duplex-link $n(1209) $n(1213) $linkBW 5ms DropTail
	$ns duplex-link $n(1210) $n(1212) $linkBW 1ms DropTail
	$ns duplex-link $n(1214) $n(1216) $linkBW 2ms DropTail
	$ns duplex-link $n(1215) $n(1217) $linkBW 1ms DropTail
	$ns duplex-link $n(1215) $n(1220) $linkBW 2ms DropTail
	$ns duplex-link $n(1215) $n(1222) $linkBW 1ms DropTail
	$ns duplex-link $n(1215) $n(1223) $linkBW 1ms DropTail
	$ns duplex-link $n(1216) $n(1217) $linkBW 2ms DropTail
	$ns duplex-link $n(1216) $n(1222) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "3000..."; flush stdout }
	$ns duplex-link $n(1217) $n(1219) $linkBW 1ms DropTail
	$ns duplex-link $n(1217) $n(1221) $linkBW 3ms DropTail
	$ns duplex-link $n(1217) $n(1222) $linkBW 1ms DropTail
	$ns duplex-link $n(1218) $n(1221) $linkBW 1ms DropTail
	$ns duplex-link $n(1218) $n(1222) $linkBW 1ms DropTail
	$ns duplex-link $n(1219) $n(1220) $linkBW 1ms DropTail
	$ns duplex-link $n(1220) $n(1223) $linkBW 2ms DropTail
	$ns duplex-link $n(1221) $n(1223) $linkBW 1ms DropTail
	$ns duplex-link $n(1222) $n(1223) $linkBW 1ms DropTail
	$ns duplex-link $n(1224) $n(1226) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "3010..."; flush stdout }
	$ns duplex-link $n(1224) $n(1227) $linkBW 1ms DropTail
	$ns duplex-link $n(1224) $n(1228) $linkBW 3ms DropTail
	$ns duplex-link $n(1224) $n(1231) $linkBW 1ms DropTail
	$ns duplex-link $n(1224) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1225) $n(1227) $linkBW 1ms DropTail
	$ns duplex-link $n(1225) $n(1230) $linkBW 1ms DropTail
	$ns duplex-link $n(1225) $n(1233) $linkBW 4ms DropTail
	$ns duplex-link $n(1225) $n(1235) $linkBW 1ms DropTail
	$ns duplex-link $n(1225) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1226) $n(1229) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "3020..."; flush stdout }
	$ns duplex-link $n(1226) $n(1233) $linkBW 5ms DropTail
	$ns duplex-link $n(1226) $n(1236) $linkBW 3ms DropTail
	$ns duplex-link $n(1226) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1227) $n(1232) $linkBW 3ms DropTail
	$ns duplex-link $n(1227) $n(1233) $linkBW 1ms DropTail
	$ns duplex-link $n(1227) $n(1234) $linkBW 1ms DropTail
	$ns duplex-link $n(1227) $n(1237) $linkBW 1ms DropTail
	$ns duplex-link $n(1228) $n(1229) $linkBW 2ms DropTail
	$ns duplex-link $n(1228) $n(1231) $linkBW 1ms DropTail
	$ns duplex-link $n(1228) $n(1232) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "3030..."; flush stdout }
	$ns duplex-link $n(1229) $n(1236) $linkBW 1ms DropTail
	$ns duplex-link $n(1230) $n(1231) $linkBW 3ms DropTail
	$ns duplex-link $n(1230) $n(1235) $linkBW 1ms DropTail
	$ns duplex-link $n(1230) $n(1237) $linkBW 1ms DropTail
	$ns duplex-link $n(1231) $n(1235) $linkBW 5ms DropTail
	$ns duplex-link $n(1231) $n(1236) $linkBW 3ms DropTail
	$ns duplex-link $n(1231) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1232) $n(1236) $linkBW 3ms DropTail
	$ns duplex-link $n(1232) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1233) $n(1237) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "3040..."; flush stdout }
	$ns duplex-link $n(1234) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1235) $n(1237) $linkBW 2ms DropTail
	$ns duplex-link $n(1238) $n(1240) $linkBW 3ms DropTail
	$ns duplex-link $n(1238) $n(1241) $linkBW 1ms DropTail
	$ns duplex-link $n(1238) $n(1242) $linkBW 1ms DropTail
	$ns duplex-link $n(1238) $n(1247) $linkBW 1ms DropTail
	$ns duplex-link $n(1238) $n(1248) $linkBW 2ms DropTail
	$ns duplex-link $n(1238) $n(1249) $linkBW 1ms DropTail
	$ns duplex-link $n(1239) $n(1241) $linkBW 2ms DropTail
	$ns duplex-link $n(1239) $n(1242) $linkBW 2ms DropTail
	if {$verbose} { puts -nonewline "3050..."; flush stdout }
	$ns duplex-link $n(1239) $n(1245) $linkBW 1ms DropTail
	$ns duplex-link $n(1240) $n(1242) $linkBW 2ms DropTail
	$ns duplex-link $n(1240) $n(1246) $linkBW 1ms DropTail
	$ns duplex-link $n(1240) $n(1247) $linkBW 3ms DropTail
	$ns duplex-link $n(1240) $n(1248) $linkBW 2ms DropTail
	$ns duplex-link $n(1240) $n(1249) $linkBW 1ms DropTail
	$ns duplex-link $n(1241) $n(1242) $linkBW 2ms DropTail
	$ns duplex-link $n(1241) $n(1243) $linkBW 1ms DropTail
	$ns duplex-link $n(1242) $n(1244) $linkBW 2ms DropTail
	$ns duplex-link $n(1242) $n(1245) $linkBW 3ms DropTail
	if {$verbose} { puts -nonewline "3060..."; flush stdout }
	$ns duplex-link $n(1242) $n(1247) $linkBW 1ms DropTail
	$ns duplex-link $n(1242) $n(1248) $linkBW 1ms DropTail
	$ns duplex-link $n(1243) $n(1247) $linkBW 1ms DropTail
	$ns duplex-link $n(1244) $n(1245) $linkBW 1ms DropTail
	$ns duplex-link $n(1244) $n(1249) $linkBW 5ms DropTail
	$ns duplex-link $n(1245) $n(1246) $linkBW 2ms DropTail
	$ns duplex-link $n(1245) $n(1247) $linkBW 1ms DropTail
	$ns duplex-link $n(1245) $n(1248) $linkBW 2ms DropTail
	$ns duplex-link $n(1245) $n(1249) $linkBW 2ms DropTail
	$ns duplex-link $n(1246) $n(1249) $linkBW 1ms DropTail
	if {$verbose} { puts -nonewline "3070..."; flush stdout }
	$ns duplex-link $n(1247) $n(1249) $linkBW 1ms DropTail

	if {$verbose} { 
		puts -nonewline "3071..."
		flush stdout
		puts "starting"
	}

####
set max_fragmented_size   1024

#add udp header(8 bytes) and IP header (20bytes)
set packetSize	1052

set numNode 15

set mcu [$ns node]
## khoi tao sender nodes
## khoi tao $numNode UDP agents, attach to mcu
## $numNode sinks, attach to $numNode nodes

for {set i 0} {$i < $numNode} {incr i} {
	set s($i) [$ns node]

	set udp($i) [new Agent/myUDP]
	$ns attach-agent $mcu $udp($i)
	$udp($i) set packetSize_ $packetSize
	$udp($i) set_filename sd_paris_$i

	set null($i) [new Agent/myEvalvid_Sink] 
	$ns attach-agent $s($i) $null($i)
	$ns connect $udp($i) $null($i)
	$null($i) set_filename rd_paris_$i
}

## connect nodes to underlay topo
for {set i 0} {$i < $numNode} {incr i} {
	#$ns duplex-link  $s($i) $n(1000)  50Mb   1ms DropTail
	$ns duplex-link  $s($i) $mcu  50Mb   1ms DropTail
}

#$ns duplex-link  $mcu  $n(1000) 100Mb   1ms DropTail

## create video($i).dat for s($i)
for {set i 0} {$i < $numNode} {incr i} {

	set original_file_name_($i) st_paris
	set trace_file_name_($i) video_$i.dat
	set original_file_id_($i) [open $original_file_name_($i) r]
	set trace_file_id_($i) [open $trace_file_name_($i) w]

	set pre_time 0

	while {[eof $original_file_id_($i)] == 0} {
	    gets $original_file_id_($i) current_line
	     
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

	    puts  $trace_file_id_($i) "$time $length_ $type_v $prio_p $max_fragmented_size"
	    set pre_time $tmp2_
	}

	close $original_file_id_($i)
	close $trace_file_id_($i)
	set end_sim_time $tmp2_
	puts "mcu create video_$i.dat for node $i done at $end_sim_time"

	set trace_file_($i) [new Tracefile]
	$trace_file_($i) filename $trace_file_name_($i)
}
##

## attach $numNode video App to udp($i) agents
for {set i 0} {$i < $numNode} {incr i} {
	set video($i) [new Application/Traffic/myEvalvid]
	$video($i) attach-agent $udp($i)
	$video($i) attach-tracefile $trace_file_($i)
}

proc finish {} {
        global ns nd
        $ns flush-trace
        close $nd
        exit 0
}


## scenario
for {set i 0} {$i < $numNode} {incr i} {
	$ns at 0.0 "$video($i) start"
	$ns at $end_sim_time "$video($i) stop"
	$ns at [expr $end_sim_time + 100.0] "$null($i) closefile"
}

$ns at [expr $end_sim_time + 100.0] "finish"
 
$ns run
