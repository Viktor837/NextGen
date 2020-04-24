# pragma once
#include "ItemID.h"
#include "Money.h"
#include <string>

public class ProductDescription
{
private:
	ItemID id;
	Money price;
	String description;
public:
	ProductDescription(ItemID id, Money price, std::string description);
	ItemID getItemId();
	Money getPrice();
	std::string getDescription();
}
