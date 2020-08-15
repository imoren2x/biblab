
public class Ej01HelloWorld1 {

	public static void printLine() {
		System.out.println("Buenas, soy un aprendiz de Java!");
	}

	public void print2() {
		System.out.println("Buenas, soy un aprendiz de Java!");
		Ej01HelloWorld1.printLine();
	}

	public static void main(String[] args) {
		System.out.println("Buenas, soy un aprendiz de Java!");
		printLine(); //also possible without HelloWorld or this method//
		Ej01HelloWorld1 hello = new Ej01HelloWorld1();
		hello.print2();
		// AdiosWorld adios = new AdiosWorld();
		// adios.imprimir();
		//HelloWorld.print2(); //Not possible because of static//
	}
}
