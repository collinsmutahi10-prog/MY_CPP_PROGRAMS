/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2
  */
#include<iostream>
using namespace std;
void getEmployeedetails(string &Name, double &basic_salary, int &overtimeHrs){
 cout << "Enter Employee Name:" << endl;
 cin >>Name;
 cout << "Enter Basic Salary:" << endl;
 cin >>basic_salary;
 cout << "Enter overtime Hour:" << endl;
 cin >> overtimeHrs;
 }
 double calculateOvertimePay(double Rateperhour, int overtimeHrs)
 {
 return Rateperhour*overtimeHrs;
 }
 
 double  calculateNetSalary(double basic_salary, int OvertimePay){
  return basic_salary+OvertimePay;}
 
 void displayPayslip(string Name,double basic_salary,int overtimeHrs,
        double Rateperhour, double OvertimePay, double NetSalary ){
  cout << "Pay slip" << endl;
  cout << "Name:" <<Name<< endl;
  cout << "Basic salary=" <<basic_salary<< endl;
  cout << "Over time hours=" <<overtimeHrs<< endl;
    cout << "Rate per Hour=" <<Rateperhour<< endl;
    cout << "Over time Pay=" <<OvertimePay<< endl;
     cout << "Net Salary=" <<NetSalary<< endl;}
int main()
{ string Name;
   double basic_salary,Rateperhour,OvertimePay, NetSalary; 
    int overtimeHrs;
    getEmployeedetails(Name, basic_salary, overtimeHrs);
    cout << "Enter rate per Hour:" << endl;
    cin >> Rateperhour;
     OvertimePay=calculateOvertimePay(Rateperhour, overtimeHrs);
      
     NetSalary=calculateNetSalary(basic_salary,OvertimePay);
     
     displayPayslip(Name,basic_salary,overtimeHrs,Rateperhour,OvertimePay,NetSalary);
    return 0;
}