/*
 * 
 */

public class PruebaProCon 
{
	public static void main(String[] args) 
	{
		Almacen a = new Almacen();
		Productor p1 = new Productor(a, 1);
		Consumidor c1 = new Consumidor(a, 1);
		p1.start();
		c1.start();
	}
}
