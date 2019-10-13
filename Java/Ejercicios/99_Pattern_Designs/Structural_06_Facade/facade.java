/**
 * http://www.tutorialspoint.com/design_pattern/facade_pattern.htm
 *
 * Facade pattern hides the complexities of the system
 *  and provides an interface to the client using which
 *  the client can access the system.
 * This type of design pattern comes under structural
 *  pattern as this pattern adds an interface to existing
 *  system to hide its complexities.
 *
 */

//Shape.java
public interface Shape {
   void draw();
}

//Rectangle.java
public class Rectangle implements Shape {

   @Override
   public void draw() {
      System.out.println("Rectangle::draw()");
   }
}

//Square.java
public class Square implements Shape {

   @Override
   public void draw() {
      System.out.println("Square::draw()");
   }
}

//Circle.java
public class Circle implements Shape {

   @Override
   public void draw() {
      System.out.println("Circle::draw()");
   }
}

//ShapeMaker.java
public class ShapeMaker {
   private Shape circle;
   private Shape rectangle;
   private Shape square;

   public ShapeMaker() {
      circle    = new Circle();
      rectangle = new Rectangle();
      square    = new Square();
   }

   public void drawCircle(){
      circle.draw();
   }
   public void drawRectangle(){
      rectangle.draw();
   }
   public void drawSquare(){
      square.draw();
   }
}

//FacadePatternDemo.java
public class FacadePatternDemo {
   public static void main(String[] args) {
      ShapeMaker shapeMaker = new ShapeMaker();

      shapeMaker.drawCircle();
      shapeMaker.drawRectangle();
      shapeMaker.drawSquare();		
   }
}
