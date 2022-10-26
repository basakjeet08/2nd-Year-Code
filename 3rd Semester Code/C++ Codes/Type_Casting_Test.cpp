#include <iostream>
using namespace std ;
class Numbers{
    int a , b ;
    public : 
        Numbers(){
            a = b = 0;
        }
        Numbers(int x){
            a = x ;
            b = 1 ;
            cout << "Parameterized Constructor Called !!" << endl;
        }
        void showData(){
            cout << "A : "<< a << " B : " << b << endl ;
        }
        operator int(){
            return b ;
        }
};
int main(){
    Numbers num ;
    int x = 12 ;
    num = x ;
    num.showData();

    x = num ;
    cout << "X : " << x ;
    return 0 ;
}