/**
 * @author imoren2x
 *
 */


public class Ej12RefAndValueRep {

	//Attributes//
	//String str = new String("");
	String str;

	/**
	 *
	 */
	public Ej12RefAndValueRep() {
		this.str = new String("Constructor, de la clase AuxClass.");

		System.out.println(str);
	}

	public void setStr(String str) {
		this.str = str;
	}

	public String getStr() {
		System.out.println("Method getStr: " + this.str);
		return this.str;
	}

}