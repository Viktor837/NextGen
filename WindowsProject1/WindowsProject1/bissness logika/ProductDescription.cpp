#include "ProductDescription.h"
#include "Money.h"
#include "string"

ProductDescription::ProductDescription(ItemID id, Money price, std::string description)
{
	this . id = id;
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
std::string  ProductDescription::getDescription()
{
	return description;
}