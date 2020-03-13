#include "SalesLineItem.h"


Money SalesLineItem::getSubtotal()
{
return description.getPrice().times(quantity);
}
SalesLineItem::SalesLineItem(ProductDescription desc, int quantity)
{
	this.description = desc;
	this.quantity = quantity;
}