#include "BankAccount.h"

void BankAccount::setClientName(string cn)
{
    clientName = cn;

}

string BankAccount::getClientName()
{
    return clientName;
}

float BankAccount::getBalance()
{
    return balance;
}

void BankAccount::withdraw(float amount)
{
    balance -= amount;
}

void BankAccount::deposit(float amount)
{
    balance += amount;
}

BankAccount::BankAccount()
{
    setClientName("not set yet");
    balance = 1000;
}

BankAccount::BankAccount(string cn, float startingBalance)
{
    setClientName(cn);
    balance = startingBalance;
}
