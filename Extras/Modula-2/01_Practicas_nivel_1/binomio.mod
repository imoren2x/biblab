MODULE BINOMIO;

IMPORT IO;
IMPORT Window;

PROCEDURE Binomio(n, k: CARDINAL): CARDINAL;

    PROCEDURE factorial(a:CARDINAL): CARDINAL;
    VAR
        i, res: CARDINAL;
    BEGIN
        res := 1;
        FOR i := a TO 1 BY -1 DO
            res := i * res;
        END;

        IF res = 0 THEN
            RETURN 1;
        ELSE
           RETURN res;
        END;

    END factorial;

VAR
    i: CARDINAL;
    res: CARDINAL;

BEGIN
    res := factorial(n) DIV (factorial(k) * factorial(n-k) );

    RETURN res;

END Binomio;

VAR
    m, s, r: CARDINAL;
    a, c: CHAR;

BEGIN
    c := 'S';

    WHILE c = 'S' DO
    Window.Clear;
    IO.RdLn;
    IO.WrStr("Introduce el n£mero total de elementos a combinar: ");
    a := IO.RdChar();
    m := 0;
    WHILE (a <> CHR(13)) DO
        m := m*10 + (ORD(a)-48);
        a := IO.RdChar();
    END;

    IO.WrLn;IO.RdLn;
    IO.WrStr("Introduce el tama¤o m ximo de las particiones: ");
    a := IO.RdChar();
    s := 0;
    WHILE a <> CHR(13) DO
    s := s*10 + (ORD(a) - 48);
    a := IO.RdChar();
    END;

    r := Binomio(m, s);

    IO.WrLn;IO.WrLn;
    IO.WrStr("El resultado es: ");
    IO.WrCard(r,5);

    IO.RdLn;IO.WrLn;IO.WrLn;
    IO.WrStr("¨Deseas continuar? S/N. ");
    c := IO.RdChar();

END;

END BINOMIO.
