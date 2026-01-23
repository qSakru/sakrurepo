#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name)
{
    chefName = name;
    cout <<"Chef " << chefName << " constructor" << endl;
}


Chef::~Chef()
{
  cout <<"Chef "<< chefName << "destructor" << endl;
}

int Chef::makeSalad(int numberOfItems)
{
    int numberOfPortions = numberOfItems / 5;
    cout <<"Chef " << chefName <<" with "
         <<numberOfItems
         <<" items can make salad "
         << numberOfPortions << " portions " <<endl;
    return numberOfPortions;
}

int Chef::makeSoup(int numberOfItems)
{
    int numberOfPortions = numberOfItems / 3;
    cout <<"Chef " << chefName
         <<" with "
         <<numberOfItems
         <<" items can make soup "
         <<numberOfPortions <<" portions "<<endl;
    return numberOfPortions;
}

string Chef::getName()
{

    return chefName;
}

void Chef::setName(string name)
{
    chefName = name;
}


ItalianChef::ItalianChef(string name) : Chef(name)
{
    password ="pizza";
    flour = 0;
    water = 0;

    cout <<"Italian chef "<< chefName << "constructor" <<endl;
}

ItalianChef::~ItalianChef()
{
    cout <<"Italian chef " << chefName <<"destructor"<<endl;
}




bool ItalianChef::askSecret(string pwd, int f, int w)
{
    if (pwd == password) {
        cout <<"Password ok!"<<endl;
        flour = f;
        water = w;
        makepizza();
        return true;
    }
    return false;
}

int ItalianChef::makepizza()
{
    int pizzasFromFlour = flour / 5;
    int pizzasFromWater = water / 5;
    int pizzas =std::min(pizzasFromFlour, pizzasFromWater);

    cout << "Italian Chef " << chefName
         <<"with " << flour
         <<" flour and " << water
         <<" water can make "
         <<pizzas <<" pizzas ";
    return pizzas;
}
