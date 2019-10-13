/**
 * 
 */
package FileWriterAndList;

import java.io.IOException;

/**
 * @author imoren2x
 *
 */
public class FileWriterAndList {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		String id = Long.toString(System.currentTimeMillis()/1000);
		
		try {
			System.out.println("Identificador del fichero: " + id);
			TestResults testResults = new TestResults(id);
			System.out.println("Nueva linea: ");
			testResults.append("Nueva linea");
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		

	}

}
