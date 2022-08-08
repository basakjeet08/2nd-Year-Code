#include <iostream>
using namespace std ;
class Interest{
    private : 
        float principal_amount,time,rate;
        float interest;
        void calShow(){
            interest = principal_amount * (1+(rate/100.0)*time);
            cout << "The Interest is : " << interest;
        }
    public :
        void getData(){
            cout << "Enter the Principal Amout : ";
            cin >> principal_amount;
            cout << "Enter the Rate of Interest : ";
            cin >> rate;
            cout << "Enter the time : ";
            cin >> time;
            calShow();
        }
};
int main(){
    Interest* in1 ;
    in1->getData();
    return 0;
}