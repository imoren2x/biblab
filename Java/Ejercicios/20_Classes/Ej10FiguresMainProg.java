/**
 *
 */

//import Ej10FiguresClassDef.* //NO es un paquete//

public class Ej10FiguresMainProg
{
	public static void main(String args[])
	{
		Ej10FiguresClassDef figura1 = new Ej10FiguresClassDef(); //Default constructor//
		Ej10FiguresClassDef figura2 = new Ej10FiguresClassDef(5, 4, 6); //Parametered constructor//
		//Ej10FiguresClassDef figura3 (1, 1, 1) = new Ej10FiguresClassDef; //Parametered constructor//
		int coord1 = new Ej10FiguresClassDef(3, 10, 12).getX(); //Access to X coordenate//
		
		System.out.println("Coordenada X:" + figura1.getX());
		System.out.println("Coordenada X:" + figura2.getX());
		System.out.println("Coordenada X:" + coord1);
	}
}