#!/usr/bin/tclsh

######################################

puts "Hello, World!"

set yearTotal 0
array set earnings [list {Jan} {1000} \
                       {Feb} {2000} \
                       {Mar} {3000} \
                       {Apr} {4000} ]

parray earnings

set monthList [list "Jan" "Feb" "Mar" "Apr"]

#foreach month {Jan Feb Mar Apr} { 
foreach month [array get monthList] { 
  set yearTotal [expr $yearTotal+$earnings($month)]
  puts "yearTotal: $yearTotal"
}

#May Jun Jul Aug Sep Oct Nov Dec} {
#   set yearTotal [expr $yearTotal+$earnings($month)]
#   puts "yearTotal: $yearTotal"
