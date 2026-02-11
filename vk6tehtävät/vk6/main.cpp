#include <iostream>
#include <vector>
#include <student.h>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            string name;
            int age;

            cin.ignore();

            cout<<"Give student's name: ";

            getline(cin, name);

            cout<<"Give student's age: ";
            cin>>age;

            studentList.emplace_back(name, age);

            cout<<"\nStudent added.\n"<<endl;

            break;

        }
        case 1:
        {

            for (const auto &s: studentList) {
                s.printStudentInfo();
            }

            break;
        }
        case 2: {

            sort(studentList.begin(), studentList.end(), [] (const student &a, const student &b)
                 {
                return a.getName() < b.getName();
            });

            for (const auto &s: studentList) {
                s.printStudentInfo();
            }

            break;
        }
        case 3: {

            sort(studentList.begin(), studentList.end(), [] (const student &a, const student &b)
                 {
                return a.getAge() < b.getAge();
            });

            for (const auto &s: studentList) {
                s.printStudentInfo();
            }

            break;
        }
        case 4: {
            string searchName;

            cout<<"Enter a name to search: ";
            cin.ignore();
            getline(cin, searchName);

            auto it = find_if(studentList.begin(), studentList.end(), [&searchName] (const student &s) {
                return s.getName() == searchName;
            } );

            if (it != studentList.end()) {
                cout <<"Student found"<<endl;
                it->printStudentInfo();
            } else {
                cout <<"Student not found"<<endl;
            }


            break;
        }


        default:

        cout<< "Wrong selection, stopping..."<<endl;
        break;

        }
    } while(selection < 5);

return 0;
}
