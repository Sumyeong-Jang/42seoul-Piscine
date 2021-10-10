ifconfig -a | grep ether | grep  -v media | sed "s/ether //g" | tr -d ' ' | tr -d '\t'
