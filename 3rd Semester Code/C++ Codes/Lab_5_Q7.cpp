/*
Q7. Create a class which stores account number, customer name and balance. Derive two
classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
minimum balance. The ‘Current’ class stores the over-due amount. Include member
functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
[For current account overdue amount should be calculated.]
-display balance
*/

#include <iostream>
using namespace std;

class Account{
    int accNumber,balance;
    string name ;
    public : 
        void getData(){
            cout << "Enter the Name : " ;
            getline(cin , name);
            cout << "Enter Account Number : " ;
            cin >> accNumber ;
            cout << "Enter the Balance : " ;
            cin >> balance ;
        }
        void showData(){
            cout << "Name : " << name << endl ;
            cout << "Account Number : " << accNumber << endl;
            cout << "Balance : " << balance << endl ;
        }
};
class Savings : protected Account {
    int minBalance ;
    public : 
        void withdraw(){
            cout << "Enter the Amount you want to Withdraw : ";
            int withdraw ;
            cin >> withdraw ;

            if(withdraw > minBalance)
                cout << "Insuffisient Balance !" << endl ;
            else{
                balance -= withdraw;
                cout << "WithDraw Successful \n";
            }
        }
        void deposit(){
            cout << "Enter the Amount to be Deposited : ";
            int dep;
            cin >> dep ;
            balance += dep ;
        }
}   
class Current : protected Accout {
    int overdueBalance ;
    void withdraw(){
            cout << "Enter the Amount you want to Withdraw : ";
            int withdraw ;
            cin >> withdraw ;
            balance -= withdraw;
            cout << "WithDraw Successful \n";
            
    }
    void deposit(){
        cout << "Enter the Amount to be Deposited : ";
        int dep;
        cin >> dep ;
        if(deposit > overdueBalance)
            cout << "Insuffisient Balance !" << endl ;
        else{
            balance += dep ;

        }
    }
};