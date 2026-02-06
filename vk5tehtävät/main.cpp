#include <iostream>
#include <seuraaja.h>
#include <notifikaattori.h>

using namespace std;

int main()
{
    notifikaattori *n = new notifikaattori();
    seuraaja *A = new seuraaja ("Aapeli");
    seuraaja *B = new seuraaja ("Markku");
    seuraaja *C = new seuraaja ("Ukko");




    cout<<endl;

        n->lisaa(A);
        n->lisaa(B);
        n->lisaa(C);

        n->tulosta();

     n->postita("Tama on viesti 1");
     n->poista(B);
     n->postita("Tama on viesti 2");

     delete A;
     delete C;
     delete n;


    return 0;
}
