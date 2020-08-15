use MooseX::Declare;

class Point3D extends Point {
    has 'z' => (isa => 'Num', is => 'rw');

    after clear {
        $self->z(0);
    }
    method set_to (Num $x, Num $y, Num $z) {
        $self->x($x);
        $self->y($y);
        $self->z($z);
    }
}

