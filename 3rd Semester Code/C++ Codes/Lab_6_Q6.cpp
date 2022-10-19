/*
WAP to add two objects of distance class. Overload the operator ‘>’ to compare two
objects and return the object with larger time value and display it. Overload the ‘==’
operator to compare and display whether two given objects contain same distance
value
*/
#include <iostream>
using namespace std ;
class Distance{
    int dis ;
    public : 
        void getData(){
            cout << "Distance : ";
            cin >> dis ;
        }
        void showData(){cout << "Distance : " << dis << endl ;}
        Distance operator>(Distance ob){
            if(dis > ob.dis)
                return *this ;
            return ob;
        }
        bool operator==(Distance ob){
            return (dis == ob.dis);
        }
};
int main(){
    Distance d1, d2 ,d3 ;
    d1.getData();
    d2.getData();
    if(d1 == d2)
        cout << "Equal " << endl ;
    d3 = d1 > d2 ;
    d3.showData();
    return 0 ;
}