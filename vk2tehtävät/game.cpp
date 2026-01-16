#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

Game::Game(int max)
{
    cout <<"GAME CONSTRUCTOR: object initialized with " << max << " as maximum value" << endl;

    if (max < 1) {
        cerr <<"Virhe, maksimiarvo pitää olla vähintään 1." <<endl;
        maxNumber = 1;

    } else {
        maxNumber = max;
    }
    srand(time(nullptr));
    randomNumber = rand() % maxNumber +1;
    numOfGuesses = 0;
}


Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
void Game::play()
{
    while (true) {
        cout <<"Arvaa arvottu luku 1 - " << maxNumber << ": ";
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            printGameResult();
            break;
              } else if (playerGuess > randomNumber) {
            cout <<"Arvauksesi oli liian suuri" << endl;
        } else if (playerGuess < randomNumber) {
            cout <<"Arvauksesi oli liian pieni" << endl;

        }
    }

}
void Game::printGameResult()
{
    cout << "Oikea luku oli: " << randomNumber << endl;
    cout <<"Arvasit " << numOfGuesses << " kertaa" << endl;
}
