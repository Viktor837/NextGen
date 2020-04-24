#pragma once
#include "ProductDescription.h"
#include "ItemID.h"
public class Productcatalog
{
private:
	Map<ItemID, ProductDescription>descriptions = new HashMap()<ItemID, ProductDescription>;
public:
	ProductCatalog();
	ProductDescription getProductDescription(ItemID id);

}