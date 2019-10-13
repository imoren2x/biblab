/**
 * Fibonacci: recursive implementation
 *
 * Program receives a number as F(n) to obtain by console.
 * 
 * @author imoren2x
 * @title 
 *
 */

import java.io.*;

public class Ej02Fibonacci {
	public static int FibCalc(int iInput) {
		if (iInput == 0) {
			return 0;
		} else if (iInput == 1) {
			return 1;
		} else {
			return (FibCalc(iInput - 1) + FibCalc(iInput - 2));
		}
	}

	public static void main(String[] args) {
		//
		int iNumber;
		//
		//For std input
		BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in));
		String usIn = new String();
		
		if ( args.length == 0 ) {
			//
			System.out.print("Escriba un numero entero: >> ");
			try {
				usIn = stdIn.readLine();
			} catch (IOException e) {
				System.err.println("Error");
				System.exit(-1);
			}
			//
			iNumber = Integer.parseInt(usIn);
			System.out.println("Resultado: " + Ej02Fibonacci.FibCalc(iNumber));
		} else {
			iNumber = Integer.parseInt(args[0]);
			System.out.println("Resultado:" + Ej02Fibonacci.FibCalc(iNumber));
		}
	}//end main//

}