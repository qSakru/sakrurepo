#include "luottotili.h"
#include <iostream>
using namespace std;

luottotili::luottotili(string nimi, double raja)

: pankkitili(nimi), luottoraja(raja)
{


}

bool luottotili::deposit(double amount)
{
    if (amount <= 0) {
        cout<<"Velanmaksun summa täytyy olla yli 0!"<<endl;
        return false;
    }
    saldo +=amount;

    if (saldo > 0)
        saldo = 0;


    return true;
}


bool luottotili::withdraw(double amount)
{
    if (amount <= 0) {
        cout<<"Noston summa täytyy olla yli 0!"<<endl;
        return false;
    }
     if (saldo - amount <-luottoraja) {
        cout<<"Ei tarpeeksi luottorajaa!"<<endl;
         return false;
    }
    saldo-=amount;
    cout <<"Luottotili: nosto " << amount <<" tehty, luottoa jäljellä"<< getBalance() << endl;
        return true;
}

double luottotili::getBalance() const {
    return luottoraja + saldo;
}


