#include <iostream>
#include <string>

using namespace std;
class student
{
private:
    string Name;
    int AdmNo;
    double FeeBalance;

public:
    void inputStudentDetails()
    {
        cout << "Enter student name: " << endl;
        cin >> Name;
        cout << "Enter admission number: " << endl;
        cin >> AdmNo;
        cout << "Enter fee balance: " << endl;
        cin >> FeeBalance;
    }

public:
    void makepayment()
    {
        double paymentAmount;

        if (FeeBalance > 0)
        {
            cout << "Enter payment amount: " << endl;
            cin >> paymentAmount;
            if (paymentAmount > 0 && paymentAmount <= FeeBalance)
            {
                FeeBalance -= paymentAmount;

                cout << "Payment of  Ksh:" << paymentAmount << " made successfully." << endl;

                if (paymentAmount < FeeBalance)

                    FeeBalance = FeeBalance - paymentAmount;
                cout << "Remaining fee balance: " << FeeBalance << endl;
            }

            else
            {
                cout << "Invalid payment amount." << endl;
            }
        }
        else
        {
            cout << "No fee balance to pay." << endl;
        }
    }

public:
    void displayStatus()
    {
        cout << "Student Name: " << Name << endl;
        cout << "Admission Number: " << AdmNo << endl;
        cout << "Fee Balance: " << FeeBalance << endl;
    }
    setFeeBalance()
    {
        return FeeBalance;
    }
    getFeeBalance()
    {
        return FeeBalance;
    }
};
int main()
{
    student s;
    s.inputStudentDetails();
    s.displayStatus();
    s.makepayment();

    return 0;
}