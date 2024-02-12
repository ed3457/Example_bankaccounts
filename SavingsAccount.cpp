#include "SavingsAccount.h"

void SavingsAccount::printInfo()
{
	BankAccount::printInfo();
	cout << "Interest Rate:" << getInterestRate() << endl;
}

void SavingsAccount::deposit(float amount)
{
	BankAccount::deposit(amount + amount * interestRate);	
	
}

void SavingsAccount::withdraw(float amount)
{
	BankAccount::withdraw(amount + 20);

}

float SavingsAccount::getInterestRate()
{
	return interestRate;
}

void SavingsAccount::setInterestRate(float ir)
{
	interestRate = ir;
}

SavingsAccount::SavingsAccount():BankAccount()
{
	interestRate = 0.001;
}

SavingsAccount::SavingsAccount(string cn, float b, float ir):BankAccount(cn,b)
{
	interestRate = ir;
}
