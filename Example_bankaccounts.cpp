// Example_bankaccounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bank.h"
int main()
{
	Bank bank1("Royal Oak, MI");

	bank1.addNewAccount();

	bank1.addNewAccount();

	bank1.withdrawFromAll(50);


	bank1.printAccounts();

	//bank1.getBankAccount(0);

	bank1[0]->printInfo();



}

