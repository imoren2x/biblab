

public class Ej01PuntoRectMain {

	public static void main(String args[]) {
		//
		Ej01PuntoRect punto = new Ej01PuntoRect(44, 78);
		
		Ej01Rectangulo rect1 = new Ej01Rectangulo(100, 200);
		Ej01Rectangulo rect2 = new Ej01Rectangulo(new Ej01PuntoRect(44,78));
		Ej01Rectangulo rect3 = new Ej01Rectangulo();
	}
}