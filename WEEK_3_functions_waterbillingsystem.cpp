/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2
  */#include<iostream>
using namespace std;
void getCustomerDetails(string &Name, double &No_of_unitsconsumed){
cout << "Enter Customer Name:" << endl;
cin >> Name;
cout << "Enter No of units consumed:" << endl;
cin >> No_of_unitsconsumed;}
double calculateBill(double No_of_unitsconsumed, double RatePerUnit){
return No_of_unitsconsumed*RatePerUnit;}
double applyDiscount(double discount, double No_of_unitsconsumed, double Bill){
      
    if (No_of_unitsconsumed>100)
    
     discount=Bill*0.01;
    return discount;}
    void displayBill(string Name, double No_of_unitsconsumed, double Bill, double discount, double Final_Bill){
           cout << "Customer Name: " <<Name<< endl;
              cout << "Number of units Consumed:" <<No_of_unitsconsumed<< endl;
                cout << "Bill Before Discount:" <<Bill<< endl;
                  cout << "Discount Given:" <<discount<< endl;
                   cout << "Final Bill:" <<Final_Bill<< endl;
                   }
int main()
{
    string Name;
    double No_of_unitsconsumed, Bill, discount,Final_Bill, RatePerUnit;
    getCustomerDetails(Name,No_of_unitsconsumed);
    cout << "Enter Rate per Unit:" << endl;
    cin >> RatePerUnit;
    
    Bill=calculateBill(No_of_unitsconsumed,RatePerUnit);
    discount=applyDiscount(discount,No_of_unitsconsumed,Bill);
    Final_Bill=Bill-discount;
    displayBill(Name, No_of_unitsconsumed,Bill, discount, Final_Bill);
    
    
    return 0;
}