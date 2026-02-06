#include "notifikaattori.h"
#include <iostream>
using namespace std;

notifikaattori::notifikaattori()
{
    cout<<"Luodaan notifikaattori"<<endl;
}

void notifikaattori::lisaa(seuraaja* uSeur)
{
    cout<<"Notifikaattori lisaa seuraajan "<<uSeur->getNimi()<<endl;
    uSeur->next = seuraajat;
        seuraajat = uSeur;

}

void notifikaattori::poista(seuraaja* pSeur)
{ cout<<"Notifikaattori poistaa seuraajan "<<pSeur->getNimi()<<endl;
    seuraaja* alku = seuraajat;
    seuraaja* edellinen = nullptr;

    while (alku != nullptr) {

        if (alku == pSeur) {
            if (edellinen == nullptr) {
                seuraajat = alku->next;
            } else {
                edellinen->next = alku->next;
            }
            delete alku;
            return;
        }

        edellinen = alku;
        alku = alku->next;
    }
}
void notifikaattori::tulosta()
{   cout<<"Notifikaattorin seuraajat:"<<endl;
    seuraaja *alku = seuraajat;
    while (alku != nullptr) {
        cout<<"Listassa nyt "<<alku->getNimi()<<endl;
        alku=alku->next;
        if (alku != nullptr) {

            cout<<"Listassa seuraava: "<<alku->getNimi()<<endl;
        } else {
            cout<<"Lista loppui\n"<<endl;
        }

    }

}
void notifikaattori::postita(string viesti)

{   cout<<"Notifikaattori postaa viestin "<<viesti<<endl;
    seuraaja* alku = seuraajat;
    while (alku!= nullptr) {
        alku->paivitys(viesti);
        alku=alku->next;



    }
}
