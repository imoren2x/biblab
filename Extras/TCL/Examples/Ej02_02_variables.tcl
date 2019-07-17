#!/usr/bin/tclsh

######################################

# 
set a 5
# b = a+8
set b a+8

puts "a: $a"
puts "b: $b"


set c 5
# d = 13
set d [expr $c+8]
puts "c: $c"; puts "d: $d"


set e 5
# f = 5+8
set f $e+8
puts "e: $e"; puts "f: $f"
