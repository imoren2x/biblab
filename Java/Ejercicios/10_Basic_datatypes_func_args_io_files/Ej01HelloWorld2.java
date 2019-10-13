/**
 * A trivial program that says "Hello World" to the user.
 */

import java.util.ArrayList;
import java.io.*;

public class Ej01HelloWorld2 {
	public static void main(String[] args) {
		String string = "Orbis, te saluto!!!";
		System.out.println(" HOLA MUNDO\n ");
		
		//Different variable definitions
		long l = new Long(4);						//int long
		int i = new Integer(5);						//int
		int ii = Integer.valueOf("5");				//int
		boolean b = new Boolean(true);				//boolean
		//byte y = new Byte(0x10);					//
		//short sh = new Short(45);					//
		float fl = new Float(5.5);					//float
		double db = new Double(4.56);				//double
		String str = new String("hola, caracola.");	//String
		//String str2 = ii.toString();//int cannot be dereferenced//
		String[] str3 = {"esto", "es", "un", "ejemplo", "sencillo"}; //String
		String[] str4 = new String[5];				//String
		String[] str5 = new String[5];				//String
		ArrayList<Integer> intList = new ArrayList<Integer>();	//ArrayList
		intList.add(5);
		
		System.out.println( "intList.toString(): " + intList.toString() );
		//switch(b):

		//PRINT DIFFERENT VARIABLES//
		System.out.println("str 3.length: " + str3.length  );
		System.out.println("int i: " + Integer.toString(i));
		System.out.println("boolean b: " + Boolean.toString(b));
		//System.out.println("byte y: " + Byte.toString(y));
		//System.out.println("short sh: " + Short.toString(sh));
		System.out.println("float fl: " + Float.toString(fl));
		System.out.println("double db: " + Double.toString(db));

		System.out.println(string);
	}
}