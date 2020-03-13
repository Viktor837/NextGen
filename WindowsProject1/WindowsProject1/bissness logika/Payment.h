#pragma once

public class Payment
{
private:
	Money amount;
public:
	Payment(Money cashTendered) {
		amount = cashTendered;
	}
	Money getAmount() { return amount; }
}