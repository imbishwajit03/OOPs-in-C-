#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string firstName;
    string subject;
    string dept;
    double salary;
};

int main()
{
    Teacher t1;
    t1.firstName="Bishwajit";
    t1.subject = "Dsa";

    return 0;
}