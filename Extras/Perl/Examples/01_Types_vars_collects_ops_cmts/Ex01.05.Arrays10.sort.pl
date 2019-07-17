#!/usr/bin/perl

# print "content-type: text/html \n\n"; #HTTP HEADER

# TWO ARRAYS
# the qw// operator, which returns a list of strings, separating the delimited string by white space.
@foods = qw(pizza steak chicken burgers);
@Foods = qw(Pizza Steak chicken burgers);

# SORT 'EM
@foods = sort(@foods);
@Foods = sort(@Foods);

# PRINT THE NEW ARRAYS
print "\n";
print "@foods\n";
print "@Foods\n\n";

@Foods = qw(Pizza Steak chicken burgers);

# TRANSFORM TO LOWERCASE
foreach $food (@Foods) {
	push(@foods,  "\L$food");
}

# SORT 
@foods = sort(@foods);

# PRINT THE NEW ARRAY
print "@foods";
print "\n";