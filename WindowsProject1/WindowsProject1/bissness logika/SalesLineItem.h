#pragma once

public class SalesLineItem
{
private:
	int quantity;
	ProductDescription description;
public:
	SalesLineItem(ProductDescription desc, int quantity)
	{
		this.description = desc;
		this.quantity = quantity;
	}
	Money getSubtotal()
	{
		return description.getPrice().times(quantity);
	}
}