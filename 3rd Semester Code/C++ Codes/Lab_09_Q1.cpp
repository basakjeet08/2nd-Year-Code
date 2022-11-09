// WAP to find sort an integer array and a float array, using function template.
#include <iostream>
using namespace std;
template <class T>
void getData(T* arr){
    cout << "Enter the Array : ";
    for(int i = 0 ; i<5 ; i++)
        cin >> *(arr+i);
}
template <class T>
void sort(T* arr){
    for(int i=0;i<4;i++)
        for(int j=0;j<5-i-1;j++)
            if(*(arr+j) > *(arr+j+1)){
                T temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
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
    sort(arr);
    showData<int>(arr);
}