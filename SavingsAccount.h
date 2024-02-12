#pragma once
#include "BankAccount.h"
class SavingsAccount :
    public BankAccount
{
private: 
    float interestRate;

public:
    void printInfo();
    void deposit(float amount);
    void withdraw(float amount);

    float getInterestRate();
    void setInterestRate(float ir);

    SavingsAccount();
    SavingsAccount(string cn, float b, float ir);

};

