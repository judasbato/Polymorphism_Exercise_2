#ifndef POLYMORPHISM_EXERCISE_2_ACCOUNT_H
#define POLYMORPHISM_EXERCISE_2_ACCOUNT_H
#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual ~Account() = default;
};

#endif //POLYMORPHISM_EXERCISE_2_ACCOUNT_H
