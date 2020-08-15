import java.util.Random;

/**
 *
 */

public class Ej11Random {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random random = new Random();

		int iValue;
		boolean bValue;

		System.out.println("Random number generation");
		System.out.println("------------------------");
		for (int i = 0; i < 9; i++) {
			iValue = random.nextInt(100);
			bValue = random.nextBoolean();
			System.out.println("Random value (int):" + Integer.toString( iValue ) );
			System.out.println("Random value (boolean):" + Boolean.toString( bValue ) );
		}
	}
}
