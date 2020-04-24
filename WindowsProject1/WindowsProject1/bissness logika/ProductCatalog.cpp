#include "ProductCatalog.h"


Productcatalog::ProductCatalog()
{
	ItemID idl = new ItemID ( 100 );
	ItemID id2 = new ItemID ( 200 );
	Money price = new Money ( 3 ) ;
	ProductDescription desc;
	desc = new ProductDescription ( idl, price, "товар 1" );
	descriptions.put ( idl, desc );
	desc = new ProductDescription ( id2, price, "товар 2" );
	descriptions.put ( id2, desc );
}
ProductDescription Productcatalog::getProductDescription(ItemID id)
{
	return descriptions.get(id);
}
