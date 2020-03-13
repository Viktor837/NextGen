# pragma once

public class ProductDescription
{
private:
	ItemID id;
	Money price;
	String description;
public:
	ProductDescription(ItemID id, Money price, String description);
	ItemID getItemId();
	Money getPrice();
	String getDescription();
}
