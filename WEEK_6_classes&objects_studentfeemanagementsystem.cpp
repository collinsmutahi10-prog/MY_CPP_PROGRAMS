/*NAME: COLLINS MUTAHI MWANGI
   ADM: CT101/G/26624/25
   COURSE: COMPUTER SCIENCE 
   GROUP B
   YEAR 2
   */
#include<iostream>
using namespace std;
class Student{
 public:
  string Name;
  int AdmNo;
  double Fee_Balance;
  void inputDetails(){
   cout << "Enter Student Name:" << endl;
   cin >> Name;
   cout << "Enter Admission Number:" << endl;
   cin >> AdmNo;
   cout << "Enter Fee balance:" << endl;
   cin >> Fee_Balance;}
   
   
   void makePayment(){
   double amount;
   if(Fee_Balance>0){
   cout << "Enter Amount To pay:" << endl;
      cin >> amount;
      if(amount>0 && amount<=Fee_Balance){
      Fee_Balance-=amount;
      cout << "Payment Successful!" << endl;}
      else 
      {cout << "Invalid Payment!" << endl;}
      }
      else
        { cout << "Cleared!" << endl;}
  cout << "==================================" << endl;}
        
        
        
      void displayStatus(){
      cout << "==================================" << endl;
      cout << "Student Details" << endl;
        cout << "==================================" << endl;
      cout << "Student Name:" <<Name<< endl;
      cout << "Admission Number:" <<AdmNo<< endl;
      cout << "Remaining Fee balance:" <<Fee_Balance<< endl;
      if(Fee_Balance==0){cout << "Cleared!" << endl;
      }
      else
      {cout << "Have Arrears!" << endl;
      }
  cout << "==================================" << endl;}};
   
int main()
{
    Student student1;
         student1.inputDetails();
         student1.makePayment();
         student1.displayStatus();
    return 0;
}