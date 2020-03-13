#pragma once

public class Productcatalog
{
private:
	Map<ItemID, ProductDescription>
		descriptions = new HashMap() < ItemID, ProductDescription > ;
public:
	ProductCatalog();
	ProductDescription getProductDescription(ItemID id);
}