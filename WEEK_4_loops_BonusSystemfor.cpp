/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2*/
  #include<iostream>
using namespace std;

int main()
{
     string Name;
     double BasicSalary,Bonus,TotalSalary;
    cout << "ENTER EMPLOYEES DETAILS:" << endl;
     for(int i=1; i<=5; i++){
     cout << "Employee\n" <<i<< endl;
     cout << "Name:" << endl;
       cin>>Name;
       cout << "Basic Salary:" << endl;
        cin >>BasicSalary;
          Bonus=BasicSalary*0.10;
          TotalSalary=BasicSalary+Bonus;
           cout << "Employee Report" << endl;
           cout << "Name:" <<Name<< endl;
           cout << "Basic Salary:" <<BasicSalary<< endl;
             cout << "Bonus" <<Bonus<< endl;
             cout << "Total Salary" <<TotalSalary<< endl;
}
}