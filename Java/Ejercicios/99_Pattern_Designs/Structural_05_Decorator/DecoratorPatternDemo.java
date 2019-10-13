
/**
 * Decorator pattern allows a user to add new
 *  functionality to an existing object without
 *  altering its structure.
 * This type of design pattern comes under
 *  structural pattern as this pattern acts
 *  as a wrapper to existing class.
 *
 * This pattern creates a decorator class which
 *  wraps the original class and provides
 *  additional functionality keeping class
 *  methods signature intact.
 *
 */

/**
 * http://www.tutorialspoint.com/design_pattern/decorator_pattern.htm
 * http://www.oodesign.com/composite-pattern.html
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
      System.out.println("Shape: Rectangle");
   }
}

//Circle.java
public class Circle implements Shape {

   @Override
   public void draw() {
      System.out.println("Shape: Circle");
   }
}

//ShapeDecorator.java
public abstract class ShapeDecorator implements Shape {
   protected Shape decoratedShape;

   public ShapeDecorator(Shape decoratedShape){
      this.decoratedShape = decoratedShape;
   }

   public void draw(){
      decoratedShape.draw();
   }	
}

//RedShapeDecorator.java
public class RedShapeDecorator extends ShapeDecorator {

   public RedShapeDecorator(Shape decoratedShape) {
      super(decoratedShape);		
   }

   @Override
   public void draw() {
      decoratedShape.draw();	       
      setRedBorder(decoratedShape);
   }

   private void setRedBorder(Shape decoratedShape){
      System.out.println("Border Color: Red");
   }
}

//DecoratorPatternDemo.java
public class DecoratorPatternDemo {
   public static void main(String[] args) {

      Shape circle = new Circle();

      Shape redCircle = new RedShapeDecorator(new Circle());

      Shape redRectangle = new RedShapeDecorator(new Rectangle());
      System.out.println("Circle with normal border");
      circle.draw();

      System.out.println("\nCircle of red border");
      redCircle.draw();

      System.out.println("\nRectangle of red border");
      redRectangle.draw();
   }
}

