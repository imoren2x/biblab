import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Ej02CompileMatcher {
	public static void main( String args[] ){

      // String to be scanned to find the pattern.
      String line = "This order was placed for QT3000! OK?";
      String pattern = "(\\d+)";

      // Create a Pattern object
      Pattern regex = Pattern.compile(pattern);

      // Now create matcher object.
      Matcher m = regex.matcher(line);
	  System.out.println("Checking with Matcher.matches()");
      if (m.matches( )) {
		 System.out.println("The pattern matches the string.\n");
         System.out.println("Original string: " + line );
		 System.out.println("RegEx pattern: " + pattern );
		 //
         System.out.println("Found value: " + m.group(0) );
      } else {
         System.out.println("NO MATCH");
      }
	  
	  System.out.println("----------------------------------------------");
	  System.out.println("Checking with Matcher.find() (comme find en Python)");
	  if (m.find( )) {
		 System.out.println("The pattern matches the string.\n");
         System.out.println("Original string: " + line );
		 System.out.println("RegEx pattern: " + pattern );
		 //
         System.out.println("Found value: " + m.group(0) );
      } else {
         System.out.println("NO MATCH");
      }
	  
		/*
		public boolean lookingAt()
		Attempts to match the input sequence, starting at 
			the beginning of the region, against the pattern.
		*/
		
	  System.out.println("----------------------------------------------");
	  System.out.println("Checking with Matcher.lookingAt(): Check the beginning of the String.");
	  if (m.lookingAt( )) {
		 System.out.println("The pattern matches the string.\n");
         System.out.println("Original string: " + line );
		 System.out.println("RegEx pattern: " + pattern );
		 //
         System.out.println("Found value: " + m.group(0) );
      } else {
         System.out.println("NO LOOKING AT");
      }
   }
}