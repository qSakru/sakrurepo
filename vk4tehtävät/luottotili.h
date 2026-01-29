#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
#include "pankkitili.h"
using namespace std;

class luottotili: public pankkitili
{
public:
    luottotili(string nimi, double raja);
    bool deposit(double amount) override;
        bool withdraw(double) override;
     double getBalance() const override;



private:

protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
