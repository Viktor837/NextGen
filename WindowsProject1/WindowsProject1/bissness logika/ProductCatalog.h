#pragma once

public class Productcatalog
{
private:
	Map<ItemID, ProductDescription>
		descriptions = new HashMap() < ItemID, ProductDescription > ;
public:
	ProductCatalog()
	{
		ItemID id1 = new ItemID(100);
		ItemID id2 = new ItemID(200);
		Money price = new Money(3);
		ProductDescription desc;
		desc = new ProductDescription(id1, price, "����� 1");
		descriptions.put(id1, desc);
		desc = new ProductDescription(id2, price, "����� 2");
		descriptions.put(id2, desc);
	}
	ProductDescription getProductDescription(ItemID id)
	{
		return descriptions.get(id);
	}
}