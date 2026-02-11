#include "student.h"
#include <iostream>
using namespace std;
#include <string>

student::student(string n, int i)
{
    name = n;
    age = i;
}

void student::setName(string nimi)
{ name = nimi;


}


string student::getName() const
{
    return name;
}

void student::setAge(int i)
{
    age = i;
}

int student::getAge() const
{
    return age;
}

void student::printStudentInfo() const
{
    cout <<"Student "<<name<<" age "<<age<<endl;


}
