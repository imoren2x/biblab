#!/usr/bin/perl

#print "content-type: text/html \n\n";	#HTTP Header

# Operator	Example	Result	Definition
# +	7 + 7	= 14	Addition
# -	7 - 7	= 0	Subtraction
# *	7 * 7	= 49	Multiplication
# /	7 / 7	= 1	Division
# **	7 ** 7	= 823543	Exponents
# %	7 % 7	= 0	Modulus

#PICK A NUMBER
$x = 81;
$add = $x + 9;	
$sub = $x - 9;
$mul = $x * 10;
$div = $x / 9;
$exp = $x ** 5;
$mod = $x % 79;
print "$x plus 9 is $add\n";
print "$x minus 9 is $sub\n";
print "$x times 10 is $mul\n";
print "$x divided by 9 is $div\n";
print "$x to the 5th is $exp\n";
print "$x modulus 79 is $mod\n";