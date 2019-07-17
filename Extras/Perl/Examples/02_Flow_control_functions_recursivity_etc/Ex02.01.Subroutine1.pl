#!/usr/bin/perl
####D:\Perl\bin\perl

sub function1 {
 my %args = @_;
 print "'x' argument was '$args{x}'\n";
}

sub function2 {
	return @_[0] + @_[1];
}

sub function3 {
	# my $x = shift;
	# my @s = shift;
	my $x = @_[0];
	my @s = @_[1];
	$s[0] = $s[0] + $x;
	$s[1] = $s[1] + $x;
	$s[2] = $s[2] + $x;

	return @s;
}

sub function4 {
	my ($listaref, $listbref ) = @_;

    # De-reference the array list
    # my (@lista) = @$listaref;
    # my (@listb) = @$listbref;
	my ($lista) = $$listaref;
    my (@listb) = @$listbref;
    # Now you can play with both arrays.

	$listb[0] = $lista + $listb[0];
	$listb[1] = $lista + $listb[1];
	$listb[2] = $lista + $listb[2];

	return @listb;
}

sub either {
 return wantarray ? (1, 2) : 'Oranges';
}

function1( x => 23 );
print &function2(1, 2);
print "\nSum = ".&function2(1, 2);
$arg1 = 3;
$arg2 = 4;
print "\n Sum = ".function2 $arg1, $arg2;

@array1 = (1, 2, 3);
@array2 = &function3($arg1, @array1);
print "\n Function3 = "."@array2\n";

@array2 = &function4( \$arg1, \@array1);
print "\n Function4 = "."@array2"."\n";

$x = either; # returns "Oranges"
print "Either returning scalar: $x\n";
@x = either; # returns (1, 2)
print "Either returning vector: @x\n";