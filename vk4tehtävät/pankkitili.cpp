#include "pankkitili.h"
#include <iostream>

pankkitili::pankkitili(string nimi)

    : omistaja(nimi), saldo(0)
{

}

bool pankkitili::deposit(double amount)
{
    if (amount  <= 0) {
        cout << "Talletuksen summa täytyy olla yli 0!"<<endl;
        return false;
    }
    saldo += amount;
    return true;
}

bool pankkitili::withdraw(double amount)
{
    if (amount <=0) {
        cout <<"Noston summa täytyy olla yli 0!"<<endl;
        return false;
    }
    else if (amount > saldo) {
        cout <<"Ei tarpeeksi saldoa!"<<endl;
        return false;
    }
    saldo -=amount;
    return true;
}

double pankkitili::getBalance() const
{
    return saldo;
}
