/*
 * En el ejemplo que vamos a ver, el Productor genera un entero entre 0 y 9, lo almacena
 * en un objeto Almacen y escribe en pantalla el número generado. Para hacer que el problema
 * de sincronización sea un poco más complicado, el Productor se suspende durante un período
 * aleatorio entre 0 y 100 milisegundos antes de realizar la siguiente iteración del ciclo:
 */


public class Productor extends Thread
{
	private Almacen almacen;
	private int num;
	public Productor (Almacen a, int num)
	{
		almacen = a;
		this.num = num;
	}

	public void run()
	{
		for (int i = 0; i < 10; i++)
		{
			almacen.guardar(i);
			System.out.println("Productor..." + this.num + "..Guardado:.." + i);
			try
			{
				sleep((int)(Math.random() * 100));
			}
			catch (InterruptedException e) { }
		}
	}
}

/*
 * El Consumidor no contiene ningún mecanismo de espera y consume los objetos del
Almacen (exactamente el mismo objeto en el que el Productor coloca los números que
genera) a medida que están disponibles.
 */

public class Consumidor extends Thread
{
	private Almacen almacen;
	private int num;
	public Consumidor(Almacen a, int num)
	{
		almacen = a;
		this.num = num;
	}

	public void run()
	{
		int val = 0;
		for (int i = 0; i < 10; i++)
		{
			val = almacen.sacar();
			System.out.println("Consumidor.." + this.num + "..Sacado:...." + val);
		}
	}
}

/*
Las actividades del Productor y el Consumidor se deben sincronizar de dos maneras.
En primer lugar, los dos threads no deben acceder simultáneamente al Almacen. Un thread
Java puede hacer esto bloqueando un objeto. Cuando un objeto está bloqueado por un thread y
otro thread trata de llamar a un método sincronizado en el mismo objeto, el segundo thread se
bloquea hasta que el objeto es liberado.
En segundo lugar, los dos threads deben coordinarse. El Productor debe tener algún
medio de indicarle al Consumidor que hay un valor disponible y el Consumidor debe tener
alguna manera de avisar al Productor de que el valor ha sido leído. La clase Object propor-
ciona una colección de métodos (wait, notify y notifyAll) para que los threads esperen a
que una condición se satisfaga o informen a otros threads de un cambio en una determinada
condición.

 */

public class Almacen {
	private int contenido;

	private boolean hayAlgo = false;

	public synchronized int guardar()
	{
		...
	}

	public synchronized void sacar (int val)
	{
		...
	}

}

public synchronized void guardar(int val) { // No funciona
if (hayAlgo == false) {
hayAlgo = true;
contenido = val;
}
}
public synchronized int sacar() { // No funciona
if (hayAlgo == true) {
hayAlgo = false;
return contenido;
}
}


Lo que queremos realmente es que el Consumidor espere hasta que el Productor
ponga algo en el Almacen y que el Productor notifique al Consumidor cuando lo haga.
Igualmente, el Productor debe esperar hasta que el Consumidor tome un valor y notifique
al Productor de que lo ha hecho. Los dos threads deben coordinarse más estrechamente y
para eso están diseñados los métodos wait y notifyAll de la clase Object:
public synchronized void guardar(int val) {
while (hayAlgo == true) {
try { // Espera hasta que el Consumidor saque algo
wait();
}
catch (InterruptedException e) { }
}
contenido = val;
hayAlgo = true; // Avisamos al Consumidor
notifyAll();
}
public synchronized int sacar() {
while (hayAlgo == false) {
try { // Espera hasta que el Productor guarde algo
wait();
}
catch (InterruptedException e) { }
}
hayAlgo = false; // Avisamos al Productor
notifyAll();
return contenido;
