/**
 * A trivial program that says "Hello World" to the user.
 */

import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;

public class Ej15FileReaderWriter {
	public static void main(String[] args) {
		//File
		File f = new File("./ultimaEjecucion.txt");
		//Check if file exists//
		if ( f.exists() ) {
			System.out.println("El fichero ya existe.\n");
			try {
				final int CHARSIZE = 100;
				FileReader reader = new FileReader(f);
				char readString[] = new char[CHARSIZE];
				int returncode = 0;
				//int iteration = 1;
				/* reader.read(char[], offset, number) no da buen resultado */
				while (returncode != -1) {
					//System.out.println("\n Iteration: " + iteration + "\n");
					//iteration++;
					returncode = reader.read(readString, 0, CHARSIZE);
					//System.out.println( readString.toString() );
					//System.out.println( Arrays.toString(readString) );
					System.out.print( String.valueOf(readString) );
					readString = new char[CHARSIZE];
				}//endwhile//
				/**/
				/*
				// To store the contents read via File Reader
				BufferedReader br = new BufferedReader(reader);
				// Read br and store a line in 'data', print data
				String data;
				while((data = br.readLine()) != null) {
					//data = br.readLine( );
					System.out.println(data);
				}
				*/
			} catch(IOException e) {
				System.out.println("bad !");
				e.printStackTrace();
			}
		//If the file doesn't exist//
		} else {
			System.out.println("El fichero no existe, lo creo.");
			try {
				f.createNewFile();
				FileWriter w = new FileWriter(f);
				w.write("Hola, caracola!!!");
				w.write("Como estas1!!");
				w.close();
			} catch (IOException e) {
				e.printStackTrace();
			}//end try-catch
		}//end if-else
	}//end main
}//end Ej15Files//
