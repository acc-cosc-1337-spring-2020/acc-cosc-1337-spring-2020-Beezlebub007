//savings_account.h
#include "bank_account.h"
// derive class
class SavingsAccount : public BankAccount
{
public:
	SavingsAccount() = default;	         
	explicit SavingsAccount(int b): BankAccount(b){} 
	int get_balance() const { return 5000; }
};