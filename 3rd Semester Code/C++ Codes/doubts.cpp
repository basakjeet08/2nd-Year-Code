#include <iostream>
using namespace std ;

class Numbers{
    private : 
        int num ;
    public : 
        Numbers(){ // Default Const
            cout << " Constructor Invoked !! " << endl ;
        }
        Numbers(int a ){ // parameterized Const 
            num = a ;
            cout << "Num : " << num << endl ;
            cout << "COnstructor Invoked !! \n";
        }
        Numbers(int a,int b,int c ){ // parameterized Const 
            num = c ;
            cout << "Num : " << num << endl ;
            cout << "COnstructor Invoked !! \n";
        }
        Numbers(Numbers &ob){ // copy constructor
            num = ob.num;
            cout << "Num : " << num << endl ;
            cout << "Consasda sdasd nstructor Invoked !! \n";
        }
        ~Numbers(){
            cout<<"Destro Called !!\n";
        }
};
int main(){
    //Numbers n1,n2,n3,n4,n5,n6,n7,n8;
    Numbers n9(2,3,10);
    Numbers n10(25);
    Numbers n11(n10) ;
    return 0 ;
}