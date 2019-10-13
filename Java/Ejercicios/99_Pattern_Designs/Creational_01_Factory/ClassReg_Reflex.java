class ProductFactory
{
	private HashMap m_RegisteredProducts = new HashMap();

	public void registerProduct (String productID, Class productClass)
	{
		m_RegisteredProducts.put(productID, productClass);
	}

	public Product createProduct(String productID)
	{
		Class productClass = (Class)m_RegisteredProducts.get(productID);
		Constructor productConstructor = cClass.getDeclaredConstructor(new Class[] { String.class });
		return (Product)productConstructor.newInstance(new Object[] { });
	}
}

//1. Registration done outside of product classes:

	public static void main(String args[]){
		Factory.instance().registerProduct("ID1", OneProduct.class);
	}
	
//2. Registration done inside the product classes:

class OneProduct extends Product
{
	static {
		Factory.instance().registerProduct("ID1",OneProduct.class);
	}
	...
}

class Main
{
	static
	{
		try
		{
			Class.forName("OneProduct");
			Class.forName("AnotherProduct");
		}
		catch (ClassNotFoundException any)
		{
			any.printStackTrace();
		}
	}
	public static void main(String args[]) throws PhoneCallNotRegisteredException
	{
		...
	}
}

/*
Virtues and drawbacks:
 + Factory can be singleton.
 - Performance reduction on about 10 %.
*/
