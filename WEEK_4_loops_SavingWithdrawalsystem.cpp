/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2*/
  #include<iostream>
using namespace std;

int main()
{    double Withdrawal_Amount, Balance;

       cout << "Enter Account balance:" << endl;
        cin>>Balance;
      while(Balance>1){
           cout << "Enter Withdrawal Amount:" << endl;
            cin >>Withdrawal_Amount;
            if(Withdrawal_Amount<=0) {cout<<"Invalid Amount:"<<endl; 
              continue;}
               if(Withdrawal_Amount>Balance){
                cout << "Insufficient bal:" << endl;
                 break;}
                 Balance=Balance-Withdrawal_Amount;
                 cout << "Withdrawal successfull:" << endl;
                 cout << "Remaining Bal:" << Balance<<endl;}
      cout << "Transaction Complete!" << endl;
    
    return 0;
}