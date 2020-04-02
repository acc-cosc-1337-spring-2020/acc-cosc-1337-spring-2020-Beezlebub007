#include "checking_account.h"
#include "savings_account.h"
#include<iostream>
#include<memory>
using std::cout;using std::cin;
using std::unique_ptr; using std::make_unique;
int main()
{	
	/*
	c++ 98
	SavingsAccount* s = new SavingsAccount{ 5000 };  // creates a pointer to dynamic memory
	//more code
	delete s;
	s = nullptr;*/

	// c++ 11 
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(90);  // needs default constructor to functio
	unique_ptr<BankAccount> c = make_unique <CheckingAcount>(100);
	
	std::vector<unique_ptr<BankAccount >>accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));
	for (auto &act : accounts)
	{
		cout << act->get_balance() << "\n";  //derefences pointer
	}
	/*
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
	*/
}