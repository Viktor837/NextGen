#pragma once

public class Register
{
private:
    ProductCatalog catalog;
    Sale currentSale;
public:
	Register(ProductCatalog catalog);
	void endSale();
	void enterItem(ItemID id, int quantity);
	void makePayment(Money cashTendered);
}