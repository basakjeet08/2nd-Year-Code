#include <iostream>
using namespace std;
class centimeter{
    int data ;
    public : 
        centimeter(int data){
            this->data = data*100 ;
        }
        void showData(){cout << "Centimeter : " << data ;}
        
};
class meter{
    int data ;
    public : 
        void getData(){
            cout << "Enter Meter : ";
            cin >> data ; 
        }
        operator centimeter(){
            centimeter c(data);
            return c ;
        }
};
int main(){
    meter m1 ;
    m1.getData();

    centimeter c1 = m1 ;
    c1.showData();
}