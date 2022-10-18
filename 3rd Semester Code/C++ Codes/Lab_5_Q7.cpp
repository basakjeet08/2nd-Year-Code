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
    protected : 
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
            getchar();
        }
        void showData(){
            cout << "Name : " << name << endl ;
            cout << "Account Number : " << accNumber << endl;
            cout << "Balance : " << balance << endl ;
        }
        void withdraw(int withdraw){
            if(withdraw > balance){
                cout << "Insufficient Balance!! Your Balance is : " << balance << endl ;
                return ;
            }
            balance -= withdraw;
            cout << "WithDraw Successful \n";
        }
        void deposit(int deposit){
            cin >> deposit ;
            balance += deposit ;
        }
};
class Savings : public Account {
    int minBalance ;
    public : 
        Savings(int minBalance){this->minBalance = minBalance;}
        void withdrawSavings(){
            cout << "Enter the Amount you want to Withdraw : ";
            int draw ;
            cin >> draw ;
            if(draw > minBalance)
                cout << "Insuffisient Balance !" << endl ;
            else
                withdraw(draw);
        }
        void depositSavings(){
            cout << "Enter the Amount to be Deposited : ";
            int dep;
            deposit(dep);
        }
};   
class Current : public Account{
    int overdueBalance ;
    public :
    Current(int overdueBalance){this->overdueBalance = overdueBalance;}
    void withdrawCurrent(){
            cout << "Enter the Amount you want to Withdraw : ";
            int draw ;
            cin >> draw ;
            withdraw(draw);            
    }
    void depositCurrent(){
        cout << "Enter the Amount to be Deposited : ";
        int dep;
        cin >> dep ;
        if(dep > overdueBalance)
            cout << "Insuffisient Balance !" << endl ;
        else
            deposit(dep);
    }
};
int main(){
    Current ob1(500);
    Savings ob2(500);

    ob1.getData();
    ob2.getData();
    ob1.depositCurrent();
    ob1.withdrawCurrent();
    ob2.withdrawSavings();
    ob2.depositSavings();

    ob1.showData();
    ob2.showData();
    return 0 ;
}