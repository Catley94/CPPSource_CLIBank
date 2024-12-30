#include <iostream>
#include "Bank.h"
#include "Utils.h"

using namespace std;

Bank::Bank()
{
    Print("Banking system starting...", "Green", false);
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
        //cout << "Deposit Accepted." << endl;

        Print("Deposit Accepted", "Green", true);

        Bank::balance = Bank::balance + amount;
    }
    else
    {
        //cout << "Deposit needs to be a positive number, deposit rejected." << endl;
        Print("Deposit needs to be a positive number, deposit rejected.", "Red", false);
    }
}

void Bank::Withdraw(float amount)
{

    if(amount > 0.0f)
    {
        cout << endl;

        if (Bank::balance - amount < 0.0f)
        {
            //cout << "Withdrawl declined, not enough funds." << endl;
            Print("Withdrawal declined, not enough funds.", "Red", false);
        }
        else
        {
            //cout << "Withdrawal accepted." << endl;
            Print("Withdrawal accepted.", "Green", true);
            Bank::balance = Bank::balance - amount;
        }

    }
    else
    {
        //cout << "Withdrawal amount needs to be a positive number, withdrawal rejected." << endl;
        Print("Withdrawal amount needs to be a positive number, withdrawal rejected.", "Red", false);
    }
}
