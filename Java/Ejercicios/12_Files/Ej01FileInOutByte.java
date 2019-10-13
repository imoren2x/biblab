import java.io.*;

public class Ej01FileInOutByte {
   public static void main(String args[]) throws IOException {
      FileInputStream in = null;
      FileOutputStream out = null;

      try {
		//Debería concebir más casos por si la apertura
		//  de ficheros falla.//
         in = new FileInputStream("input.txt");
         out = new FileOutputStream("output.txt");
         
         int c;
         while ((c = in.read()) != -1) {
            out.write(c);
         }
		 
		 System.out.println("El fichero se ha copiado.");
      } finally {
         if (in != null) {
            in.close();
         }
         if (out != null) {
            out.close();
         }
      }
	  
	  // try {
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