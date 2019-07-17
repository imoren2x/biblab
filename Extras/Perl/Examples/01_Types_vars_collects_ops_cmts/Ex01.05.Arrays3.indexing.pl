#!/usr/bin/perl

print "content-type: text/html \n\n";	#HTTP HEADER

# DEFINE AN ARRAY
@coins = ("Quarter", "Dime", "Nickel");

# PRINT THE WHOLE ARRAY
print "@coins";

# PRINT EACH SCALAR ELEMENT
# print "<br />";
print "\n";
print $coins[0]; #Prints the first element
print "\n";
print $coins[-1]; #Prints the last element
print "\n";
print $coins[-2]; #Prints 2nd to last element