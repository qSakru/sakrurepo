#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include "pankkitili.h"
#include "luottotili.h"
using namespace std;

class asiakas
{
public:
    asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, asiakas &vastaanottaja);


private:
    string nimi;
    pankkitili tili;
    luottotili ltili;

protected:
};

#endif // ASIAKAS_H
