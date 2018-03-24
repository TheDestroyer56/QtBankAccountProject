#include "checkingaccount.h"

CheckingAccount::CheckingAccount()
{
    checkingBalance = 0; // maybe set both of this outside like local variable to this or maybe not, unsure about it but probaly like this.
    amount = 0;
}

void CheckingAccount::setDeposit(double amount)
{
    this->amount = amount;
    checkingBalance = checkingBalance + amount;
}

double CheckingAccount::getDeposit()
{
    return amount;
}

void CheckingAccount::setWithdraw(double amount)
{
    this->amount = amount;
    checkingBalance = checkingBalance - amount;
    checkingBalance-withgrawalFee = checkingBalance // probably set this up wrong but you forogt the fee for this when withdrawaling
}

double CheckingAccount::getWithdraw()
{
    return amount;
}

double CheckingAccount::getCheckingBalance()
{
    return checkingBalance;
}
CheckingAccount::~CheckingAccount()
{
//idk what this is for
}
