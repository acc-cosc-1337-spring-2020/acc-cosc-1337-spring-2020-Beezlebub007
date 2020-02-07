#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.
double gross_pay(double hours, double hourly_rate)
{
	if (hours > 40)
	{
		double pay;
		pay = 40 * hourly_rate;
		return (pay + (hours - 40)*(hourly_rate*1.5));
	}
	else if (hours <= 40)
	{
		return (hours * hourly_rate);
	}

	
}