#!/usr/bin/perl

print "content-type: text/html \n\n";

# SET UP AN HTML TABLE
print "<table border='1'>";

# DEFINE AN ARRAY
@names = qw(Steve Bill Connor Bradley);

# COUNTER - COUNTS EACH ROW
$count = 1;

# COUNTS EACH ELEMENT OF THE ARRAY
$n = 0;

# USE THE SCALAR FORM OF ARRAY
while ($names[$n]) {
	print "<tr><td>$count</td><td>$names[$n]</td></tr>";
	$n++;
	$count++;
}
print "</table>";