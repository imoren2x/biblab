/**
 *
 */
package FileWriterAndList;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Writer;

/**
 * @author imoren2x
 *
 */
public class TestResults {

	public String mFileName;

	public TestResults(String id) throws IOException {
		super();

		String resultFolder = "./Results/";
		File folder = new File(resultFolder);
		if (!folder.exists()) folder.mkdirs();

		String resultName = "TestCampaign_results" + id + ".csv";

		mFileName = resultFolder + resultName;

		File resultFile = new File(resultFolder, resultName);
		if (!resultFile.exists()) {
			try {
				resultFile.createNewFile();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}

		String header = "Campaign_ID, Verdict, Log_File\n\n";
		Writer writer = new FileWriter(resultFile);
        //Write Campaign parameters//
        writer.write(header);

        writer.close();

	}

	public void append(String line) throws IOException {

		File file = new File(mFileName);
//		FileWriter fileWriter = new FileWriter(file);

//		fileWriter.append(line);
//		fileWriter.close();

		FileWriter fileWritter = new FileWriter(file,true);
        BufferedWriter bufferWritter = new BufferedWriter(fileWritter);
        bufferWritter.write(line);
        bufferWritter.close();
	}

}
