#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary; // data hiding

public:
    // properties/attributes
    string firstName;
    string subject;
    string dept;

    // member funcion / methods
    void changeSub(string newSubject)
    {
        subject = newSubject;
    }

    // Salary ko humlog indirectly public function ke through access karenge.
    // setter (setter function ka kaam hota hay private value ko set karna)
    void setSalary(double s)
    {
        salary = s;
    }
    // getter (getter function ka kaam hota hay private value ko display karwana)
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.firstName = "Bishwajit";
    t1.subject = "Dsa";
    t1.setSalary(50000);

    cout << t1.firstName << endl;
    cout << t1.getSalary() << endl;
    return 0;
}