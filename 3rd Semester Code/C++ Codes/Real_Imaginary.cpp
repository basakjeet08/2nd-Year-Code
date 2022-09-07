#include <iostream>
using namespace std;
class Complex{
    int real,img;
    public :
        Complex(){
            real = 0;
            img = 0;
        }
        Complex(int real, int img){
            this->real = real ;
            this->img = img ;
        }
        Complex(Complex& ob){
            this->real = ob.real;
            this->img = ob.img;
        }
        showData(){
            if(img < 0)
                cout << "Complex Number : " << real << " -i" << -img << endl;
            else
                cout << "Complex Number : " << real << " +i" << img << endl; 
        }
};
int main(){
    int real,img;
    Complex ob1;
    cout << "Enter the Real Part : ";
    cin >> real;
    cout << "Enter the Imaginary Part : ";
    cin >> img;
    Complex ob2(real,img);
    Complex ob3(ob2);
    
    ob1.showData();
    ob2.showData();
    ob3.showData();
    return 0;
}