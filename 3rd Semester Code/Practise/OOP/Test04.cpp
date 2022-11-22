#include <iostream>
using namespace std;
class Account {
    protected :
        int balance ;
    public : 
        void getData(){
            cout << "Enter the Balance : ";
            cin >> balance ;
        }
        virtual void withdrawal(){};
        virtual void deposit(){};
        void showData(){cout << "The balance : " << balance << endl ;}
};
class Saving : public Account{
    public : 
        void withdrawal(){
            int amount ;
            cout << "Enter the Amount to withdraw : " ;
            cin >> amount;
            balance -= amount;
        }
        void deposit(){
            int amount;
            cout << "Enter the Amount to deposit : " ;
            cin >> amount ;
            balance += amount ;
        }
};
class Current : public Account{
    public : 
        void withdrawal(){
            int amount ;
            cout << "Enter the Amount to withdraw : " ;
            cin >> amount;
            balance -= amount;
        }
        void deposit(){
            int amount;
            cout << "Enter the Amount to deposit : " ;
            cin >> amount ;
            balance += amount ;
        }
};
int main(){
    Saving s ;
    Current c ;
    s.getData();
    s.deposit();
    s.withdrawal();
    s.showData();

    c.getData();
    c.deposit();
    c.withdrawal();
    c.showData();

    return 0 ;
}