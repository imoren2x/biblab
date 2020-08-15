import java.io.*;
public class Ej01ThrowsThrow {
	public static void deposit(double amount) throws ArrayStoreException, IllegalArgumentException {
		// Method implementation
		throw new ArrayStoreException();
	}


	public static void main(String args[]) {
		deposit(3.4);
	}
}