#!/usr/bin/perl

print "content-type: text/html \n\n";	#The header

# SET UP THE HTML TABLE
print "<table border='1'>";

# CREATE AN ARRAY
@names = qw(Steve Bill Connor Bradley);

# SET A COUNT VARIABLE
$count = 1;

# BEGIN THE LOOP
foreach $names(@names) {
	print "<tr><td>$count</td><td>$names</td></tr>";
	$count++;
}
print "</table>";