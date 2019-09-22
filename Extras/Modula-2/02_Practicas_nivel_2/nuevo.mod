MODULE NUEVO;

TYPE
    lista=POINTER TO Nodo;
    cola=POINTER TO aNodo;
    Nodo=RECORD
         golista:cola;
         dato:CARDINAL;
         sig:POINTER TO Nodo;
         END;
    aNodo=RECORD
          data:ARRAY [1..30] OF CHAR;
          sig:POINTER TO aNodo;
          END;

VAR
    l,l2:lista;
    c,c2:cola;

BEGIN

    l2^.golista:=l^.golista;


END NUEVO.
