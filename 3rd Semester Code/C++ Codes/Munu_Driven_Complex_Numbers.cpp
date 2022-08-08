#include <iostream>
#include <cmath>
using namespace std;
class Complex{
    private:
    int real,img;
    public:
    void input(){
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>img;
    }
    void calAdd(Complex num1, Complex num2){
        real = num1.real + num2.real;
        img = num1.img + num2.img;
    }
    void calSub(Complex num1, Complex num2){
        real = num1.real - num2.real;
        img = num1.img -num2.img;
    }
    void display(){
        if (img >= 0)
            cout<<real<<" + i"<<img;
        else
            cout<<real<<" - i"<<-img;
    }
};
int main(){
    Complex num1, num2, calculations;
    cout<<"For 1st number:\n";
    num1.input();
    cout<<"\nFor 2nd number: \n";
    num2.input();
    int choice;
    cout << "1. Add \n";
    cout << "2. Substract \n";
    cout << "Enter Your Choice : ";
    cin >> choice;
    switch (choice){
        case 1 : 
            calculations.calAdd(num1,num2);
            calculations.display();
            break;
        case 2 :
            calculations.calSub(num1,num2);
            calculations.display();
            break;
        default : 
            cout << "Wrong Choice !!\n";
    }
}