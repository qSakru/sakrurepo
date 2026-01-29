#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>
using namespace std;

class pankkitili
{
public:
    pankkitili(string);
    virtual double getBalance() const;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);


private:

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
