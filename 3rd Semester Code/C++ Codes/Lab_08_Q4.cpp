//iv. WAP to demonstrate use of pure virtual function and abstract base class.
#include <iostream>
using namespace std;
class A{
    protected :
        int num ;
    public :
        virtual void showData() = 0;
};
class B : public A {
    public :
        B(int n){num = n ;}
        void showData(){cout << "Number : " << num ;}
};
int main(){
    A* ptr ;
    B ob(500);
    ptr = &ob ;
    ptr->showData();
    return 0 ;
}