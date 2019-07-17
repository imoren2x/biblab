#!/usr/bin/perl
use File::Copy;

print "content-type: text/html \n\n"; #The header
$filetobecopied = "myhtml.html.";
$newfile = "mymyhtml.html.";
copy($filetobecopied, $newfile) or die "File cannot be copied.";