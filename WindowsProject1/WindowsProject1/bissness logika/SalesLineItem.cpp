#include "SalesLineItem.h"

SalesLineItem::SalesLineItem(ProductDescription desc, int quantity) {
	this->quantity = quantity;
}
int SalesLineItem::getSubtotal() {
	return 0;
}