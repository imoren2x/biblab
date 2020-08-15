import java.io.File;

public class Ej05ReadDirs {

	public static void main(String[] args) {

		File file = null;
		String[] paths;

		String os = System.getProperty("os.name");
		String dirname = null;

		System.out.println("OS: " + os);

		if (os.equals("Linux")) {
			dirname = "./";
		} else if (os.equals("Windows XP")) {
			dirname = ".\\";
		}

		try {
			// create new file object
			file = new File(dirname);

			// array of files and directory
			paths = file.list();

			// for each name in the path array
			for(String path: paths) {
				// prints filename and directory name
				System.out.println(path);
			}
		} catch(Exception e) {
			// if any error occurs
			e.printStackTrace();
		}
	}
}