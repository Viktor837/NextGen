# pragma once

public class Sale
{
private:
	List<SalesLineItem> lineitem = new ArrayList() < SalesLineItem > ;
	Date date = new Date();
	boolen isComplete = false;
	Payment payment;
public:
	Money getBalance();
	void becomeComplete();
	boolean isComplete();
	void makeLineItem(ProductDescription desc, int quantity);
	Money getTotal();
	void makePayment(Money cashTendered);
}