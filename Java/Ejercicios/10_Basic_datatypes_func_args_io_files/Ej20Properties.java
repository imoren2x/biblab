import java.util.Properties;
import java.util.Enumeration;
import java.util.Hashtable;
import java.io.*;

/**
 * A trivial program that says "Hello World" to the user.
 */
 
public class Ej20Properties extends Object {
	/**
	 * @title main function
	 *
	 */
	public static void main(String[] args) {
	
		String str = "ultimaEjecucion.txt";
		Properties prProps = new Properties();
		
		writeProperty(prProps, str);
		
		readProperty(prProps, str);
	}
	
	public static void writeProperty(Properties prProps, String str) {
		
		try {
			FileOutputStream pout = new FileOutputStream(str);
			prProps.put("key1", "value1");
			prProps.put("key2", "value2");
			prProps.put("key3", "value3");
			//prProps.remove("key3", "value3");
			prProps.store(pout, "Propiedades de la ultima ejecución");
			pout.close();
		} catch ( IOException e ) {
			System.out.println("Ha habido una exception.");
			e.printStackTrace();
		}
	}
	
	public static void readProperty(Properties prProps, String str) {
		//
		try {
			FileInputStream pin = new FileInputStream(str);
			prProps.load(pin);
			
			String value = prProps.getProperty("key1");
			
			System.out.println("Value: " + value);
			System.out.println("Property enum: " + prProps.propertyNames().toString());
			System.out.println("Size: " + prProps.size());
			
			System.out.println("Print keys:");
			Enumeration keys;
			keys = prProps.propertyNames();
			while ( keys.hasMoreElements() )
				System.out.println(keys.nextElement().toString());
			//
			
			// System.out.println("Print values:");
			// HashTable values;
			// values = prProps.values();
			// while ( values.hasMoreElements() )
				// System.out.println(values.nextElement().toString());
			//
			
			pin.close();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
