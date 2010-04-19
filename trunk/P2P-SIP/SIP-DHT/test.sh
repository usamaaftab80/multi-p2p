#!/bin/bash

# If BOOTSTRAP variable is defined, its value is used as a SIP URL for
# finding a bootstrap node

SIPDHT=./src/sipdht
STABILIZE_INT=10
START_INT=10
LOG_DIR=/tmp
ERR_DIR=/tmp

if test $# -lt 1; then
        echo "Usage: $0 addr [addr...]";
        exit;
fi
echo "$#\n";
#for ((i = 0; i < $#; i++)); do
	#echo "$i";
        #rm -f $LOG_DIR/${!i}.log;
        #rm -f $ERR_DIR/${!i}.err;
#done

echo "Starting $1...";
SIPDHT_DEBUG=9 TPORT_DUMP=$LOG_DIR/$1.log $SIPDHT \
-a $1 -s $STABILIZE_INT $BOOTSTRAP 2>$ERR_DIR/$1.err &

for ((i = 2; i <= $#; i++)); do
        for ((j = $START_INT - 1; j >= 0; j--)); do
                sleep 1;
                echo -ne "\r$j\033[K";
        done
        echo -e "\rStarting ${!i}...";
        ((pred=i - 1));
        SIPDHT_DEBUG=9 TPORT_DUMP=$LOG_DIR/${!i}.log $SIPDHT \
        -a ${!i} -s $STABILIZE_INT sip:${!pred} 2>$ERR_DIR/${!i}.err &
done

sleep 2;
echo -e \
"\nPress any key to terminate all processes or CTRL-C for letting them alive\n"

echo -ne "\rAlive processes: $(pgrep -g0 $(basename $SIPDHT) | wc -l)";
until read -t1 -n1; do
        echo -ne \
        "\rAlive processes: $(pgrep -g0 $(basename $SIPDHT) | wc -l)\033[K";
done

pkill -g 0 $(basename $SIPDHT)
