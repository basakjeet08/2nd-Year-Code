#include <iostream>
using namespace std ;
class Complex{
    int real,img;
    public : 
        getData(){
            cout << "Enter Real Part : ";
            cin >> real;
            cout << "Enter Imaginary Part : ";
            cin >> img;
        }
        showData(){
            if(img>0)
                cout << "The Complex Number : " << real << "+i" << img;
            else
                cout << "The Complex Number : " << real << "-i" << -img;
        }
};
int main(){
    Complex cmp;
    cmp.getData();
    cmp.showData();
    return 0;
}