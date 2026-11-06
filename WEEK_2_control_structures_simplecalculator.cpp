/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2
  */
  #include<iostream>
using namespace std;

int main()
{     double Num1, Num2, Result;
     char op;
       cout << "Enter First Number:" << endl;
       cin >> Num1;
       cout << "Enter An Operator(+, -, *, /):" << endl;
       cin>>op;
       cout << "Enter Second Number:" << endl;
        cin >>Num2;
        switch(op){
        case '+':
           Result=Num1 + Num2;
           cout << "Results=" << Result<<endl;
           break;
        case '_':
        Result=Num1 - Num2;
        cout << "Results=" <<Result<< endl;
        break;
        case '*':
        Result=Num1 * Num2;
        cout << "Results=" <<Result<< endl;
        break;
        case '/':
        Result= Num1 / Num2;
        if (Num2=0) cout << "Invalid Results" <<Result<< endl;
        else
         cout << "Results=" <<Result<< endl;
         break;
         default:
         cout << "Invalid operator" << endl;}
           cout << "Answer=" <<Result<< endl;
    
    return 0;
}