#include <iostream>
#include "Bank.h"


using namespace std;

int main()
{
    cout << "Banking system starting..." << endl;
    cout << "Balance: " << Bank::GetBalance() << endl;
    return 0;
}
