#!/usr/bin/perl

#print "content-type: text/html \n\n"; #HTTP HEADER

# Character Description
# \L	Transform all letters to lowercase
# \l	Transform the next letter to lowercase
# \U	Transform all letters to uppercase
# \u	Transform the next letter to uppercase
# \n	Begin on a new line
# \r	Applys a carriage return
# \t	Applys a tab to the string
# \f	Applys a formfedd to the string
# \b	Backspace
# \a	Bell
# \e	Escapes the next character
# \0nn	Creates Octal formatted numbers
# \xnn	Creates Hexideciamal formatted numbers
# \cX	Control characters, x may be any character
# \Q	Do not match the pattern
# \E	Ends \U, \L, or \Q functions

# STRINGS TO BE FORMATTED
$mystring = "welcome to tizag.com!"; #String to be formatted
$newline = "welcome to \ntizag.com!";
$capital = "\uwelcome to tizag.com!";
$ALLCAPS = "\Uwelcome to tizag.com!";

# PRINT THE NEWLY FORMATTED STRINGS
print $mystring."\n";#<br />
print $newline."\n";
print $capital."\n";
print $ALLCAPS;