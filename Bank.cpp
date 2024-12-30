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

    if(amount > 0.0f)
    {
        cout << endl;
        cout << "Deposit Accepted." << endl;
        Bank::balance = Bank::balance + amount;
    }
    else
    {
        cout << "Deposit needs to be a positive number, deposit rejected." << endl;
    }
}

void Bank::Withdraw(float amount)
{

    if(amount > 0.0f)
    {
        cout << endl;

        if (Bank::balance - amount < 0.0f)
        {
            cout << "Withdrawl declined, not enough funds." << endl;
        }
        else
        {
            cout << "WIthdrawal accepted." << endl;
            Bank::balance = Bank::balance - amount;
        }

    }
    else
    {
        cout << "Withdrawal amount needs to be a positive number, withdrawal rejected." << endl;
    }
}
