#pragma once

class Register
{
private:
	ProductCatalog catalog;
	Sale CurrentSale;
public:
	Register(ProductCatalog pc);
	Money getSubtotal();
}