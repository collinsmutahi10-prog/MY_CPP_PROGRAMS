/* NAME: COLLINS MUTAHI MWANGI
   ADM: CT101/G/26624/25
    COURSE: COMPUTER SCIENCE 
    GROUP B
    YEAR 2
*/
#include<iostream>
using namespace std;

int main()
{
    string student_name,Grade;
    float marks;
    cout << "Enter Student Name:" << endl;
    cin >> student_name;
    cout << "Enter Marks:" << endl;
    cin >> marks;
    if ((marks>0) || (marks<=100))
    
    if (marks>=70){Grade="A";}
    else if (marks>=60){Grade="B";}
   else if (marks>=50) {Grade="C";}
   else if (marks>=40){Grade="D";}
    else{Grade="E";}
    cout << "Grade:" <<Grade<< endl;
   cout << "STUDENT RESULTS REPORT" << endl;
   cout << "================================" << endl;
   cout << "Student Name:"<<student_name << endl;
   cout << "Marks:"<<marks << endl;
   cout << "Grade:" <<Grade<< endl;
   cout << "================================" << endl;
   
    return 0;
}