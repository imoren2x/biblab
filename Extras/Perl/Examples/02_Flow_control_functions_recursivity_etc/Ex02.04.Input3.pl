#! usr/bin/perl

# chomp() function
# Here we have asked two questions, stored the user's input
 # into two separate variables and printed out the results
 # all in just a few lines of code. Be sure to take note of
 # the formatting here. The user is required to strike the
 # "enter" key resulting in a line break. We can remove the
 # line break rather easily with the chomp() function. This
 # function simply removes any erroneous line breaks and
 # spacing from the end of our string.


print "What is the radius of the circle?\n";
print ">> ";
chomp ($r = <>);
$diameter = (2 * $r);
$area = (3.14 * ($r ** 2));
$cir = ($diameter * 3.14);
print "Radius: $r\n Diameter: $diameter\n Circumference: $cir\n Area: $area";