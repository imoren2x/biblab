import java.io.*;

public class Ej02FileReaderWriter {
   public static void main(String args[]) throws IOException {
      FileReader in = null;
      FileWriter out = null;

      try {
         in = new FileReader("input.txt");
         out = new FileWriter("output.txt");

         int c;
         while ((c = in.read()) != -1) {
            out.write(c);
         }
      } finally {
         if (in != null) {
            in.close();
         }
         if (out != null) {
            out.close();
         }
      }

	  //try {
		// File file = new File("output.txt");

		// System.out.println("Borrando el fichero de salida.");

    	// if(file.delete()){
    		// System.out.println(file.getName() + " is deleted!");
    	// } else {
    		// System.out.println("Delete operation is failed.");
    	// }

	  // } catch (IOException e) {
		// e.printStackTrace();
	  // }
   }
}