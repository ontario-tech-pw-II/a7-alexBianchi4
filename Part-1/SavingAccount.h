#pragma once
#include "Account.h"

class SavingsAccount : public Account{
private:
    double interestrate;

public:
    SavingsAccount(double, double);
    ~SavingsAccount();

    double calculateInterest() const;
    void display(ostream &) const;


};
