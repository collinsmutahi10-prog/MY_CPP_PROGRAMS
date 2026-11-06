/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2*/
  #include<iostream>
   #include<string>
using namespace std;

int main()
{   string Username,password;
     string correctUsername="collins";
     string correctpassword="98765";
     do{
     cout << "Enter Username:" << endl;
     cin >> Username;
      cout << "Enter Password:" << endl;
      cin>>password;
       if(Username==correctUsername && password==correctpassword)
         cout << "Access Granted:" << endl;
         else cout << "Incorrect logins, TRY AGAIN!" << endl;
         }
         while
         (Username!=correctUsername || password!=correctpassword);
         
    return 0;
}