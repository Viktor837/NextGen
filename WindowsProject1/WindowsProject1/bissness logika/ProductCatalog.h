#pragma once
#include "ProductDescription.h"
#include "ItemID.h"
#include <map>
public class Productcatalog
{
private:
	std::map<ItemID, ProductDescription> descriptions;
public:
	ProductCatalog();
	//ProductDescription getProductDescription(ItemID id);
}