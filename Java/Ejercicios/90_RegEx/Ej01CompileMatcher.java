import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Ej01CompileMatcher {
	public static void main( String args[] ){

      // String to be scanned to find the pattern.
      String line = "This order was placed for QT3000! OK?";
      String pattern = "(.*)(\\d+)(.*)";

      // Create a Pattern object
      Pattern regex = Pattern.compile(pattern);

      // Now create matcher object.
      Matcher m = regex.matcher(line);
      if (m.find( )) {
		 System.out.println("The pattern matches the string.\n");
         System.out.println("Original string: " + line );
		 System.out.println("RegEx pattern: " + pattern );
		 //
         System.out.println("Found value: " + m.group(0) );
         System.out.println("Found value: " + m.group(1) );
         System.out.println("Found value: " + m.group(2) );
      } else {
         System.out.println("NO MATCH");
      }
   }
}