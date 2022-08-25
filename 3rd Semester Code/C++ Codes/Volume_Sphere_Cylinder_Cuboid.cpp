#include <iostream>
using namespace std;
class Sphere{
    private :
        float radius ;
    public : 
        void getData(){
            cout << "Enter the Radius of Sphere : ";
            cin >> radius;
        }
        friend void Volume(Sphere);
};
class Cylinder{
    private :
        float radius,height;
    public : 
        void getData(){
            cout << "Enter the Radius & Height of Cylinder : ";
            cin >> radius >> height ;
        }
        friend void Volume(Cylinder);
};
class Cuboid{
    private :
        float length,breadth,height;
    public : 
        void getData(){
            cout << "Enter the Lenght , Breadth & height of Cuboid : ";
            cin >> length >> breadth >> height ;
        }
        friend void Volume(Cuboid);
};
int main(){
    Sphere s;
    Cylinder c;
    Cuboid cb;
    s.getData();
    c.getData();
    cb.getData();
    Volume(s);
    Volume(c);
    Volume(cb);
    return 0 ;
}
void Volume(Sphere s){
    float volume = (4.0/3)*3.14*s.radius*s.radius*s.radius;
    cout << "The Volume of Sphere : " << volume << endl;
}
void Volume(Cylinder c){
    float volume = 3.14*c.radius*c.radius*c.height;
    cout << "The Volume of Cylinder : " << volume << endl;
}
void Volume(Cuboid cb){
    float volume = cb.length*cb.breadth*cb.height;
    cout << "The Volume of Cuboid : " << volume << endl;
}