public interface Product {  }

public abstract class Creator 
{
	public void anOperation() 
	{
		Product product = factoryMethod();
	}
	
	protected abstract Product factoryMethod();
}

public class ConcreteProduct implements Product {  }

public class ConcreteCreator extends Creator 
{
	protected Product factoryMethod() 
	{
		return new ConcreteProduct();
	}
}

public class Client 
{
	public static void main( String arg[] ) 
	{
		Creator creator = new ConcreteCreator();
		creator.anOperation();
	}
}