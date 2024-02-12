#pragma once
#include <string>
#include <iostream>
using namespace std; 
class BankAccount
{
private:
	float balance;
	string clientName;

public:
	void setClientName(string cn);
	string getClientName();

	float getBalance();

	virtual void withdraw(float amount);

	virtual void deposit(float amount);

	BankAccount();
	BankAccount(string cn, float startingBalance);

	virtual void printInfo(); 


};

