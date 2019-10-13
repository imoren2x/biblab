/*
 *
 */

public class Ejemplo extends Applet implements Runnable 
{
	private Thread esteThread = null;
	
	public void start() 
	{
	if (esteThread == null) 
	{
		esteThread = new Thread(this);
		esteThread.start();
	}
	//...
	}

	public void run() 
	{
		Thread curThread = Thread.currentThread();
		while (esteThread == curThread) 
		{
			//. . .//
		}
	}

	public void stop() 
	{
		esteThread = null;
	}
}
