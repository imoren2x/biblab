MODULE ROMANOS;

FROM IO IMPORT WrLn,WrCard, WrStr, RdChar, RdLn;


        PROCEDURE Romano():CARDINAL;

                PROCEDURE Transf(n:CHAR):CARDINAL;
                VAR
                res:CARDINAL;

                BEGIN
                CASE n OF
                'I': res:=1;   |
                'V': res:=5;   |
                'X': res:=10;  |
                'L': res:=50;  |
                'C': res:=100; |
                'D': res:=500; |
                'M': res:=1000;
                END;
                RETURN res;

                END Transf;


        VAR
        a,b:CHAR;
        num1, num2, res:CARDINAL;

        BEGIN
        WrLn;RdLn;
        WrStr("Escriba el n£mero en romano:   ");
        res:=0;
        a:=RdChar();
        b:=RdChar();

        IF a=CHR(13) THEN
           RETURN res; (*Entendemos que si no escribe nada, el n£mero es el cero *)
        ELSIF b= CHR(13) THEN
           res:=Transf(a);
           RETURN res;
        ELSE
           WHILE (b<>CHR(13)) AND (a<>CHR(13)) DO
             num1:=Transf(a);
             num2:=Transf(b);
              IF num1>=num2 THEN
                res:=res +num1;
                a:=b;
                b:=RdChar();
                ELSE
              res:=res+(num2-num1);
              a:=RdChar();
              b:=RdChar();
            END;
         END;
         IF ((a<>CHR(13)) AND (b=CHR(13))) THEN
           num2:=Transf(a);
           res:=res + num2;
           END;
         RETURN res;
        END;

        END Romano;



 VAR
 a:CARDINAL;
 A:CHAR;

BEGIN

WrLn;
A:=CHR(26);
WHILE A<>CHR(13) DO
a:=Romano();
WrLn;
WrCard(a,10);
WrLn;
END;

END ROMANOS.
