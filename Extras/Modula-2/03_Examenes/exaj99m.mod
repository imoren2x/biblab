IMPLEMENTATION MODULE EXAJ99M;

FROM IO IMPORT WrLn, WrStr, RdCard, RdChar, RdStr, RdBool;
FROM Storage IMPORT ALLOCATE, DEALLOCATE;
FROM Str IMPORT Compare;

TYPE

TipoCentral=POINTER TO NodoCentral;
NodoCentral=RECORD
            destino:ARRAY [1..M] OF CHAR;
            TipoReserva: POINTER TO datosreserva;
            sig:TipoCentral;
            END;


PROCEDURE Crear(VAR cr:TipoCentral);
BEGIN
cr:=NIL;
cr^.TipoReserva:=NIL;

END Crear;

PROCEDURE IngresarReserva(VAR cr:TipoCentral;dr:datosreserva);
VAR
destino:ARRAY [1..M] OF CHAR;
p1,p2:TipoCentral;
p3,p4:TipoCentral;
p5:POINTER TO datosreserva;

  PROCEDURE destinoOK(c:TipoCentral;d:ARRAY OF CHAR;VAR pt1, pt2:TipoCentral);
  VAR
  res:INTEGER;
  BEGIN
  pt1:=c;
  pt2:=NIL;
  WHILE pt1<>NIL DO
    res:=Compare(pt1^.destino,d);
    IF res<>0 THEN
      pt2:=pt1;
      pt1:=pt1^.sig;
      END;
    END;
   END destinoOK;


BEGIN

WrLn;
WrStr("Va a dar comienzo el ingreso de una nueva reserva, prep rese.  ");WrLn;WrLn;
WrStr("Introduzca el destino de su viaje:  ");
 RdStr(destino);
 RdStr(dr.destino); WrLn;
WrStr("Introduzca su DNI.  ");
 dr.DNIcliente:=RdCard(); WrLn;
WrStr("Introduzca su nombre. ");
 RdStr(dr.nombre); WrLn;
WrStr("Introduzca la agencia:  ");
 RdStr(dr.agencia);

destinoOK(cr, destino,p1,p2);
 IF (p1=NIL) AND (p2=NIL) THEN (*cr est  vac¡a*)
   ALLOCATE(cr,SIZE (NodoCentral));
   (* cr^.destino:=destino; *)
   p1:=cr;
   p1^.TipoReserva^.DNIcliente:=dr.DNIcliente;
   p1^.TipoReserva^.nombre:=dr.nombre;
   p1^.TipoReserva^.destino:=dr.destino;
   p1^.TipoReserva^.agencia:=dr.agencia;
   p1^.TipoReserva^.estado:=dr.estado;

  ELSIF p1=NIL THEN (*no existe el destino*)
   ALLOCATE(p2^.sig,SIZE(NodoCentral));
   (* p2^.destino:=destino; *)
   p2:=p2^.sig;
   p2^.TipoReserva^.DNIcliente:=dr.DNIcliente;
   p2^.TipoReserva^.nombre:=dr.nombre;
   p2^.TipoReserva^.destino:=dr.destino;
   p2^.TipoReserva^.agencia:=dr.agencia;
   p2^.TipoReserva^.estado:=dr.estado;

  ELSE
    p3^.TipoReserva:=p1^.TipoReserva;
    WHILE (p1^.TipoReserva<>NIL) AND (p1^.TipoReserva^.DNIcliente<>dr.DNIcliente) DO
    p3^.TipoReserva:=p1^.TipoReserva;
    p5:=p1^.TipoReserva;
    END;
    IF (p3^.TipoReserva=NIL) AND (p1^.TipoReserva=NIL) THEN (*no hay pasajeros*)
      ALLOCATE(p1^.TipoReserva,SIZE(datosreserva));
      p1^.TipoReserva^.DNIcliente:=dr.DNIcliente;
      p1^.TipoReserva^.nombre:=dr.nombre;
      p1^.TipoReserva^.agencia:=dr.agencia;
      p1^.TipoReserva^.destino:=dr.destino;
      p1^.TipoReserva^.estado:=dr.estado;

     ELSIF (p=NIL) THEN
       ALLOCATE(p4^.sig,SIZE(datosreserva));
       p4^.DNIcliente:=dr.DNIcliente;
       p4^.nombre:=dr.nombre;
       p4^.agencia:=dr.agencia;
       p4^.destino:=dr.destino;
       p4^.estado:=dr.estado;

     ELSE
       WrStr("El pasajero y a est  registrado para este destino*);
       END;
