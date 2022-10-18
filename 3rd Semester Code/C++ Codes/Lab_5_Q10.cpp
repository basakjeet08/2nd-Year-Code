/**
 * WAP to demonstrate the order of call of constructors and destructors in case of virtual
 * base class .
 */
#include <iostream>
using namespace std ;
class A{
    public : 
        A(){cout << "Constructor invoked in A " << endl ;}
        ~A(){cout << "Destructor in Class A " << endl ;}
};
class B {
    public : 
        B(){cout << "Constructor invoked in B " << endl ;}
        ~B(){cout << "Destructor in Class B " << endl ;}
};
class C : protected B , virtual A{
    public : 
        C(): B() , A(){cout << "Constructor invoked in C " << endl ;}
        ~C(){cout << "Destructor in Class C " << endl ;}
};
int main(){
    C ob1 ;
    return 0 ;
}