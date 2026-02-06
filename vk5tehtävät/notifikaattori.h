#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <seuraaja.h>
#include <string>


class notifikaattori
{
public:
    notifikaattori();
    void lisaa(seuraaja *seur);
    void poista(seuraaja *seur);
    void tulosta();
    void postita(std::string viesti);

private:
    seuraaja* seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
