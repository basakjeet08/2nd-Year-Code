#include <iostream>
using namespace std;
class A{
    int data ;
    public : 
        void getData(){
            cout << "Enter Data : " ;
            cin >> data ;
        }
        void showData(){
            cout << "Data : " << data; 
        }
};
int main(){
    A* ob ;
    ob->getData();
    ob->showData();
    return 0 ;
}