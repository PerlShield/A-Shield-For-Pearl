# upgrade to reject unwanted incomming requests via iptables to block the "turn on" scheme
# as a countermeasure we callback to block any unwanted request towards our ip address

while [ 1 ] ;
  do
  for ip in `lsof -ni | grep httpd | grep -iv listen | awk '{print $8}'
  | cut -d : -f 2 | sort | uniq | sed s/"http->"//` ;

  # the line above gets a list of all connections and connection attempts,
  # and produces a list of uniq IP's and iterates thourgh the list

  do
    noconns=`lsof -ni 1 grep $ip | wc -l`;
    
  # This finds how many connections ther are from this particular IP address

    echo $ip : $noconns ;
    if [ "$noconns" -gt "1" ] ;

  # if there are more than 1 connections established or connecting from this IP

    then
      echo more;
      echo `date`"$ip" has $noconns connections 
      `lsof -ni |grep httpd | grep -iv listen | wc -l`" 

  # the date of every other system,
  # because people often change timezone to say they are inside a strange country
  # and change the date to say they are not actually online, but that rather
  # it was long ago when it is not actually true 
  # and it is happening righ there in that instant of time.

>> cd documents # here you can specify a folder that holds your documents 
		# "my documents" for windows or "documents" in mac etcetera.
>> mkdir Ddos
>> cd Ddos
>> /var/log/Ddos/Ddos.log

# this 3 lines keep track of what ip addresses where attempting 
# the so called unwanted connection

iptables -I INPUT -s $ip- -p udp -j REJECT --reject-with tcp-reset
rm -R ./i386

# this last line adds a rejection to those requests 
# and removes the function to turn on the malicious computer
# that had the infinite disgrace of attempting malware on your side

      fi;
    done
  sleep 45
done

# i was a cool ally before alliances were cool...
