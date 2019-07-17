#!/usr/bin/perl

# HTTP HEADER
# print "content-type: text/html \n\n";

# SOME VARIABLES
$name = "Sarah";
$x = 5;

# IF/ELSE STATEMENTS
if ($x > 10) {
	print "$x is greater than 10!";
} else {
	print "$x is not greater than 10!";
}
print "\n";

# STRINGS ARE A LITTLE DIFFERENT
if ($name eq "Sarah") {
	print "Hello, $name!";
} else {
	print "You are not $name!";
}