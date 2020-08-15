/**
 *
 * 5 Algunas clases esenciales
 * 	5.1 Java Runtime Environment
 * 		5.1.1 Configuración de un programa Java. Propiedades
 *		5.1.2 Invocando un programa Java. Argumentos
 *		5.1.3 El entorno del sistema. La clase System
 *	5.2 Entrada y salida estándar
 *	5.3 Las clases String y StringBuffer
 *
 */

import java.io.*;
import java.util.Arrays;

public class Ej10StringInversion {

	public static String invertir(String src) {
		//
		int i, lon = src.length();

		StringBuffer dest = new StringBuffer(lon);

		for (i = (lon - 1); i >= 0; i--)
			dest.append(src.charAt(i));

		//Return destination
		return dest.toString();
	}
	public static void main( String args[] ) {
		//
		//For std input
		BufferedReader stdIn = new BufferedReader(new InputStreamReader(System.in));
		String usIn = new String();

		if ( args.length == 0 ) {
			//
			System.out.print("Escriba el texto: >> ");
			try {
				usIn = stdIn.readLine();
			} catch (IOException e) {
				System.err.println("Error");
				System.exit(-1);
			}
			//
		} else {
			usIn = Arrays.toString(args);
		}
		System.out.println("String de entrada: " + usIn);

		String strOut = Ej10StringInversion.invertir(usIn);

		System.out.println("String de salida: " + strOut);

		System.exit( 0 );
	}
}
