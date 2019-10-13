
/*
 Bridge is used when we need to decouple an
  abstraction from its implementation so
  that the two can vary independently.
 This type of design pattern comes under
  structural pattern as this pattern decouples
  implementation class and abstract class
  by providing a bridge structure between them.
 */

/**
 * http://www.tutorialspoint.com/design_pattern/bridge_pattern.htm
 * http://www.oodesign.com/bridge-pattern.html
 */

//DrawAPI.java
public interface DrawAPI {
   public void drawCircle(int radius, int x, int y);
}

//RedCircle.java
public class RedCircle implements DrawAPI {
   @Override
   public void drawCircle(int radius, int x, int y) {
      System.out.println("Drawing Circle[ color: red, radius: " + radius + ", x: " + x + ", " + y + "]");
   }
}

//GreenCircle.java
public class GreenCircle implements DrawAPI {
   @Override
   public void drawCircle(int radius, int x, int y) {
      System.out.println("Drawing Circle[ color: green, radius: " + radius + ", x: " + x + ", " + y + "]");
   }
}

//Shape.java
public abstract class Shape {
   protected DrawAPI drawAPI;
   
   protected Shape(DrawAPI drawAPI){
      this.drawAPI = drawAPI;
   }
   public abstract void draw();	
}

//Circle.java
public class Circle extends Shape {
   private int x, y, radius;

   public Circle(int x, int y, int radius, DrawAPI drawAPI) {
      super(drawAPI);
      this.x = x;  
      this.y = y;  
      this.radius = radius;
   }

   public void draw() {
      drawAPI.drawCircle(radius,x,y);
   }
}

//BridgePatternDemo.java
public class BridgePatternDemo {
   public static void main(String[] args) {
      Shape redCircle = new Circle(100,100, 10, new RedCircle());
      Shape greenCircle = new Circle(100,100, 10, new GreenCircle());

      redCircle.draw();
      greenCircle.draw();
   }
}
