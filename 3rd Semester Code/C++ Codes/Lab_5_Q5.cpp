/*
Q5. Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.
Include the relevant data members and functions in all the classes. Find the area of each
shape and display it.

*/
#include <iostream>
using namespace std ;
class shape {
    protected :
        double area;
    public :
        showData(){
            cout << "Area : " << area << endl;
        }
};
class rectangle : public shape {
    int length , breadth ;
    public : 
        getData(){
            cout << "Rectangle :--" << endl;
            cout << "Enter the Length : ";
            cin >> length ;
            cout << "Enter the Breadth : " ;
            cin >> breadth;

            area = length*breadth;
        }
};
class circle : public shape {
    double radius ;
    public : 
        getData(){
            cout << "Circle :---" << endl;
            cout << "Enter the Radius : ";
            cin >> radius;

            area = 3.14*radius*radius;
        }
};
class triangle : public shape {
    int height , base ;
    public : 
        getData(){
            cout << "Triangle :---" << endl ; 
            cout << "Enter the Height : ";
            cin >> height ;
            cout << "Enter the Base : " ;
            cin >> base;

            area = (1/2.0)*base*height;
        }   
};
int main(){
    triangle t1 ;
    rectangle r1 ;
    circle c1 ;
    shape s;
    t1.getData();
    t1.showData();
    r1.getData();
    r1.showData();
    c1.getData();
    c1.showData();
    return 0 ;
}