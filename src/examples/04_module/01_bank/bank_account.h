//bank_account
#include <string>
#include <iostream>
#include <vector>

// base class
#ifndef BANK_ACCOUNT_H															//header gaurds
#define BANK_ACCOUNT_H															// helps keep track of how many times this has been used
class BankAccount
{													
public:																			//available to anyone
	BankAccount() = default;													// Default constructor
	explicit BankAccount(int b) : balance{b}{}									//empty {} is initialization of function. explicit means it needs to explicitly use a constructor to use 
	virtual int get_balance() const = 0; 										// defers execution of base class							//makes function unmodifiable
	void deposit (int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate()const { return rate; }
	friend void display_balance(const BankAccount& b);							//also considered a free function
	friend std::ostream& operator<< (std::ostream & out, const BankAccount& b);	// Allows use of cout with class
	friend std::istream& operator>>(std::istream& in, BankAccount& b);			// Allows use of cin with class


protected:																		//gives access to derived classes but not main
	int balance{ 0 };														

private:																		//safegaurds variables from outside changes
	const int min_balance_to_open{ 25 };
	static double rate;															//static variables only exist one time 
	static double init_rate() { return .025; };
};

#endif

#ifndef	INVALID_H
#define INVALID_H
class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};

#endif