//bank_account.h
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