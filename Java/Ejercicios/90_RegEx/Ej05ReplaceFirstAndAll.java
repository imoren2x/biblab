import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Ej05ReplaceFirstAndAll {
    private static String REGEX = "dog";
    private static String INPUT = "The dog says meow. " +
                                    "All dogs say meow.";
    private static String REPLACE = "cat";

    public static void main(String[] args) {
       Pattern p = Pattern.compile(REGEX);
       // get a matcher object
       Matcher m = p.matcher(INPUT); 
	   
	   //
	   System.out.println(" ");
	   System.out.println("Original string: " + INPUT);
	   //Replace First
       INPUT = m.replaceFirst(REPLACE);
	   System.out.println("INPUT = m.replaceFirst(REPLACE);");
       System.out.println("OUTPUT = " + INPUT);
	   
	   //Replace All
       INPUT = m.replaceAll(REPLACE);
	   System.out.println("INPUT = m.replaceAll(REPLACE);");
       System.out.println("OUTPUT = " + INPUT);
   }
}