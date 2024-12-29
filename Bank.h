#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

class Bank {

public:
    void Bank();
    void ~Bank();

    float GetBalance();
    void Deposit(float amount);
    void Withdraw(float amount);


private:
    float balance;

};

#endif // BANK_H_INCLUDED
