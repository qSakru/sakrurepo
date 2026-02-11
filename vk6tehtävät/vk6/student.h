#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class student
{
public:
    student(std::string n, int i);
    void setAge(int i);
    void setName(std::string nimi);
    std::string getName() const;
    int getAge() const;
    void printStudentInfo() const;

private:
    std::string name;
    int age;

};

#endif // STUDENT_H
