/**
 * In proxy pattern, a class represents functionality
 *  of another class.
 * This type of design pattern comes under structural
 *  pattern.
 *
 * http://www.tutorialspoint.com/design_pattern/proxy_pattern.htm
 * http://www.oodesign.com/proxy-pattern.html
 *
 */

//Image.java
public interface Image {
   void display();
}

//RealImage.java
public class RealImage implements Image {

   private String fileName;

   public RealImage(String fileName){
      this.fileName = fileName;
      loadFromDisk(fileName);
   }

   @Override
   public void display() {
      System.out.println("Displaying " + fileName);
   }

   private void loadFromDisk(String fileName){
      System.out.println("Loading " + fileName);
   }
}

public class ProxyImage implements Image{

   private RealImage realImage;
   private String fileName;

   public ProxyImage(String fileName){
      this.fileName = fileName;
   }

   @Override
   public void display() {
      if(realImage == null){
         realImage = new RealImage(fileName);
      }
      realImage.display();
   }
}

public class ProxyPatternDemo {
	
   public static void main(String[] args) {
      Image image = new ProxyImage("test_10mb.jpg");

      //image will be loaded from disk
      image.display(); 
      System.out.println("");
      
      //image will not be loaded from disk
      image.display(); 	
   }
}

