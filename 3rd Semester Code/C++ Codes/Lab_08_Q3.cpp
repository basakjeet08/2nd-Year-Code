// iii. Create a class which stores account number, customer name and balance. Derive two
// classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
// minimum balance. The ‘Current’ class stores the over-due amount. Include member
// functions in the appropriate class for
// -deposit money
// -withdraw [For saving account minimum balance should be checked.]
// [For current account overdue amount should be calculated.]
// -display balance
// Display data from each class using virtual function.
#include <iostream>
using namespace std;
class Account {
    protected : 
        int accNumber , balance ;
        string name ;
    public : 
        void getData(){
            cout << "Enter the Account Number : " ;
            cin >> accNumber ;
            cout << "Enter the Name : " ;
            cin >> name ;
            cout << "Enter the Balance : " ;
            cin >> balance ;
        }
        virtual void depositMoney() = 0 ;
        virtual void withdrawMoney() = 0 ;
        void showData(){
            cout << "Account Number : " << accNumber << endl ;
            cout << "Name : " << name << endl ;
            cout << "Balance : " << balance << endl ;
        }
};
class Savings : public Account { 
    int minBalance ;
    public : 
        Savings(int min){
            minBalance = min ;
        }
        void depositMoney(){
            getData();
            cout << "Enter the Amount to be Deposited : ";
            int deposit ;
            cin >> deposit ;
            balance+= deposit ;
            withdrawMoney();
            showData();
        }
        void withdrawMoney(){
            cout << "Enter the Amount to be Withdrawn : " ;
            int withdraw ;
            cin >> withdraw ;
            if(withdraw < minBalance)
                balance-= withdraw ;
            else
                cout << "Not Possible !!" << endl ;
        }
};
class Current : public Account { 
    int overdueBalance ;
    public : 
        Current(int over){
            overdueBalance = over ;
        }
        void depositMoney(){
            getData();
            cout << "Enter the Amount to be Deposited : ";
            int deposit ;
            cin >> deposit ;
            if(deposit > overdueBalance)
                balance+= deposit ;
            else    
                cout << "Not Possible " << endl ;

            withdrawMoney();
            showData();
        }
        void withdrawMoney(){
            cout << "Enter the Amount to be Withdrawn : " ;
            int withdraw ;
            cin >> withdraw ;
            balance-= withdraw ;
        }
};
int main(){
    Account* ptr ;
    Savings s(500);
    Current c(500);

    ptr = &s;
    ptr->depositMoney();
    ptr = &c ;
    ptr->depositMoney();
}