/*
1. WAP to overload following operators for class distance, which stores the distance in feet
and inches.
a) Binary + to
-add two objects (D3=D1+D2)
-Add an object to an integer, where the integer should be added to the
inches value ( D2=4+D1)
*/
#include <iostream>
using namespace std ;
class Distance{
    int feet , inches;
    public : 
    void getData(){
        cout << "Enter Feet and Inches : ";
        cin >> feet >> inches;
    }
    void showData(){
        cout << "Feet : " << feet << " Inches : " << inches << endl;
    }
    Distance operator+(Distance ob){
        Distance temp ;
        temp.feet = feet + ob.feet;
        temp.inches = inches + ob.inches ;
        return temp ;
    }
    Distance operator+(int i){
        this->inches += i;
        return *this;
    }
};
int main(){
    Distance ob1 , ob2 , ob3; 
    ob1.getData();
    ob2.getData();
    ob3 = ob1 + ob2 ;
    ob3.showData();
    int x ;
    cout << "Enter the Value to be Added : " ;
    cin >> x ;
    ob3 = ob3 + x ;
    ob3.showData();
    return 0 ;
}