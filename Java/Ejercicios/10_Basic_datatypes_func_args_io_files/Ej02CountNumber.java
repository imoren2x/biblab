import java.io.*;
import java.util.Arrays;

/**
 * A program which reads from stdin, parses to integer
 *  and prints this value.
 */
 
public class Ej02CountNumber {
 	public static void main(String[] args) {
		int count = 0;
		
		//For std input
		BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in));
		String usIn = new String();
		
		if (args.length > 0) {
			//System.out.println(args[0]);
			count = Integer.parseInt(args[0]);
		} else {
			System.out.print("Lee por pantalla: >>");
			try {
				usIn = stdIn.readLine(); //.readLine must be in a try structure//
			} catch (IOException e) {
				System.err.println("Error");
				System.exit(-1);
			}
		}
		
		String str = String.format("Argumentos de entrada: %s \n", Arrays.toString(args));
		System.out.print(str);
		if (args.length == 0) {
			count = Integer.parseInt(usIn);
		}
		System.out.println("Entrada: " + count);
	}
}