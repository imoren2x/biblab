/**
 * @author imoren2x
 *
 */

public class Ej16StopWatch {

	/**
	 * 
	 */
	public Ej16StopWatch() {
		super();
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Ej16StopWatchAux sw = new Ej16StopWatchAux(Ej16StopWatchAux.sStartNow);
		
		sleep(1);
		System.out.println("StopWatch value: " + sw.getElapsedTimeFloat() + " s.");
		sleep(2);
		System.out.println("StopWatch value: " + sw.getElapsedTimeFloat() + " s.");
		sw.stop();
		sleep(1);
		System.out.println("StopWatch value: " + sw.getElapsedTimeFloat() + " s.");
		sleep(1);
		System.out.println("StopWatch value: " + sw.getElapsedTimeFloat() + " s.");
	}
	
	public static void sleep(long time) {

		try {
			Thread.sleep(time * 1000);
		} catch (Throwable t) {
			t.printStackTrace();
		}
	}
	
	
}

