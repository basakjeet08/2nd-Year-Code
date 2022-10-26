// 2-WAP to convert Class type to primitive data type.
#include <iostream>
using namespace std;
class Numbers{
    int a , b ;
    public :
        Numbers(int x){a = b = x ;}
        operator int(){
            cout << "Operator Function Invoked " << endl ;
            return b ;
        }
};
int main(){
    Numbers num(10);
    int x = num ;
    cout << "X : " << x << endl ;
    return 0 ;
}