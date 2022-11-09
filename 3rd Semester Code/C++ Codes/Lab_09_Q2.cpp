// WAP to display data of two different types using function template with multiple arguments.
#include <iostream>
using namespace std;
template <class T>
void getData(T* arr){
    cout << "Enter the Array : ";
    for(int i = 0 ; i<5 ; i++)
        cin >> *(arr+i);
}
template <class T>
void showData(T* arr){
    cout << "The Array : " ;
    for(int i=0;i<5;i++)
        cout << arr[i] << " " ;
}
int main(){
    int* arr = new int[5] ; 
    getData<int>(arr);
    showData<int>(arr);
}