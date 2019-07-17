#!/usr/bin/perl

print "content-type: text/html \n\n";	#HTTP HEADER

# DEFINE AN ARRAY
@coins = ("Quarter", "Dime", "Nickel");

# PRINT THE WHOLE ARRAY
print "@coins";

# PRINT EACH SCALAR ELEMENT
#print "<br />";
print "\n";
print "\n";
print $coins[0]; #Prints the first element
print "\n";
print $coins[1]; #Prints the 2nd element
print "\n";
print $coins[2]; #Prints the 3rd element