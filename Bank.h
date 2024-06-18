#pragma once
#include "BankAccount.h"
#include "SavingsAccount.h"
class Bank
{
private:
	string branchName;
	BankAccount **accounts;// array of pointers 
	int count = 0;

public:
	void printAccounts();
	void addNewAccount();

	void withdrawFromAll(float b);

	void setBranchName(string bn);

	string getBranchName();

	Bank(string bn);

	~Bank(); // destructor 

};

