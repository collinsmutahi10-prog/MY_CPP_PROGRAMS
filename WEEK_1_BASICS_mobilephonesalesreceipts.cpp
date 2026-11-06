/* NAME: COLLINS MUTAHI MWANGI
   ADM: CT101/G/26624/25
   COURSE: COMPUTER SCIENCE
   GROUP B
   YEAR 2
   */
  #include<iostream>
using namespace std;

int main()
{  string customerName, model;
   double price, Total_Sales_Amount;
    int Quantity;
    cout << "Enter You Name:" << endl;
    cin >> customerName;
    cout << "Enter Phone Model:" << endl;
    cin >> model;
    cout << "Enter Quantity:" << endl;
    cin >> Quantity;
          cout << "Enter Price Per phone:" << endl;
              cin >>price;
                 Total_Sales_Amount=Quantity*price;
                   cout << "----------------------------" << endl;
                     cout << "Sales Receipts" << endl;
              cout << "----------------------------" << endl;
            cout << "Customer Name:" << customerName<<endl;
          cout << "Phone Model:" <<model<< endl;
         cout << "Quantity purchased:" <<Quantity<<endl;
            cout << "Price Per Phone;" <<price<< endl;
                cout << "----------------------------" << endl;
                  cout << "TOTAL SALES: Ksh " <<Total_Sales_Amount<< endl;
                    cout << "----------------------------" << endl;
    return 0;
}