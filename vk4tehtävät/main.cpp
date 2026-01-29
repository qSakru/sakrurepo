#include <iostream>
#include "asiakas.h"
using namespace std;

int main()
{
    asiakas Aapeli("Aapeli", 1000);
    cout<<"\n"<<endl;
    Aapeli.talletus(250);
    Aapeli.luotonNosto(150);
    Aapeli.showSaldo();
    cout<<"\n"<<endl;



    asiakas Bertta("Bertta", 1000);
    cout<<"\n"<<endl;

    cout<<"Aapeli"<<endl;
    Aapeli.showSaldo();
    Aapeli.tiliSiirto(50, Bertta);
    cout<<"Bertta"<<endl;
    Bertta.showSaldo();





    return 0;
}
