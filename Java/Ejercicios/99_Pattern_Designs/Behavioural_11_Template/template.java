/**
 * In Template pattern, an abstract class exposes
 *  defined way(s)/template(s) to execute its methods.
 * Its subclasses can override the method implementation
 *  as per need but the invocation is to be in the same
 *  way as defined by an abstract class.
 * This pattern comes under behavior pattern category.
 *
 * http://www.tutorialspoint.com/design_pattern/template_pattern.htm
 * http://www.oodesign.com/template-method-pattern.html
 */

//Game.java
public abstract class Game {
   abstract void initialize();
   abstract void startPlay();
   abstract void endPlay();

   //template method
   public final void play(){

      //initialize the game
      initialize();

      //start game
      startPlay();

      //end game
      endPlay();
   }
}

//Cricket.java
public class Cricket extends Game {

   @Override
   void endPlay() {
      System.out.println("Cricket Game Finished!");
   }

   @Override
   void initialize() {
      System.out.println("Cricket Game Initialized! Start playing.");
   }

   @Override
   void startPlay() {
      System.out.println("Cricket Game Started. Enjoy the game!");
   }
}

//Football.java
public class Football extends Game {

   @Override
   void endPlay() {
      System.out.println("Football Game Finished!");
   }

   @Override
   void initialize() {
      System.out.println("Football Game Initialized! Start playing.");
   }

   @Override
   void startPlay() {
      System.out.println("Football Game Started. Enjoy the game!");
   }
}

//TemplatePatternDemo.java
public class TemplatePatternDemo {
   public static void main(String[] args) {

      Game game = new Cricket();
      game.play();
      System.out.println();
      game = new Football();
      game.play();
   }
}
