#pragma once
#include "BankAccount.h"
class SavingsAccount :
    public BankAccount
{
private: 
    float interestRate;

public:
    void printInfo();// override 
    void deposit(float amount); // override
    void withdraw(float amount);// override

    float getInterestRate();
    void setInterestRate(float ir);

    SavingsAccount();
    SavingsAccount(string cn, float b, float ir);

};

