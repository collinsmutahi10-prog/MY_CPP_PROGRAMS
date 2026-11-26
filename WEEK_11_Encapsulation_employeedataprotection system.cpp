#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string EmployeeName;
    int EmplyeeID;
    int BasicSalary;
    double NetSalary;

public:
    void setEmployeeDetails(string Name, int ID, int Salary)
    {

        EmployeeName = Name;
        EmplyeeID = ID;
        BasicSalary = Salary;
    }

public:
    double calculateSalary(double allowance)
    {

        NetSalary = BasicSalary + (0.10 * allowance);
        return NetSalary;
    }

public:
    void displayEmployeeDetails()
    {
        cout << "Employee Name: " << EmployeeName << endl;
        cout << "Employee ID: " << EmplyeeID << endl;
        cout << "Basic Salary: " << BasicSalary << endl;
        cout << "Net Salary: " << NetSalary << endl;
    }
};

int main()
{
    // int NetSalary;
    Employee emp;
    emp.setEmployeeDetails("james mwangi", 6789, 10000);
    emp.calculateSalary(2000);
    emp.displayEmployeeDetails();
    return 0;
}