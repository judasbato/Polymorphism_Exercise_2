#ifndef POLYMORPHISM_EXERCISE_2_CHECKING_ACCOUNT_H
#define POLYMORPHISM_EXERCISE_2_CHECKING_ACCOUNT_H
#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double) override;
    virtual bool deposit(double) override;
    virtual ~Checking_Account() = default;
};


#endif //POLYMORPHISM_EXERCISE_2_CHECKING_ACCOUNT_H
