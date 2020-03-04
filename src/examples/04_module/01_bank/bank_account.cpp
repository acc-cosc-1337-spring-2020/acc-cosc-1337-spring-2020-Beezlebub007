#include "bank_account.h"

//bank_account.cpp

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		throw Invalid("Ammount must be greater than 0.");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0  )
	{
		throw Invalid("Ammount must be greater than 0.");
	}
	else if(balance < amount)
	{
		throw Invalid("Insufficient Funds");
	}
	else
	{
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (min_balance_to_open > amount)
	{
		throw Invalid("Amount must be atleas $25...");
	}
	else
	{
		balance += amount;
	}
}
