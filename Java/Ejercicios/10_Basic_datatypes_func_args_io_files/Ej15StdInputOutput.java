import java.io.*;

/**
 * A trivial program that says "Hello World" to the user.
 */
 
public class Ej15StdInputOutput {
	public static void main(String[] args) {
		int count;
		System.out.print("Lee por pantalla: >> ");
		//BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in));
		InputStreamReader iSR = new InputStreamReader(System.in);
		BufferedReader stdIn = new BufferedReader( iSR );
		String usIn = new String();
		try {
			usIn = stdIn.readLine(); //.readLine must be in a try structure//
		} catch (IOException e) {
			System.err.println("Error");
			System.exit(-1);
			e.printStackTrace();
		}
		
		System.out.println("You've entered: " + usIn + "\n");
	}
}