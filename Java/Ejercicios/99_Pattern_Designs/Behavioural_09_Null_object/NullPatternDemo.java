/**
 * In Null Object pattern, a null object replaces
 *  check of NULL object instance. Instead of putting
 *  if check for a null value, Null Object reflects
 *  a do nothing relationship. Such Null object can
 *  also be used to provide default behaviour in case
 *  data is not available.
 *
 * http://www.tutorialspoint.com/design_pattern/null_object_pattern.htm
 * http://www.oodesign.com/null-object-pattern.html
 */

//AbstractCustomer.java
public abstract class AbstractCustomer {
   protected String name;
   public abstract boolean isNil();
   public abstract String getName();
}

//RealCustomer.java
public class RealCustomer extends AbstractCustomer {

   public RealCustomer(String name) {
      this.name = name;		
   }
   
   @Override
   public String getName() {
      return name;
   }
   
   @Override
   public boolean isNil() {
      return false;
   }
}

//NullCustomer.java
public class NullCustomer extends AbstractCustomer {

   @Override
   public String getName() {
      return "Not Available in Customer Database";
   }

   @Override
   public boolean isNil() {
      return true;
   }
}

//CustomerFactory.java
public class CustomerFactory {
	
   public static final String[] names = {"Rob", "Joe", "Julie"};

   public static AbstractCustomer getCustomer(String name){
   
      for (int i = 0; i < names.length; i++) {
         if (names[i].equalsIgnoreCase(name)){
            return new RealCustomer(name);
         }
      }
      return new NullCustomer();
   }
}

//NullPatternDemo.java
public class NullPatternDemo {
   public static void main(String[] args) {

      AbstractCustomer customer1 = CustomerFactory.getCustomer("Rob");
      AbstractCustomer customer2 = CustomerFactory.getCustomer("Bob");
      AbstractCustomer customer3 = CustomerFactory.getCustomer("Julie");
      AbstractCustomer customer4 = CustomerFactory.getCustomer("Laura");

      System.out.println("Customers");
      System.out.println(customer1.getName());
      System.out.println(customer2.getName());
      System.out.println(customer3.getName());
      System.out.println(customer4.getName());
   }
}
