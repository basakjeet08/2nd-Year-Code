/*
2. Create a class to store an integer array. Overload insertion and extraction operator to
input and display the array elements.
*/
#include <iostream>
using namespace std;
class A{
    public:
        int arr[5];
        friend ostream &operator<<(ostream &out, A &ob);
        friend istream &operator>>(istream &in, A &ob);
}; 
istream &operator>>(istream &in, A &ob){
    for (int i=0; i<5; i++)
        in >> ob.arr[i];
    return in;
}
ostream &operator<<(ostream &out, A &ob){
    for (int i=0; i<5; i++)
        out << ob.arr[i] << " ";
    out << endl;
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