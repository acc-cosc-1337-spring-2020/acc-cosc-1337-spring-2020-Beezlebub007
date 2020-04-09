#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include<memory>
#include "catch.hpp"
#include"bank_account.h"
#include"checking_account.h"

using std::unique_ptr; using std::make_unique;
/*
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test bank account constructor")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>(500);
	REQUIRE(account->get_balance() == 500);
}
TEST_CASE("test bank account deposit")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>(500);
	REQUIRE(account->get_balance() == 500);
	
	account->deposit(50);
	REQUIRE(account->get_balance() == 550);

	REQUIRE_THROWS_AS(account->deposit(-50), Invalid);
	REQUIRE(account->get_balance() == 550);
}
TEST_CASE("test bank acount withdraw")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>(500);
	REQUIRE(account->get_balance() == 500);

	account->withdraw(50);
	REQUIRE(account->get_balance() == 450);
	
	REQUIRE_THROWS_AS(account->withdraw(-1),Invalid);
	REQUIRE(account->get_balance() == 450);

	REQUIRE_THROWS_AS(account->withdraw(451), Invalid);
	REQUIRE(account->get_balance() == 450);

}
TEST_CASE("test BankAccount default constructor balance 0")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>();
	REQUIRE(account->get_balance() == 0);
}
TEST_CASE("Test BankAccount initial open deposit >=25")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>();
	REQUIRE(account->get_balance() == 0);
	account->open(25);
	REQUIRE(account->get_balance() == 25);
}
TEST_CASE("Test BankAccount initial depois <25")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>();
	REQUIRE(account->get_balance() == 0);

	REQUIRE_THROWS_AS(account->open(24), Invalid);

}
TEST_CASE("Test BankAccount rate initialization")
{
	unique_ptr<BankAccount> account = make_unique <BankAccount>();

	REQUIRE(account->get_rate() == 0.025);
}
TEST_CASE("test checking account constructor")
{
	CheckingAcount checking(500);
	REQUIRE(checking.get_balance() == 512);
}
TEST_CASE("test checking account deposit")
{
	CheckingAcount account(150);
	REQUIRE(account.get_balance() == 153);
}
*/