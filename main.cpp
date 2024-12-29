#include <iostream>
#include "Bank.h"
#include "Utils.h"


using namespace std;


void clearScreen() {
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

void DisplayUserChoices()
{
    cout << "______________________________________" << endl;
    cout << "What would you like to do?: " << endl;
    cout << "1. Get Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Clear Screen" << endl;
    cout << "5. Exit" << endl;
    cout << "______________________________________" << endl;
}

int main()
{

    Bank BankSystem;

    cout << "Banking system starting..." << endl;

    BankSystem.PrintBalance();

    int  userChoice = 0;

    DisplayUserChoices();

    while(true)
    {

        cin >> userChoice;

        switch(userChoice)
        {
            case 1:
                {
                    //Print Balance

                    BankSystem.PrintBalance();

                    DisplayUserChoices();
                    break;
                }

            case 2:
                {
                    //Deposit

                    float depositAmount = 0.0f;

                    cout << "How much would you like to deposit? ";

                    cin >> depositAmount;

                    if(depositAmount > 0.0f)
                    {
                        cout << endl;
                        cout << "Deposit Accepted." << endl;
                        BankSystem.Deposit(depositAmount);
                    }
                    else
                    {
                        cout << "Deposit needs to be a positive number, deposit rejected." << endl;
                    }

                    DisplayUserChoices();
                    break;
                }

            case 3:
                {
                    //Withdraw

                    float withdrawAmount = 0.0f;

                    cout << "How much would you like to withdraw? ";

                    cin >> withdrawAmount;

                    if(withdrawAmount > 0.0f)
                    {
                        cout << endl;
                        cout << "Withdrawl Accepted." << endl;
                        BankSystem.Withdraw(withdrawAmount);
                    }
                    else
                    {
                        cout << "Withdrawal amount needs to be a positive number, withdrawal rejected." << endl;
                    }

                    DisplayUserChoices();
                    break;
                }

            case 4:
                // Clear Screen

                clearScreen();
                DisplayUserChoices();

                break;

            case 5:
                // Exit

                return 0;
                break;


            default:
                // Not supported option

                cout << "That's not an option, please choose from 1, 2, 3 or 4." << endl;
                return 1;
                break;
        }
    }



    return 0;
}
