#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum);

int game(int maxnum) {
    if (maxnum < 1) {
        cerr <<"Virhe, maxnum pitää olla vähintään 1." << endl;
        return 0;
    }



    cout << "Arvotaan satunnainen luku 1 - 20 välillä" << endl;



    int oikeaLuku = rand() % maxnum + 1;
    int arvaus = 0;
    int yritykset = 0;

    while (true) {

        cout << "Arvaa arvottu luku 1-20." << endl;
        cin >> arvaus;
        yritykset++;

        if (arvaus == oikeaLuku) {
            cout <<"Oikein, luku oli "<< oikeaLuku << endl;
            return yritykset;

        }
        else if (arvaus > oikeaLuku) {
            cout << "Arvauksesi oli liian suuri" << endl;
        } else if (arvaus < oikeaLuku) {
            cout << "Arvauksesi oli liian pieni" << endl;
        }

    }
}



int main()
{
    srand(time(nullptr));
    int maxnum = 20;
    int arvaukset = game(maxnum);
    cout << "Arvauksia oli: " << arvaukset << endl;


    return 0;
}
