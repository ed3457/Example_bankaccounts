#pragma once
#include "BankAccount.h"
#include "SavingsAccount.h"
class Bank
{
private:
	string branchName;
	BankAccount **accounts;
	int count = 0;

public:
	void printAccounts();
	void addNewAccount();

	void setBranchName(string bn);

	string getBranchName();

	Bank(string bn);

	~Bank(); // destructor 

};

