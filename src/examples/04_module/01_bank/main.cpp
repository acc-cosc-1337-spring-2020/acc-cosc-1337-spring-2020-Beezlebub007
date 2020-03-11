#include "checking_account.h"
#include<iostream>
using std::cout;using std::cin;

int main()
{
	CheckingAcount checking;
	CheckingAcount checking1(90);

	BankAccount a (100);						//explicitly calling constructor
	cout << a.get_balance() << "\n";
	BankAccount account(500), act1;
	cin >> account;								//
	cout << account << "\n";
	display_balance(account);
	auto balance = account.get_balance();
	cout << "Balance is: " << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount:";
	cin >> amount;

	try 
	{
		account.deposit(amount);
		cout << "Balance is: " << balance;
		
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}
	return 0;
}