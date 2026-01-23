#include "chef.h"
#include "chef.cpp"
using namespace std;

#include <iostream>


int main()
{
    Chef chef1("Pablo ");
    chef1.makeSalad(11);
    chef1.makeSoup(14);

    ItalianChef chef2("Mark ");
    chef2.makeSalad(9);
    string password;
    cout <<"Give a password: "<<endl;
    cin>> password;

    bool ok = chef2.askSecret(password, 12, 12);

    if (!ok) {
        cout << "Password wrong!" << endl;
    }

    cout <<endl;

    return 0;
}
