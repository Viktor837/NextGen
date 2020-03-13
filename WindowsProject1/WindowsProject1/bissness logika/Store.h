# pragma once

public class Store
{
private:
	ProductCatalog catalog = new ProductCatalog();
	Register register = new Register(catalog);
public:
	Register getRegister() { return register; }
}