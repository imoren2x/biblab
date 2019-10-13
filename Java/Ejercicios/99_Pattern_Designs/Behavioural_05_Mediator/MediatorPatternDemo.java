/**
 * Mediator pattern is used to reduce communication complexity
 *  between multiple objects or classes. This pattern provides
 *  a mediator class which normally handles all the communications
 *  between different classes and supports easy maintenance of the
 *  code by loose coupling.
 * Mediator pattern falls under behavioral pattern category.
 *
 * http://www.tutorialspoint.com/design_pattern/mediator_pattern.htm
 * http://www.oodesign.com/mediator-pattern.html
 */

//ChatRoom.java
import java.util.Date;

public class ChatRoom {
   public static void showMessage(User user, String message){
      System.out.println(new Date().toString() + " [" + user.getName() + "] : " + message);
   }
}

//User.java
public class User {
   private String name;

   public String getName() {
      return name;
   }

   public void setName(String name) {
      this.name = name;
   }

   public User(String name){
      this.name  = name;
   }

   public void sendMessage(String message){
      ChatRoom.showMessage(this,message);
   }
}

//MediatorPatternDemo.java
public class MediatorPatternDemo {
   public static void main(String[] args) {
      User robert = new User("Robert");
      User john = new User("John");

      robert.sendMessage("Hi! John!");
      john.sendMessage("Hello! Robert!");
   }
}
