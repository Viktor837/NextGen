# pragma once

public class Sale
{
private:
	List<SalesLineItem> lineitem = new ArrayList() < SalesLineItem > ;
	Date date = new Date();
	boolen isComplete = false;
	Payment payment;
public:
	Money getBalance()
	{
		payment.getAmount().minus(getTotal());
	}
	void becomeComplete() {
		isComplete = true;
	}
	boolean isComplete() { return isComplete; }
	void makeLineItem(ProductDescription desc, int quantity)
	{
		lineItems.add(new SaleLineItem(desc, quantity));
	}
	Money getTotal()
	{
		Money total = new Money();
		Money subtotal = null;
		for (SalesLineItem lineItem : lineItems)
		{
			subtotal = lineItem.getSubtotal();
			total.add(subtotal);
		}
		return total;
	}
	void makePayment(Money cashTendered)
	{
		payment = new Payment(cashTendered);
	}
}