#include <iostream>
using namespace std ;
class Number1{
    int a , b ;
    public : 
        Number1(){
            a = b = 0;
        }
        Number1(int x , int y){
            a = x ;
            b = y ;
            cout << "Parameterized Constructor Called !!" << endl;
        }
        void showData(){
            cout << "A : "<< a << " B : " << b << endl ;
        }
};
class Number2{
    int x , y ;
    public : 
        void getData(){
            cout << "Enter Data : " ;
            cin >> x >> y ;
        }
        int getter_x(){
            return x ;
        }
        int getter_y(){
            return y ;
        }
        operator Number1(){
            Number1 num(x , y);
            return num;
        }
};
int main(){
    Number2 num2 ;
    num2.getData();
    Number1 num = num2 ;
    num.showData();
    return 0 ;
}