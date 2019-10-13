/**
 * En Java, los objetos se pasan por valor,
 *  pero por valor al objeto, de manera que
 *  los metodos son accesibles.
 *
 * Las clases apuntan cuando son asignadas, 
 *  no son clones.
 *
 */

public class Ej12RefAndValueMain {

	Ej12RefAndValueRep auxClassAttr;
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		//
		int i = 3;
		String str = "hola, caracola.";
		boolean bool = true;
		Ej12RefAndValueRep auxClassInMain = new Ej12RefAndValueRep();
		Ej12RefAndValueRep auxClassPtr1;
		Ej12RefAndValueRep auxClassPtr2 = new Ej12RefAndValueRep();

		//No se puede llamar a un metodo no estatico desde un metodo estatico//
		//Cosas de Compilation time y RunTime//
		//method2();
		
		//Entrada//
		System.out.println(" ");
		System.out.println("Clase, entrada: ");
		auxClassInMain.getStr();
		System.out.println("Integer: entrada: " + Integer.toString(i));
		System.out.println("String: entrada: " + str);
		System.out.println("Boolean: entrada: " + Boolean.toString(bool));
		//Llamada al metodo//
		System.out.println("Llamada al metodo 1.");
		method1(i, str, bool, auxClassInMain);
		//Salida//
		System.out.println(" ");
		System.out.println("Clase, salida:");
		auxClassInMain.getStr();
		System.out.println("Integer: salida: " + Integer.toString(i));
		System.out.println("String: salida: " + str);
		System.out.println("Boolean: " + Boolean.toString(bool));
		System.out.println(" ");
		System.out.println("Llamada al metodo 2.");
		method2(auxClassInMain);
		auxClassInMain.getStr();
		System.out.println("CONCLUSION 1: El paso de parametros es por valor, no por referencia.");
		System.out.println(" ");		
		
		//Referencia entre clases al asignarlas//
		System.out.println("Parte 2");
		System.out.println("auxClassInMain.getStr():");
		auxClassInMain.getStr();
		System.out.println("auxClassInMain.setStr(String modificada en auxClassInMain.)");
		auxClassInMain.setStr("String modificada en auxClassInMain.");
		System.out.println(" ");
		System.out.println("auxClassPtr1 = auxClassInMain;");
		auxClassPtr1 = auxClassInMain;
		//A la entrada//
		System.out.println("auxClassPtr1.getStr();");
		auxClassPtr1.getStr();
		//Llamada//
		System.out.println("auxClassPtr1.setStr(auxClassPtr1 sin reservar modifica el objeto apuntado.);");
		auxClassPtr1.setStr("auxClassPtr1 sin reservar modifica el objeto apuntado.");
		//A la Salida//
		System.out.println("auxClassPtr1.getStr();");
		auxClassPtr1.getStr();
		System.out.println("auxClassInMain.getStr();");
		auxClassInMain.getStr();
		System.out.println("method2(auxClassPtr1);");
		method2(auxClassPtr1);
		System.out.println("auxClassPtr1.getStr();");
		auxClassPtr1.getStr();
		System.out.println("CONCLUSION 2: Las clases apuntan cuando son asignadas, no son clones en memoria.");
		System.out.println(" ");
		
		System.out.println("");
		System.out.println("auxClassPtr2 = auxClassInMain;");
		auxClassPtr2 = auxClassInMain;//Memory leaks??
		System.out.println("auxClassPtr2.getStr();");
		auxClassPtr2.getStr();
		//Llamada//
		System.out.println("auxClassPtr2.setStr(\"auxClassPtr2 modifica el objeto apuntado.\");");
		auxClassPtr2.setStr("auxClassPtr2 modifica el objeto apuntado.");
		//A la Salida//
		System.out.println("auxClassPtr2.getStr();");
		auxClassPtr2.getStr();
		System.out.println("auxClassPtr1.getStr();");
		auxClassPtr1.getStr();		
		System.out.println("auxClassMain.getStr();");
		auxClassInMain.getStr();
		System.out.println("CONCLUSION 3: Las clases apuntan cuando son asignadas, no son clones en memoria.");
		System.out.println(" ");
	}
	

	/**
	 * {@literal Este metodo tiene que ser static para poder usarlo en el metodo static main} 
	 * @param i
	 * @param str
	 * @param bool
	 * @param auxClass
	 */
	public static void method1(int i, String str, boolean bool, Ej12RefAndValueRep auxClass) {
		i += 1;
		str = "adios, caracola";
		bool = !bool;
		Ej12RefAndValueRep aux = new Ej12RefAndValueRep();
		aux.setStr("Modification del str hecho por el method1.");
		
		auxClass = aux;
		//auxClass.setStr("Modification del str hecho por el method1.");
		
	}
	
	public static void method2(Ej12RefAndValueRep auxClass) {
		auxClass.setStr("Modification del str hecho por el method2.");
	}

}