#pragma once
#include "ProductDescription.h"
#include "Money.h"
public class SalesLineItem
{
private: 
	int quantity;
	ProductDescription description;
public:
	SalesLineItem(ProductDescription desc, int quantity);
	int getSubtotal();
}