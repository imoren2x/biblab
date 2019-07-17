#!/usr/bin/perl

# print "content-type: text/html \n\n";

# DEFINE A HASH
%coins = ("Quarter", 25, "Dime", 10, "Nickel", 5);

# PRINT THE HASH
print %coins;
@keys = keys(%coins);
print "\n";
for ($i = 0; $i < scalar(@keys); $i++) {
	print "\n";
	print "key : ".@keys[$i]."\n";
	print "value : ".$coins{@keys[$i]};
}

print "\n\n";
while (($key, $value) = each(%coins)){
     print $key.", ".$value."\n";
}

# FOREACH LOOP
print "\n\n";
foreach $key (sort keys %coins) {
     print "$key: $coins{$key}\n";
}

# FOREACH LOOP
foreach $value (sort {$coins{$a} cmp $coins{$b} }
           keys %coins) {
     print "$value $coins{$value}\n";
}

print "\n\n";
print "\$coins\{\"Quarter\"\} = ".$coins{"Quarter"};
print "\n";
@keysA = keys(%coins);

print "keys = ".@keysA;#Why appear 3??#
print "\n";
print @keysA;
print "\n";

# ADD NEW ELEMENT PAIRS
$coins{Penny} = .01;
$coins{HalfDollar} = .50;

print %coins;

# DELETE THE ELEMENT PAIRS
delete($coins{Penny});
delete($coins{HalfDollar});

print "\n";
print %coins;