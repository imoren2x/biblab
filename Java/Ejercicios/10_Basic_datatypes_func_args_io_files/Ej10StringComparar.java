/**
  * Tipo String:
  * ------------
  * Programa que emplea los m�todos
  *  - equals,
  *  - equalsIgnoreCase,
  *  - compareTo
  *  - y regionMatches de String.
  */

import javax.swing.JOptionPane;

public class Ej10StringComparar {

   public static void main( String args[] ) {
      //
      String s1 = new String( "hola" );  // s1 es una copia de "hola"
      String s2 = "adi�s";
      String s3 = "Feliz Cumplea�os";
      String s4 = "feliz cumplea�os";

      String salida = " s1 = " + s1 + "\n s2 = " + s2 + "\n s3 = " + s3 +
         "\n s4 = " + s4 + "\n\n";

      // probar igualdad
	  salida += "Prueba de igualdad con s1.equals()\n";
      if ( s1.equals( "hola" ) )  // true
         salida += "s1 es igual a \"hola\"\n";
      else
         salida += "s1 es distinta de \"hola\"\n";

      // probar igualdad con ==
	  salida += "Prueba de igualdad con ==\n";
      if ( s1 == "hola" )  // false; no son el mismo objeto
         salida += "s1 es igual a \"hola\"\n";
      else
         salida += "s1 es distinta de \"hola\"\n";

      // probar igualdad (ignorar may�sculas)
	  salida += "Prueba de igualdad con s1.equalsIgnoreCase() \n";
      if ( s3.equalsIgnoreCase( s4 ) )  // true
         salida += "s3 es igual a s4\n";
      else
         salida += "s3 es distinta de s4\n";

      // probar compareTo
      salida += "\ns1.compareTo( s2 ) es " + s1.compareTo( s2 ) +
         "\ns2.compareTo( s1 ) es " + s2.compareTo( s1 ) +
         "\ns1.compareTo( s1 ) es " + s1.compareTo( s1 ) +
         "\ns3.compareTo( s4 ) es " + s3.compareTo( s4 ) +
         "\ns4.compareTo( s3 ) es " + s4.compareTo( s3 ) + "\n\n";

      // probar regionMatches (susceptible a may�sculas)
      if ( s3.regionMatches( 0, s4, 0, 5 ) )
         salida += "Los primeros 5 caracteres de s3 y s4 concuerdan\n";
      else
         salida += "Los primeros 5 caracteres de s3 y s4 no concuerdan\n";

      // probar regionMatches (ignorar may�sculas)
      if ( s3.regionMatches( true, 0, s4, 0, 5 ) )
         salida += "Los primeros 5 caracteres de s3 y s4 concuerdan";
      else
         salida += "Los primeros 5 caracteres de s3 y s4 no concuerdan";

      JOptionPane.showMessageDialog( null, salida,
         "Comparaciones entre cadenas", JOptionPane.INFORMATION_MESSAGE );

      System.exit( 0 );
   }

} // fin de la clase CompararString