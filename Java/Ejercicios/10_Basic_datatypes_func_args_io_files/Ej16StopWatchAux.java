/**
 * @author imoren2x
 *
 * Methods:
 *  - 
 */

public class Ej16StopWatchAux {
	public final static int sStartNow = 1;
	//
	private long startTime = 0;
	private long stopTime = 0;
	private boolean running = false;

	//Default constructor//
	public Ej16StopWatchAux() {
		super();
	}
	
	//Constructor with integer//
	public Ej16StopWatchAux( int arg ) {
		super();
		
		if ( arg == Ej16StopWatchAux.sStartNow ) {
			start();
		}
	}
	
	//Constructor with boolean//
	public Ej16StopWatchAux( boolean startNow ) {
		super();
		
		if (startNow) {
			start();
		}
	}

	//start function
	public void start() {
	    this.startTime = System.currentTimeMillis();
	    this.running = true;
	}


	//stop function//
	public void stop() {
	    this.stopTime = System.currentTimeMillis();
	    this.running = false;
	}


	/**
	 * Get elapsed time in milliseconds.
	 *
	 * @return Elapsed time from start in seconds.
	 *
	 * @see start, stop, getElapsed
	 *
	 */
	public long getElapsedTime() {
	    long elapsed;
	    if (running) {
	         elapsed = (System.currentTimeMillis() - startTime);
	    }
	    else {
	        elapsed = (stopTime - startTime);
	    }
	    return elapsed;
	}


	/**
	 * Get elapsed time in seconds.
	 *
	 * @return Elapsed time from start in seconds.
	 *
	 * @see start, stop, getElapsed
	 *
	 */
	public long getElapsedTimeSecs() {
	    long elapsed;
	    if (running) {
	        elapsed = ((System.currentTimeMillis() - startTime) / 1000);
	    }
	    else {
	        elapsed = ((stopTime - startTime) / 1000);
	    }
	    return elapsed;
	}


	/**
	 * Get elapsed time in seconds and decimals.
	 *
	 * @return Elapsed time from start in seconds.
	 *
	 * @see start, stop, getElapsed
	 *
	 */
	public float getElapsedTimeFloat() {
	    float elapsed;
	    if (running) {
	        elapsed = ( (float) (System.currentTimeMillis() - startTime) / 1000.0f );
	    }
	    else {
	        elapsed = ( (float) (stopTime - startTime) / 1000.0f );
	    }
	    return elapsed;
	}
	
	/*
	 *     //sample usage
    public static void main(String[] args) {
        StopWatch s = new StopWatch();
        s.start();
        //code you want to time goes here
        s.stop();
        System.out.println("elapsed time in milliseconds: " + s.getElapsedTime());
    }
    */
}
