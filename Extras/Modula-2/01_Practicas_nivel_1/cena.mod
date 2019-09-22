MODULE cena;

IMPORT IO;
IMPORT Window;

CONST
    (*m=MIN(CARDINAL);*)
    m = 0;
    (*M=MAX(CARDINAL);*)
    M = 31;

TYPE
    sets = SET OF [m..M](*[m..M];*);

PROCEDURE char2set(VAR s:sets);
    VAR
        a: CHAR;
        n: CARDINAL;
    BEGIN
        a := IO.RdChar();
        n := 0;
        IF a = CHR(32) THEN
            a := IO.RdChar();
        END;
        WHILE a <> CHR(13) DO
            IF a = CHR(32) THEN
                a := IO.RdChar();
                INCL(s, n);
                n := 0;
            END;
            n := n * 10 + (ORD(a) - 48);
            a := IO.RdChar();
        END;
        INCL(s, n);
    END char2set;


VAR
    a, c: CHAR;
    j: CARDINAL;
    setb, seta: sets;

BEGIN
    c := 's';
    seta := sets{};
    setb := sets{};
    IO.WrLn;
    IO.WrStr("A ver, alumno, atento.");
    WHILE (c = 's') OR (c = 'S') DO
         IO.WrLn;IO.RdLn;
         IO.WrStr("Introduce los d¡as en que pueden ir." );IO.WrLn;
         IO.WrStr(">>> ");
         IF seta = sets{} THEN
             char2set(seta);IO.WrLn;IO.RdLn;
         ELSE
             char2set(setb);IO.WrLn;IO.RdLn;
         END;
             IF ( (seta <> sets{}) AND (setb <> sets{}) ) THEN
                 seta := seta * setb;
             END;
             IO.WrLn;IO.RdLn;
             IO.WrStr("¨hay m s alumnos? s/n ");
             c := IO.RdChar();
             Window.Clear;
    END;

    IO.RdLn;
    IO.WrLn;
    IO.WrStr("Los d¡as que puede todo el mundo son: ");IO.WrLn;
    FOR j:= m TO M DO
        IF j IN seta THEN
            IO.WrLn;
            IO.WrInt(j, 1);
        END;
    END;

END cena.
