#!/usr/bin/perl

print "content-type: text/html \n\n";	#The header
$file = "newtext.txt";
if (unlink($file) == 0) {
    print "File deleted successfully.";
} else {
    print "File was not deleted.";
}