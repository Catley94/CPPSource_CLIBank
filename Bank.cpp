#include <iostream>
#include "Bank.h"

using namespace std;

Bank::Bank()
{



}

Bank::~Bank()
{


}

float Bank::GetBalance()
{

    return Bank::balance;

}

void Bank::PrintBalance()
{
    cout << endl;
    cout << "Balance: " << Bank::balance << endl;
}

void Bank::Deposit(float amount)
{

    Bank::balance = Bank::balance + amount;

}

void Bank::Withdraw(float amount)
{
    if (Bank::balance - amount < 0.0f)
    {
        cout << "Withdrawl declined, not enough funds." << endl;
    }
    else
    {
        Bank::balance = Bank::balance - amount;
    }

}
