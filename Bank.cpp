#include "Bank.h"

void Bank::printAccounts()
{
    for (int i = 0; i < count; i++)
        accounts[i]->printInfo();

}
// Factory method 
void Bank::addNewAccount()
{
    cout << "Enter the type of account you want to create:(b=Checking,s=savings)\n";
    char choice;
    //TODO: add validation. 
    cin >> choice;

    switch (choice)
    {
    case 'b':
    { float balance;
    string cn;
    cout << "Enter the Starting Balance\n";
    cin >> balance;

    cout << "Enter the name of the client\n";
    cin >> cn;

    accounts[count] = new BankAccount(cn, balance);

    count++; }
    break;

    case 's':
    { float balance;
    string clientName;
    float ir;
    cout << "Enter the Starting Balance\n";
    cin >> balance;

    cout << "Enter the name of the client\n";
    cin >> clientName;

    cout << "Enter the Interest rate\n";
    cin >> ir;

    accounts[count] = new SavingsAccount(clientName, balance, ir);

    count++;
    }
    break;

    }




}

void Bank::withdrawFromAll(float b)
{
    for (int i = 0; i < count; i++)
        accounts[i]->withdraw(b);
}

void Bank::setBranchName(string bn)
{
    branchName = bn;
}

string Bank::getBranchName()
{
    return branchName;
}

Bank::Bank(string bn)
{
    setBranchName(bn);

    accounts = new BankAccount * [1000];
}

Bank::~Bank()
{
    // delete[] accounts;

    for (int i = 0; i < count; i++)
        delete accounts[i];

    delete[]accounts;
}
