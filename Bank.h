#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

class Bank {

public:
    Bank();
    ~Bank();

    float GetBalance();
    void PrintBalance();
    void Deposit(float amount);
    void Withdraw(float amount);


private:
    float balance = 0.0f;

};

#endif // BANK_H_INCLUDED
