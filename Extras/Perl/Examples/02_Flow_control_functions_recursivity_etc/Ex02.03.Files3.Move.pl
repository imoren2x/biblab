#!/usr/bin/perl
use File::Copy;

print "content-type: text/html \n\n"; #The header
$oldlocation = "myhtml.html";
$newlocation = "html/myhtml.html";
move($oldlocation, $newlocation);