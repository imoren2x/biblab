abstract class Product
{
	public abstract Product createProduct();
	...
}

class OneProduct extends Product
{
	...
	static
	{
		ProductFactory.instance().registerProduct("ID1", new OneProduct());
	}
	public OneProduct createProduct()
	{
		return new OneProduct();
	}
	...
}

class ProductFactory
{
	public void registerProduct(String productID, Product p)    {
		m_RegisteredProducts.put(productID, p);
	}

	public Product createProduct(String productID){
		((Product)m_RegisteredProducts.get(productID)).createProduct();
	}
}