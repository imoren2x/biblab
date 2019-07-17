#!/usr/bin/perl

## print "Content-type: text/html \n\n"; #HTTP HEADER

#DEFINE SOME ARRAYS
@days = ("Monday", "Tuesday", "Wednesday");
@months = ("April", "May", "June");

#PRINT MY ARRAYS TO THE BROWSER
print @days;
print "<br />";
print @months;