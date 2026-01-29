#include "asiakas.h"
#include <iostream>
using namespace std;


asiakas::asiakas(string n, double raja)
    : nimi(n), tili(n), ltili(n, raja)
{
    cout<<"Pankkitili luotu "<<nimi<<":lle"<<endl;
    cout<<"Luottotili luotu "<<nimi<<":lle"<<", luottoraja "<<raja<<endl;
    cout<<"Asiakkuus luotu "<<nimi<<endl;
    showSaldo();

}

string asiakas::getNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout<<"Käyttötilin saldo: "<<tili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<ltili.getBalance()<<endl;
}

bool asiakas::talletus(double amount)
{
    if (tili.deposit(amount)) {
        cout<<"Pankkitili: talletus " << amount << " tehty" <<endl;
        return true;
    }
    return false;
}

bool asiakas::nosto(double amount)
{
    return tili.withdraw(amount);
}

bool asiakas::luotonMaksu(double amount)
{
    return ltili.deposit(amount);
}

bool asiakas::luotonNosto(double amount)
{
    return ltili.withdraw(amount);
}


bool asiakas::tiliSiirto(double summa, asiakas &vastaanottaja)
{
    if (summa <= 0) {
        cout<<"Siirron summa täytyy olla yli 0!"<<endl;
        return false;
    }
    if (!tili.withdraw(summa)) {
        cout << "Ei tarpeeksi saldoa siirtoon!" << endl;
        return false;
    }

    cout<<"Pankkitili: "<<nimi<<" siirtää " << summa <<
         " "<<vastaanottaja.getNimi()<<":lle."<<endl;


    cout<< nimi <<" Pankkitili: "<<"nosto " << summa <<" tehty"<<endl;


    if (vastaanottaja.tili.deposit(summa)) {
        cout << vastaanottaja.getNimi()<< " "<<"Pankkitili: nosto "<<summa<<" tehty"<<endl;
    }



     return true;


}
