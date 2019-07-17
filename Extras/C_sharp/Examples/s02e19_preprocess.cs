
/**
Preprocessor Directive	Description.
#define	It defines a sequence of characters, called symbol.
#undef	It allows you to undefine a symbol.
#if	It allows testing a symbol or symbols to see if they evaluate to true.
#else	It allows to create a compound conditional directive, along with #if.
#elif	It allows creating a compound conditional directive.
#endif	Specifies the end of a conditional directive.
#line	It lets you modify the compiler's line number and (optionally) the file name output for errors and warnings.
#error	It allows generating an error from a specific location in your code.
#warning	It allows generating a level one warning from a specific location in your code.
#region	It lets you specify a block of code that you can expand or collapse when using the outlining feature of the Visual Studio Code Editor.
#endregion	It marks the end of a #region block.
 */

#define PI 
using System;

namespace PreprocessorDAppl {
    class Program {
        static void Main(string[] args) {
            #if (PI)
                Console.WriteLine("PI is defined");
            #else
                Console.WriteLine("PI is not defined");
            #endif
            Console.ReadKey();
        }
    }
}