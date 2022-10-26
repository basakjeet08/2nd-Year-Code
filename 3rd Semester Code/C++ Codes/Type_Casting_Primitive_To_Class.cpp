// 1- WAP to convert primitive data type to class type.
#include <iostream>
using namespace std;
class Numbers{
    int a , b ;
    public :
        Numbers(int x){
            a = b = x ;
            cout << "Parameterized Constructor Invoked" << endl ;
        }
        void showData(){
            cout << "A : "<< a << " B : " << b << endl ;
        }
};
int main(){
    int x = 12 ;
    Numbers num = x ;
    num.showData();
    return 0 ;
}