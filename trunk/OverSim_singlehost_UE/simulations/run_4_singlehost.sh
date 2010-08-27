#/bin/bash!
rm time*txt
cd ue5000
../../src/OverSim -f ue.ini -u Cmdenv &
cd ../ue5001
../../src/OverSim -f ue.ini -u Cmdenv &
cd ../ue6000
../../src/OverSim -f ue.ini -u Cmdenv &
cd ../ue6001
../../src/OverSim -f ue.ini -u Cmdenv &
