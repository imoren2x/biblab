using System;
using System.Text.RegularExpressions;

/**
Sr.No	Methods
1	public bool IsMatch(string input)
Indicates whether the regular expression specified in the Regex constructor finds a match in a specified input string.

2	public bool IsMatch(string input, int startat)
Indicates whether the regular expression specified in the Regex constructor finds a match in the specified input string, beginning at the specified starting position in the string.

3	public static bool IsMatch(string input, string pattern)
Indicates whether the specified regular expression finds a match in the specified input string.

4	public MatchCollection Matches(string input)
Searches the specified input string for all occurrences of a regular expression.

5	public string Replace(string input, string replacement)
In a specified input string, replaces all strings that match a regular expression pattern with a specified replacement string.

6	public string[] Split(string input)
Splits an input string into an array of substrings at the positions defined by a regular expression pattern specified in the Regex constructor.
 */

namespace RegExApplication {
    class Program {
        private static void showMatch(string text, string expr) {
            Console.WriteLine("The Expression: " + expr);
            MatchCollection mc = Regex.Matches(text, expr);
            foreach (Match m in mc) {
                Console.WriteLine(m);
            }
        }

        static void Main(string[] args) {
            string str = "make maze and manage to measure it";

            Console.WriteLine("Matching words start with 'm' and ends with 'e':");
            showMatch(str, @"\bm\S*e\b");
            Console.ReadKey();
        }
    }
}