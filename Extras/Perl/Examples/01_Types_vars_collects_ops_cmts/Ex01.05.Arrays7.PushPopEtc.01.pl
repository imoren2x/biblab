#!/usr/bin/perl

# Array Functions:
# Function	Definition
######################
# push(@array, Element)	Adds to the end of an array
# pop(@array)			Removes the last element of the array
#
# unshift(@array, Element)	Adds to the beginning of an array
# shift(@array)			Removes the first element of an array
#
# delete $array[index]	Removes an element by index number

# print "content-type: text/html \n\n"; #HTTP HEADER

# AN ARRAY
@coins = ("Quarter","Dime","Nickel");

# ADD ELEMENTS
push(@coins, "Penny");
print "@coins";
print "\n";
unshift(@coins, "Dollar");
print "@coins";

# REMOVE ELEMENTS
pop(@coins);
print "\n";
print "@coins";
shift(@coins);
print "\n";

# BACK TO HOW IT WAS
print "@coins";