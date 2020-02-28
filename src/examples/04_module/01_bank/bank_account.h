//bank_account
#include <string>
class BankAccount
{
public:												//avainlable to anyone
	BankAccount(int b) : balance{b}{}				//empty {} is initialization of function
	int get_balance() const { return balance; }		//makes function unmodifiable
	void deposit (int amount);
	void withdraw(int amount);
private:											//safegaurds variables from outside changes
	int balance;
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};