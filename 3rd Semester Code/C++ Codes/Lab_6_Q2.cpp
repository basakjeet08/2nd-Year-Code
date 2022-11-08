/*
2. Create a class to store an integer array. Overload insertion and extraction operator to
input and display the array elements.
*/
#include <iostream>
using namespace std;
class A{
    public:
        int arr[5];
        friend ostream &operator<<(ostream &out, A &obj);
        friend istream &operator>>(istream &in, A &obj);
}; 
istream &operator>>(istream &in, A &obj){
    for (int i=0; i<5; i++)
        in >> obj.arr[i];
    return in;
}
ostream &operator<<(ostream &out, A &obj){
    for (int i=0; i<5; i++)
        out << obj.arr[i] << " ";
    cout << endl;
    return out;
}
int main(){
    A obj;
    cout << "Enter 5 integers into array: ";
    cin >> obj;
    cout << "The array elements are: ";
    cout << obj;
    return 0;
}