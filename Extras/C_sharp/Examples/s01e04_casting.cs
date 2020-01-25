using System;

/**
 * Sr.No    Methods & Description

01    ToBoolean Converts a type to a Boolean value, where possible.
02    ToByte Converts a type to a byte.
03    ToChar Converts a type to a single Unicode character, where possible.
04    ToDateTime Converts a type (integer or string type) to date-time structures.
05    ToDecimal Converts a floating point or integer type to a decimal type.
06    ToDouble Converts a type to a double type.
07    ToInt16 Converts a type to a 16-bit integer.
08    ToInt32 Converts a type to a 32-bit integer.
09    ToInt64 Converts a type to a 64-bit integer.
10    ToSbyte Converts a type to a signed byte type.
11    ToSingle Converts a type to a small floating point number.
12    ToString Converts a type to a string.
13    ToType Converts a type to a specified type.
14    ToUInt16 Converts a type to an unsigned int type.
15    ToUInt32 Converts a type to an unsigned long type.
16    ToUInt64 Converts a type to an unsigned big integer.
 *
 */

namespace TypeConversionApplication {
    class ExplicitConversion {
        static void Main(string[] args) {
            double d = 5673.74; 
            int i;

            // cast double to int.
            i = (int)d;
            Console.WriteLine("Explicit type conversion from double to int.");
            Console.WriteLine(i);
            Console.WriteLine("\n");


            
            int i = 75;
            float f = 53.005f;
            double d = 2345.7652;
            bool b = true;

            Console.WriteLine(i.ToString());
            Console.WriteLine(f.ToString());
            Console.WriteLine(d.ToString());
            Console.WriteLine(b.ToString());

            Console.ReadKey();
        }
    }
}
