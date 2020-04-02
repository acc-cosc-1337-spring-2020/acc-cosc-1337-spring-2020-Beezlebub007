//checking_account.h
#include"bank_account.h"
// derived class
class CheckingAcount : public BankAccount											//allows CheckingAccount to inherit BankAccount class
{
public:
	CheckingAcount() = default;
	explicit CheckingAcount(int b) : BankAccount(b) {}
	int get_balance()const { return balance * (1 + get_rate()); }					// overides base functionality of BankAccount get_balance

};