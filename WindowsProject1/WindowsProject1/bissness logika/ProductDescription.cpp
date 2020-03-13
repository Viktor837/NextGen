#include "ProductDescription.h"

ProductDescription::ProductDescription(ItemID id, Money price, String description)
{
	this.id = id;
	this.price = price;
	this.description = description;
}
ItemID ProductDescription::getItemId()
{
	return id;
}
Money ProductDescription::getPrice()
{
	return price;
}
String  ProductDescription::getDescription()
{
	return description;
}