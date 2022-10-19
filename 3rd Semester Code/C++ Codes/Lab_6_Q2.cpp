/*
2. Create a class to store an integer array. Overload insertion and extraction operator to
input and display the array elements.
*/

#include <iostream>
using namespace std ;
class A{
    int arr[5];
    public : 
        istream &operator >>(istream &input , A ob){
            for(int i = 0;i<5;i++)
                input >> ob.arr[i];
            return *ob ;
        }
};
int main(){
    A ob1 , ob2 ;
    cin >> ob1 ;
}