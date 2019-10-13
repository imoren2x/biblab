

public class PruebaDeThreads 
{
	public static void main (String[] args) 
	{
		new ThreadSimple(“Si”).start();
		new ThreadSimple(“No”).start();
	}
}
