#!/usr/bin/perl

# HTTP HEADER
# print "content-type: text/html \n\n";

# SOME VARIABLES
$x = 7;
$y = 7;

# TESTING...ONE, TWO...TESTING
if ($x == 7) {
	print '$x is equal to 7!';
	print "\n";
}
if (($x == 7) || ($y == 7)) {
	print '$x or $y is equal to 7!';
	print "\n";
}
if (($x == 7) && ($y == 7)) {
	print '$x and $y are equal to 7!';
	print "\n";
}