CExample::CExample (const CExample& rv) {
  a=rv.a;  b=rv.b;  c=rv.c;
}

//Llamada
CExample ex (2,3);
CExample ex2 (ex);   // copy constructor (data copied from ex)

