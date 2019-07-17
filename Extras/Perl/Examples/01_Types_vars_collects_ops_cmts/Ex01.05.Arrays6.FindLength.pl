#!/usr/bin/perl

# print "content-type: text/html \n\n";	#HTTP HEADER

@nums = (0 .. 9);
@alpha = ("a" .. "z");

# SCALAR FUNCTION
print "\n";
print "scalar(\@nums) = ".scalar(@nums)."\n";
print "scalar(\@alpha) = ".scalar(@alpha)."\n";
print "\n";

# REDEFINE TO SCALAR
$nums = @nums;
$alpha = @alpha;

print "Symbols in numbers: $nums\n";
print "Symbols in alphabet: $alpha\n";
print "There are $nums numerical elements\n";
print "There are ".scalar(@alpha)." letters in the alphabet!";
print "\n";