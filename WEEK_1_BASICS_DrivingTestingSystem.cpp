/* NAME: COLLINS MUTAHI MWANGI
   ADM: CT101/G/26624/25
    COURSE: COMPUTER SCIENCE 
    GROUP B
    YEAR 2
*/
#include<iostream>
using namespace std;

int main()
{  string Student_Name, Testresults;
    int TheoryMarks,Practicalmarks;
    double AvarageScore;
    cout << "Enter Student Name:" << endl;
    cin >> Student_Name;
    cout << "Enter Theory Marks:" << endl;
    cin >> TheoryMarks;
    cout << "Enter Practical Marks:" << endl;
    cin>>Practicalmarks;
    AvarageScore=(TheoryMarks+Practicalmarks)/2;
    if(AvarageScore>=50){
    Testresults="Pass";}
    else {Testresults="Fail";}
    cout << "===========================" << endl;
    cout << "Student Results" << endl; 
    cout << "===========================" << endl;
     cout << "Student Name:" <<Student_Name<< endl;
      cout << "Theory Marks:" <<TheoryMarks<< endl;
        cout << "Practical Marks: " <<Practicalmarks<< endl;  
        cout << "Avarage Score:" <<AvarageScore<< endl;
       cout << "===========================" << endl;
        cout << "Test Results: " <<Testresults<< endl;
       cout << "===========================" << endl;
    return 0;
}