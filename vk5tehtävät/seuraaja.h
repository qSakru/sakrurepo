#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>


class seuraaja
{
public:
    seuraaja(std::string n);
    std::string getNimi() const;
    void paivitys(std::string viesti);
    seuraaja *next = nullptr;

private:
    std::string nimi;
};

#endif // SEURAAJA_H
