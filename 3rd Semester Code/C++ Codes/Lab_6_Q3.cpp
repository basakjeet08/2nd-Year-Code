/*
Create a class which a complex number. Add two objects and display the resultant object.
Overload the ++ (post and pre) operator for the class.
*/
#include <iostream>
using namespace std ;
class Complex{
    int real , img;
    public :
        void getData(){
            cout << "Enter Real and Imaginary : ";
            cin >> real >> img ;
        }
        void operator ++(){
            this->img++;
            this->real++;
        }
        void showData(){
            cout << "Real : " << real << " Img : " << img << endl ;
        }
};
int main(){
    Complex c;
    c.getData();
    ++c;
    c.showData();
    return 0 ;
}