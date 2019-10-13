

public class Ej01Rectangulo {
	public int base = 0;
	public int altura = 0;
	public Ej01PuntoRect origen;

	// Cuatro constructores
	public Ej01Rectangulo() {
		origen = new Ej01PuntoRect(0, 0);
	}

	public Ej01Rectangulo(Ej01PuntoRect p) {
		origen = p;
	}

	public Ej01Rectangulo(int b, int a) {
		this(new Ej01PuntoRect(0, 0), b, a);
	}

	public Ej01Rectangulo(Ej01PuntoRect p, int b, int a) {
		origen = p;
		base = b;
		altura = a;
	}

	// Mover el rectángulo
	public void mover(int x, int y) {
		origen.x = x;
		origen.y = y;
	}

	// Calcular el área
	public int area() {
		return base * altura;
	}

	// Limpieza
	protected void finalize() throws Throwable {
		origen = null;
		super.finalize();
	}
}