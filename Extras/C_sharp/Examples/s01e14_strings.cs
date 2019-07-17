using System;

/**
Sr.No   Methods
---------------
 1 public static int Compare(string strA, string strB)
Compares two specified string objects and returns an integer that indicates their relative position in the sort order.

 2 public static int Compare(string strA, string strB, bool ignoreCase )
Compares two specified string objects and returns an integer that indicates their relative position in the sort order. However, it ignores case if the Boolean parameter is true.

 3 public static string Concat(string str0, string str1)
Concatenates two string objects.

 4 public static string Concat(string str0, string str1, string str2)
Concatenates three string objects.

 5 public static string Concat(string str0, string str1, string str2, string str3)
Concatenates four string objects.

 6 public bool Contains(string value)
Returns a value indicating whether the specified String object occurs within this string.

 7 public static string Copy(string str)
Creates a new String object with the same value as the specified string.

 8 public void CopyTo(int sourceIndex, char[] destination, int destinationIndex, int count)
Copies a specified number of characters from a specified position of the String object to a specified position in an array of Unicode characters.

 9 public bool EndsWith(string value)
Determines whether the end of the string object matches the specified string.

10 public bool Equals(string value)
Determines whether the current String object and the specified String object have the same value.

11 public static bool Equals(string a, string b)
Determines whether two specified String objects have the same value.

12 public static string Format(string format, Object arg0)
Replaces one or more format items in a specified string with the string representation of a specified object.

13 public int IndexOf(char value)
Returns the zero-based index of the first occurrence of the specified Unicode character in the current string.

14 public int IndexOf(string value)
Returns the zero-based index of the first occurrence of the specified string in this instance.

15 public int IndexOf(char value, int startIndex)
Returns the zero-based index of the first occurrence of the specified Unicode character in this string, starting search at the specified character position.

16 public int IndexOf(string value, int startIndex)
Returns the zero-based index of the first occurrence of the specified string in this instance, starting search at the specified character position.

17 public int IndexOfAny(char[] anyOf)
Returns the zero-based index of the first occurrence in this instance of any character in a specified array of Unicode characters.

18 public int IndexOfAny(char[] anyOf, int startIndex)
Returns the zero-based index of the first occurrence in this instance of any character in a specified array of Unicode characters, starting search at the specified character position.

19 public string Insert(int startIndex, string value)
Returns a new string in which a specified string is inserted at a specified index position in the current string object.

20 public static bool IsNullOrEmpty(string value)
Indicates whether the specified string is null or an Empty string.

21 public static string Join(string separator, params string[] value)
Concatenates all the elements of a string array, using the specified separator between each element.

22 public static string Join(string separator, string[] value, int startIndex, int count)
Concatenates the specified elements of a string array, using the specified separator between each element.

23 public int LastIndexOf(char value)
Returns the zero-based index position of the last occurrence of the specified Unicode character within the current string object.

24 public int LastIndexOf(string value)
Returns the zero-based index position of the last occurrence of a specified string within the current string object.

25 public string Remove(int startIndex)
Removes all the characters in the current instance, beginning at a specified position and continuing through the last position, and returns the string.

26 public string Remove(int startIndex, int count)
Removes the specified number of characters in the current string beginning at a specified position and returns the string.

27 public string Replace(char oldChar, char newChar)
Replaces all occurrences of a specified Unicode character in the current string object with the specified Unicode character and returns the new string.

28 public string Replace(string oldValue, string newValue)
Replaces all occurrences of a specified string in the current string object with the specified string and returns the new string.

29 public string[] Split(params char[] separator)
Returns a string array that contains the substrings in the current string object, delimited by elements of a specified Unicode character array.

30 public string[] Split(char[] separator, int count)
Returns a string array that contains the substrings in the current string object, delimited by elements of a specified Unicode character array. The int parameter specifies the maximum number of substrings to return.

31 public bool StartsWith(string value)
Determines whether the beginning of this string instance matches the specified string.

32 public char[] ToCharArray()
Returns a Unicode character array with all the characters in the current string object.

33 public char[] ToCharArray(int startIndex, int length)
Returns a Unicode character array with all the characters in the current string object, starting from the specified index and up to the specified length.

34 public string ToLower()
Returns a copy of this string converted to lowercase.

35 public string ToUpper()
Returns a copy of this string converted to uppercase.

36 public string Trim()
Removes all leading and trailing white-space characters from the current String object.
*/

namespace StringApplication {
    class Program {
        static void Main(string[] args) {
            //from string literal and string concatenation
            string fname, lname;
            fname = "Rowan";
            lname = "Atkinson";

            string fullname = fname + lname;
            Console.WriteLine("Full Name: {0}", fullname);

            //by using string constructor
            char[] letters = { 'H', 'e', 'l', 'l','o' };
            string greetings = new string(letters);
            Console.WriteLine("Greetings: {0}", greetings);

            //methods returning string
            string[] sarray = { "Hello", "From", "Tutorials", "Point" };
            string message = String.Join(" ", sarray);
            Console.WriteLine("Message: {0}", message);

            //formatting method to convert a value
            DateTime waiting = new DateTime(2012, 10, 10, 17, 58, 1);
            string chat = String.Format("Message sent at {0:t} on {0:D}", waiting);
            Console.WriteLine("Message: {0}", chat);
        }
    }
}