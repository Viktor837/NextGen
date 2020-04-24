#pragma once

public class SalesLineItem
{
private:
	int quantity;
	ProductDescription description;
public:
	SalesLineItem(ProductDescription desc, int quantity);
	Money getSubtotal();
	