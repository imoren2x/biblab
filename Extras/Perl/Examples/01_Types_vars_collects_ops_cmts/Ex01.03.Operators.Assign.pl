#!/usr/bin/perl

#print "content-type: text/html \n\n";	#HTTP HEADER

# Operator	Definition	Example
# +=	Addition	($x += 10)
# -=	Subtraction	($x -= 10)
# *=	Multiplication	($x *= 10)
# /=	Division	($x /= 10)
# %=	Modulus	($x %= 10)
# **=	Exponent	($x **= 10)

#START WITH A NUMBER
$x = 5;
print '$x plus 10 is '.($x += 10);
print "\n x is now ".$x;       #ADD 10
print "\n ".'$x minus 3 is '.($x -= 3);
print "\n x is now ".$x;       #SUBTRACT 3
print "\n ".'$x times 10 is '.($x *= 10);
print "\n x is now ".$x.       #MULTIPLY BY 10
print "\n ".'$x divided by 10 is '.($x /= 10);
print "\n x is now ".$x;       #DIVIDE BY 10
print "\n ".'Modulus of $x mod 10 is '.($x %= 10);
print "\n x is now ".$x;       #MODULUS
print "\n ".'$x to the tenth power is '.($x **= 10);
print "\n x is now ".$x;       #2 to the 10th