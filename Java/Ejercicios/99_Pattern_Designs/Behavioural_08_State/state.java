/**
 * In State pattern a class behavior changes based on its state.
 * This type of design pattern comes under behavior pattern.
 * In State pattern, we create objects which represent various
 *  states and a context object whose behavior varies as its state object changes.
 *
 * http://www.tutorialspoint.com/design_pattern/state_pattern.htm
 *
 */

//state.java
public interface State {
   public void doAction(Context context);
}

//StartState.java
public class StartState implements State {

   public void doAction(Context context) {
      System.out.println("Player is in start state");
      context.setState(this);
   }

   public String toString(){
      return "Start State";
   }
}

//StopState.java
public class StopState implements State {

   public void doAction(Context context) {
      System.out.println("Player is in stop state");
      context.setState(this);
   }

   public String toString(){
      return "Stop State";
   }
}

//Context.java
public class Context {
   private State state;

   public Context(){
      state = null;
   }

   public void setState(State state){
      this.state = state;
   }

   public State getState(){
      return state;
   }
}

//StatePatternDemo.java
public class StatePatternDemo {
   public static void main(String[] args) {
      Context context = new Context();

      StartState startState = new StartState();
      startState.doAction(context);

      System.out.println(context.getState().toString());

      StopState stopState = new StopState();
      stopState.doAction(context);

      System.out.println(context.getState().toString());
   }
}
