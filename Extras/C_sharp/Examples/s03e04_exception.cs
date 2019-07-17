
/**
 *
 Exceptions provide a way to transfer control from one part of a program to another. C# exception handling is built upon four keywords: try, catch, finally, and throw.

try: A try block identifies a block of code for which particular exceptions is activated. It is followed by one or more catch blocks.

catch: A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.

finally: The finally block is used to execute a given set of statements, whether an exception is thrown or not thrown. For example, if you open a file, it must be closed whether an exception is raised or not.

throw: A program throws an exception when a problem shows up. This is done using a throw keyword.
 */

/** 
 * Exceptions hierarchy
 C# exceptions are represented by classes. 
 Base: System.Exception class. 
 Derived:
  - System.ApplicationException 
  - System.SystemException classes

 Exception Class                    Description
 System.IO.IOException              Handles I/O errors.
 System.IndexOutOfRangeException    Handles errors generated when a method refers to an array index out of range.
 System.ArrayTypeMismatchException  Handles errors generated when type is mismatched with the array type.
 System.NullReferenceException      Handles errors generated from deferencing a null object.
 System.DivideByZeroException       Handles errors generated from dividing a dividend with zero.
 System.InvalidCastException        Handles errors generated during typecasting.
 System.OutOfMemoryException        Handles errors generated from insufficient free memory.
 System.StackOverflowException      Handles errors generated from stack overflow.

 */

using System;

//Handling exceptions//
namespace ErrorHandlingApplication {
    class DivNumbers {
        int result;
        DivNumbers() {
            result = 0;
        }

        public void division(int num1, int num2) {
            try
                result = num1 / num2;
            catch (DivideByZeroException e)
                Console.WriteLine("Exception caught: {0}", e);
            finally
                System.WriteLine("Result: {0}", result);
        }

        static void Main(string[] args) {
            DivNumbers d = new DivNumbers();
            d.division(25, 0);
            Console.ReadKey();
        }
    }
}