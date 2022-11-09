/**
 * i. Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area
 * of each shape and display it, using virtual function.
*/
#include <iostream>
using namespace std;
class Shape{
    protected : 
        double area ;
    public : 
        virtual void getData() = 0 ;
        virtual void calculateArea() = 0 ;
        void showData(){
            cout << "Area : " << area << endl; 
        }
};
class Circle : public Shape {
    double radius ;
    void getData(){
        cout << "Enter the Radius : " ;
        cin >> radius ;
        calculateArea();
    }
    void calculateArea(){
        area = 3.14*radius*radius ;
        showData();
    }
};
class Square : public Shape {
    double side ;
    void getData(){
        cout << "Enter the Side : " ;
        cin >> side ;
        calculateArea();
    }
    void calculateArea(){
        area = side * side ;
        showData();
    }
};
class Triangle : public Shape {
    double height , base ;
    void getData(){
        cout << "Enter the height and base : " ;
        cin >> height >> base ;
        calculateArea();
    }
    void calculateArea(){
        area = (1/2.0)*base*height;
        showData();
    }
};
int main(){
    Shape* ptr ;
    Circle c1 ;
    Square s1 ;
    Triangle t1;
    ptr = &c1;
    ptr->getData();
    ptr = &s1 ;
    ptr->getData();
    ptr = &t1 ;
    ptr->getData();
}