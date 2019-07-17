#!/usr/bin/perl

# print "Content-type: text/html \n\n"; #HTTP HEADER

# DEFINE SOME SCALAR VARIABLES
$number = 5;
$exponent = "2 ** 8";
$string = "Hello, Perl!";
$stringpart_1 = "Hello, ";
$stringpart_2 = "Perl!";
$linebreak = "\n";##"<br />"; #HTML LINEBREAK TAG

# PRINT THEM TO THE BROWSER
print $number;
print $linebreak;
print $exponent;
print $linebreak;
print $string.$linebreak;
print $stringpart_1.$stringpart_2; #period value indicates concatenating