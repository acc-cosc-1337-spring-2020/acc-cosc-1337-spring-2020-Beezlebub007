#include "bank_account.h"
#include<iostream>
using std::cout;
//bank_account.cpp

int BankAccount::get_balance() const
{
	return balance;
}

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

double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
	cout << "Balance is: " << b.balance;
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance is: " << b.balance;
	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amount;
	std::cout << "Enter Ammount: ";
	in >> amount;
	b.deposit(amount);

	return in;
}
