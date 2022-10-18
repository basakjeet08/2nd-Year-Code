// Q1. WAP to demonstrate all types of inheritance.
#include <iostream>
using namespace std ;
class A{
    public :
     A(){cout << "Constructor of Class A Invoked" << endl ;}
};
class B : virtual A{
    public :
        B(){cout << "Constructor of Class B Invoked" << endl ;}
};
class C : virtual A{
    public :
        C(){cout << "Constructor of Class C Invoked" << endl ;}
};
class D : protected C{
    public :
        D(){cout << "Constructor of Class D Invoked" << endl ;}
};
class E : protected B , protected D{
    public :
        E(){cout << "Constructor of Class E Invoked" << endl ;}
};
int main(){
    E ob1 ;
    return 0 ;
}