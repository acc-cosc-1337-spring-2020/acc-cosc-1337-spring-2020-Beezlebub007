//bank_account
#include <string>
class BankAccount
{													
public:												//available to anyone
	BankAccount() = default;						// Default constructor
	explicit BankAccount(int b) : balance{b}{}		//empty {} is initialization of function. explicit means it needs to explicitly use a constructor to use 
	int get_balance() const { return balance; }		//makes function unmodifiable
	void deposit (int amount);
	void withdraw(int amount);
	void open(int amount);
private:											//safegaurds variables from outside changes
	int balance{0};
	const int min_balance_to_open{ 25 };
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};