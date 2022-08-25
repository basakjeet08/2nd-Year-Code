#include <iostream>
using namespace std ;
class Circle{
    private :
        float radius;
    public : 
        void getData(){
            cout << "Enter the Radius of Circle : ";
            cin >> radius;
        }
        friend void Area(Circle); 
};
class Rectangle{
    private :
        int length,breadth;
    public : 
        void getData(){
            cout << "Enter the length & breadth of Rectangle : ";
            cin >> length >> breadth;
        }
        friend void Area(Rectangle); 
};
class Triangle{
    private :
        int base,height;
    public : 
        void getData(){
            cout << "Enter the Height & base of Triangle : ";
            cin >> height >> base;
        }
        friend void Area(Triangle); 
};
int main(){
    Circle c;
    Rectangle r;
    Triangle t;
    c.getData();
    r.getData();
    t.getData();
    Area(c);
    Area(r);
    Area(t);
    return 0 ;
}
void Area(Circle c){
    float area = 3.14*c.radius*c.radius;
    cout << "The area of Circle : " << area << endl;
}
void Area(Rectangle r){
    float area = r.length*r.breadth;
    cout << "The area of Rectangle : " << area << endl;
}
void Area(Triangle t){
    float area = (1.0/2)*t.base*t.height;
    cout << "The area of Triangle : " << area << endl;
}