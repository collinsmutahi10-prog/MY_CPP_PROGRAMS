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
{ string Student_Name,Decision;
  int Age, Score;
  cout << "Enter Student Name:" << endl;
  cin >> Student_Name;
  cout << "Enter Score:" << endl;
  cin >> Score;
  cout << "Enter Age:" << endl;
  cin >> Age;
   if(Age >=18){if (Score >=50) cout <<"Admitted" << endl;
   else
   cout <<"Not Admitted: Low Score" <<endl;}
   else 
   cout <<"Not Admitted: Underage"<< endl;
    
    return 0;
}