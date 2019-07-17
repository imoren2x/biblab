#!/usr/bin/perl

# HTTP HEADER
# print "content-type: text/html \n\n";

# SOME VARIABLES
$x = 5;

# PLAY THE GUESSING GAME
if ($x == 6) {
	print "X must be 6.";
} elsif ($x == 4) {
	print "X must be 4.";
} elsif ($x == 5) {
	print "X must be 5!";
}