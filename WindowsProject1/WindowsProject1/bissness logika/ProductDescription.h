# pragma once

public class ProductDescription
{
private:
	ItemID id;
	Money price;
	String description;
public:
	ProductDescription(ItemID id, Money price, String description)
	{
		this.id = id;
		this.price = price;
		this.description = description;
	}
	ItemID getItemId() { return id; }
	Money getPrice() { return price; }
	String getDescription() { return description; }
}
