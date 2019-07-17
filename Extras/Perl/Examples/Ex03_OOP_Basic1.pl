sub Point::new {
  # Here, Point->new(4, 5) will result in $class being 'Point'.
  # It's a variable to support subclassing (see the perloop manpage).
  my ($class, $x, $y) = @_;
  bless [$x, $y], $class;   # Implicit return
}
 
sub Point::distance {
  my ($self, $from) = @_;
  my ($dx, $dy) = ($$self[0] - $$from[0], $$self[1] - $$from[1]);

  sqrt($dx * $dx + $dy * $dy);
}

my $p1 = Point->new(3, 4);
my $p2 = Point->new(0, 0);
print $p1->distance($p2);  # Prints 5