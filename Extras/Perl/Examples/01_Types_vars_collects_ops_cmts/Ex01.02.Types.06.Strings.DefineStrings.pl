#!/usr/bin/perl

print "content-type: text/html \n\n"; #HTTP HEADER

# DEFINE SOME STRINGS
$single = 'This string is single quoted';
$double = "This string is double quoted";
$userdefined = q^Carrot is now our quote^;
## concatenation of strings
$str = $single.". ".$double;

# PRINT THEM TO THE BROWSER
print $single."\n";
print $double."\n";
print $userdefined."\n";
print $str."\n";
print $single."<br />";
$multilined_string = <<EOF;
This is my multilined string
note that I am terminating it with the word "EOF".
EOF
print "\n".$multilined_string;