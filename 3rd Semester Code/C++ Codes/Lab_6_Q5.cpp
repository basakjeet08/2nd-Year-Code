#include <iostream>
using namespace std ;
class Time{
    int min , sec ;
    public : 
        void getData(){
            cout << "Enter Min and Sec : ";
            cin >> min >> sec ;
        }
        bool operator ==(Time ob){
                return ((min == ob.min) && (sec == ob.sec)) ;
        }
};
int main(){
    Time t1,t2;
    t1.getData();
    t2.getData();
    if(t1 == t2)
        cout << "Equal" << endl ;
    else
        cout << "Not Equal" << endl;

    return 0 ;
}