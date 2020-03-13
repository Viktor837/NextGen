#pragma once

public class Register
{
private:
	ProductCatalog catalog;
	Sale CurrentSale;
public:
	Register(ProductCatalog catalog)
	{
		this.catalog = catalog;
	}
	void endSale()
	{
		currentSale.becomeComplete();
	}
	void enterItem(ItemID id, int quantity)
	{
		ProductDescription desc = catalog.getProductDescription(id);
		currentSale.makeLineItem(desc, quantity);
	}
	void makePayment(Money cashTendered)
	{
		currentSale.makePayment(cashTendered);
	}
}