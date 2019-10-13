/**
 * Example program that instantiates a figure and by standard output writes out his properties.
 * Syntax:
 *	Practice:
 *		Notation rules
 *		Javadoc
 *		Unittest
 *		Order/style
 *		Flow definition
 */

public class Ej10FiguresClassDef extends Object 
{
	private int x; //x coordenate//
	private int y; //y coordenate//
	private int ap; //apotheme//
	private static boolean instantiated; //static variable instantiated//
	private int[] aProp;
	
	/**
	 * Constructor: no arguments.
	 *		(0, 0) is taken as origin.
	 *		apotheme is 0.
	 */
	public Ej10FiguresClassDef()
	{
		super(); //Class Object constructor//
		this.x = 0;
		this.y = 0;
		this.ap = 0;
		this.instantiated = true;
		this.aProp = new int[4];
	}

	public Ej10FiguresClassDef(int x, int y, int ap)
	{
		super(); //Class Object constructor//
		this.x = x;
		this.y = y;
		this.ap = ap;
		this.instantiated = true;
	}

	public int getX()
	{
		return this.x;
	}
	
	public int getY()
	{
		return this.y;
	}
	
	public int getAp()
	{
		return this.ap;
	}

	public static boolean isInstantiated()
	{
		return Ej10FiguresClassDef.instantiated;
	}
	
	/**
	 * Finalize method
	 */
	protected void finalize() throws Throwable
	{
		//x = null; //not possible with int x
		super.finalize();
	}
}