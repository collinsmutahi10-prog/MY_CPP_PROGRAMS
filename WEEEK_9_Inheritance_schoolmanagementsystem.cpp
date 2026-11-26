#include <iostream>
using namespace std;
class person
{
public:
    string Name;
    int Age;
    void displayPerson()
    {
        cout << "Name:" << Name << endl;
        cout << "Age:" << Age << endl;
    }
};
class student : public person
{

public:
    int AdmNo;
    int Class;
    void displayStudent()
    {
        cout << "Admission No:" << AdmNo << endl;
        cout << "Class:" << Class << endl;
    }
};
int main()
{
    person p;
    p.Name = "mwangi";
    p.Age = 25;
    p.displayPerson();

    student s;
    s.Name = "mutahi";
    s.Age = 20;
    s.AdmNo = 4566;
    s.Class = 8;
    s.displayStudent();
    s.displayPerson();
    return 0;
}