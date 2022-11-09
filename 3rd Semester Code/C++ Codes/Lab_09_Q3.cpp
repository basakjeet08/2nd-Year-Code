// WAP to find sort an integer array and a float array, using class template.
#include <iostream>
using namespace std;
template <class T>
class Array{
    T arr[5];
    public :
        void getData(){
            cout << "Enter the Data : ";
            for(int i=0;i<5;i++)
                cin >> arr[i];
            sort();
            showData();
        }
        void sort(){
            for(int i = 0;i<4;i++)
                for(int j=0;j<5-i-1;j++)
                    if(arr[j] > arr[j+1]){
                        T temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp ;
                    }
        }
        void showData(){
            cout << "The Sorted Array : ";
            for(int i=0;i<5;i++)
                cout << arr[i] << " ";
            cout << endl ;
        }
};
int main(){
    Array<int>ob1 ;
    Array<double>ob2 ;
    ob1.getData();
    ob2.getData();
    return 0 ;
}