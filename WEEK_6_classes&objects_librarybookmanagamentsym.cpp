/*
  NAME; COLLINS MUTAHI MWANGI
  ADM: CT101/G/26624/25
  COURSE: COMPUTER SCIENCE 
  GROUP B
  YERA 2*/
#include<iostream>
using namespace std;
class Book{
  public:
   string Title,Author;
    int No_of_copies;
    void inputDetails(){
     cout << "Enter The Title of The Book:" << endl;
     cin >> Title;
     cout << "Enter the Author:" << endl;
     cin >> Author;
     cout << "Enter Number of Copies:" << endl;
     cin >> No_of_copies;}
    void  borrowBook(){
    if (No_of_copies>0)
    {No_of_copies--;
    cout << "Book borrowed successfully:" << endl;
    }
    else
    {cout << "No copies Available:" << endl;}}
    void dispayDetails(){
    cout << "Book Details" << endl;
   cout << "Title:" <<Title<< endl;
   cout << "Author:" <<Author<< endl;
  cout << "Copies Available:" << No_of_copies<<endl;
    }};
int main()
{     Book book1;
    
     book1.inputDetails();
       book1.borrowBook();
        book1.dispayDetails();
        
    
    return 0;
}