#include "checkingaccount.h"

CheckingAccount::CheckingAccount()
{
    checkingBalance = 0;
    amount = 0;
    withdrawalFee; // this is needed i believe;
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

}
