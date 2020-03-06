//bank_account
#include <string>
#include <iostream>
class BankAccount
{													
public:																			//available to anyone
	BankAccount() = default;													// Default constructor
	explicit BankAccount(int b) : balance{b}{}									//empty {} is initialization of function. explicit means it needs to explicitly use a constructor to use 
	int get_balance() const { return balance; }									//makes function unmodifiable
	void deposit (int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() { return rate; }
	friend void display_balance(const BankAccount& b);							//also considered a free function
	friend std::ostream& operator<< (std::ostream & out, const BankAccount& b);	// Allows use of cout with class
	friend std::istream& operator>>(std::istream& in, BankAccount& b);			// Allows use of cin with class
private:																		//safegaurds variables from outside changes
	int balance{0};
	const int min_balance_to_open{ 25 };
	static double rate;															//static variables only exist one time 
	static double init_rate() { return .025; };
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};