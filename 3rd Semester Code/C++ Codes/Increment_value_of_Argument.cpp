#include <iostream>
using namespace std ;
class Number{
    public : 
        void getData(){
            int n;
            cout << "Number : ";
            cin >> n ;
            Increase(&n);
        }
        void Increase(int* n){
            *n = *n + 1;
            cout << "Increment : " << *n;
        }
};
int main(){
    Number num ;
    num.getData();
    return 0;
}