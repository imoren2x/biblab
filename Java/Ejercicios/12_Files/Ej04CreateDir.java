import java.io.File;

public class Ej04CreateDir {
	public static void main(String args[]) {

		String os = System.getProperty("os.name");
		String dirname = null;
		boolean osAssigned;

		System.out.println("OS: " + os);

		if (os.equals("Linux")) {
			dirname = "./FatherDir/ChildDir";
			osAssigned = true;
		} else if (os.equals("Windows XP")) {
			dirname = ".\\FatherDir\\ChildDir";
			osAssigned = true;
		} else {
			osAssigned = false;
		}

		//try {
			if (osAssigned) {
				File d = new File(dirname);
				//Create directory now.
				d.mkdirs();
				System.out.println("Directorio creado.");
			} else {
				System.out.println("Directorio no ha podido ser creado.");
			}
		//} catch (Exception e) {
			//e.printStackTrace();
		//}
	}
}