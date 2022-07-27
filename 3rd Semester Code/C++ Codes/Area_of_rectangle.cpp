#include <iostream>
using namespace std ;

class Rectangle {

    private :
        int area ,length,breadth;
        
    public:
        void getData();
        void showOutput();
};
int main(){
    Rectangle rec;
    rec.getData();
    return 0;
}
void Rectangle ::getData(){
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>breadth;
    showOutput();
}
void Rectangle :: showOutput(){
    area = length * breadth;
    cout<<"The Area : "<<area;
}