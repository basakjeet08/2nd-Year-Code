#include <iostream>
using namespace std;
class A{
    int data ;
    public : 
        void getData(){
            cout << "Enter Data : ";
            cin >> data ;
        }
        int getterData(){
            return data ;
        }
};
class B{
    int data ;
    public : 
        void getData(){
            cout << "Enter the Data : " ;
            cin >>data ;
        }
        bool compare(A ob){
            return this->data > ob.getterData();
        }
};
int main(){
    A ob1 ;
    B ob2 ;
    ob1.getData();
    ob2.getData();

    if(ob2.compare(ob1))
        cout << "Object B is greater" ;
    else
        cout << "Object A is greater " ;
    return 0 ;
}