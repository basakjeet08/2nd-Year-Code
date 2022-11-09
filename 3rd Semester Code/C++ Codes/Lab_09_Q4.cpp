//WAP to display data of two different types using class template
#include <iostream>
using namespace std;
template<class T>
class Number{
    T data ;
    public : 
        void getData(){
            cout << "Enter the Data : ";
            cin >> data ;
            showData();
        }
        void showData(){
            cout << "The data is : " << data << endl ;
        }
};
int main(){
    Number <int> ob1 ;
    Number <double> ob2 ;
    ob1.getData();
    ob2.getData();
}