#!/usr/bin/perl

print "content-type: text/html \n\n";	#The header
@files = ("newtext.txt","moretext.txt","yetmoretext.txt");
foreach $file (@files) {
	print "File $file deleted successfully.\n";
    unlink($file);
}