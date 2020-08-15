/**
 * In Strategy pattern, a class behavior or its algorithm
 *  can be changed at run time.
 * This type of design pattern comes under behavior pattern.
 * In Strategy pattern, we create objects which represent various
 *  strategies and a context object whose behavior varies as per
 *  its strategy object.
 * The strategy object changes the executing algorithm of the context object.
 *
 * http://www.tutorialspoint.com/design_pattern/strategy_pattern.htm
 * http://www.oodesign.com/strategy-pattern.html
 */

//Strategy.java
public interface Strategy {
   public int doOperation(int num1, int num2);
}

//OperationAdd.java
public class OperationAdd implements Strategy{
   @Override
   public int doOperation(int num1, int num2) {
      return num1 + num2;
   }
}

//OperationSubstract.java
public class OperationSubstract implements Strategy{
   @Override
   public int doOperation(int num1, int num2) {
      return num1 - num2;
   }
}

//OperationMultiply.java
public class OperationMultiply implements Strategy{
   @Override
   public int doOperation(int num1, int num2) {
      return num1 * num2;
   }
}

//Context.java
public class Context {
   private Strategy strategy;

   public Context(Strategy strategy){
      this.strategy = strategy;
   }

   public int executeStrategy(int num1, int num2){
      return strategy.doOperation(num1, num2);
   }
}

//StrategyPatternDemo.java
public class StrategyPatternDemo {
   public static void main(String[] args) {
      Context context = new Context(new OperationAdd());
      System.out.println("10 + 5 = " + context.executeStrategy(10, 5));

      context = new Context(new OperationSubstract());
      System.out.println("10 - 5 = " + context.executeStrategy(10, 5));

      context = new Context(new OperationMultiply());
      System.out.println("10 * 5 = " + context.executeStrategy(10, 5));
   }
}
