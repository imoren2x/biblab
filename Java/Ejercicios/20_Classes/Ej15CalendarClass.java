import java.util.Calendar;
import java.util.GregorianCalendar;


public class Ej15CalendarClass extends java.lang.Object {
	/**
	 * @param args
	 */
	public static void main(String args[]) {

		Calendar calendario = new GregorianCalendar();
		System.out.println("Start: " + calendario.get(Calendar.HOUR) + ":" +
					calendario.get(Calendar.MINUTE) + ":" + calendario.get(Calendar.SECOND) +
					":" + calendario.get(Calendar.MILLISECOND));

		long ref = calendario.get(Calendar.HOUR) +
				calendario.get(Calendar.MINUTE) * 60 +
				calendario.get(Calendar.SECOND);

		System.out.println("ref:" + ref);
		long deltaTime = 3; //seconds//
		long diff = 0;	//( calendario.get(Calendar.MINUTE) * 60 +
						//calendario.get(Calendar.SECOND) ) - ref;
		while ( diff < deltaTime ) {
			System.out.println("Start: " + calendario.get(Calendar.HOUR) + ":" +
				calendario.get(Calendar.MINUTE) + ":" + calendario.get(Calendar.SECOND) +
				":" + calendario.get(Calendar.MILLISECOND));
			//
			System.out.println("Diff:" + diff);
			System.out.println("Ref:" + ref);

			calendario = null;
			calendario = new GregorianCalendar();
			long temp = calendario.get(Calendar.HOUR) +
						calendario.get(Calendar.MINUTE) * 60 +
						calendario.get(Calendar.SECOND);
			System.out.println("Temp:" + temp);

			diff = ( calendario.get(Calendar.HOUR) +
					calendario.get(Calendar.MINUTE) * 60 +
					calendario.get(Calendar.SECOND) ) - ref;
		}

		Calendar calendario2 = new GregorianCalendar();
		System.out.println("End: " + calendario2.get(Calendar.HOUR) + ":" +
				calendario2.get(Calendar.MINUTE) + ":" + calendario2.get(Calendar.SECOND) +
				":" + calendario2.get(Calendar.MILLISECOND));
		/*
		 *long diff = calendario2.getTimeInMillis() - calendario.getTimeInMillis();
		Calendar diferencia = new GregorianCalendar();
		diferencia.setTimeInMillis(diff);
		System.out.println("Time: " + diferencia.get(Calendar.MINUTE) + "min. " +
		            diferencia.get(Calendar.SECOND) + "sec. " + diferencia.get(Calendar.MILLISECOND) + "millisec.");
		 */

		}
}
