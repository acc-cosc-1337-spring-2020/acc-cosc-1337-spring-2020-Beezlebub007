//customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<vector>
#include"bank_account.h"
#include<iostream>
#include<memory>

class Customer 
{
public:

	void add_account(std::unique_ptr<BankAccount>& act);
	friend std::ostream& operator<< (std::ostream & out, const Customer& c);

private:
	std::vector<std::unique_ptr<BankAccount>> accounts;

};




#endif // !CUSTOMER_H
