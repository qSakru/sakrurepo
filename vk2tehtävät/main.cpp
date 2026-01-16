#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int max;

    cout <<"Anna maksimiarvo" << endl;
    cin >> max;

    Game peli(max);
    peli.play();

    return 0;
}
