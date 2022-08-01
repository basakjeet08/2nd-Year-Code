#include <iostream>
using namespace std ;
class Numbers {
    private :
        int num;
    public :
        void getData();
        void show();
        Numbers Cal(Numbers);
};
int main(){
    Numbers ob1,ob2,ob3;
    ob1.getData();
    ob2.getData();
    ob3 = ob1.Cal(ob2);
    ob3.show();
    return 0 ;
}
void Numbers :: getData(){
    cout << "Enter the Number : ";
    cin >> num;
}
void Numbers :: show(){
    cout << num ;
}
Numbers Numbers :: Cal(Numbers ob1){
    Numbers temp;
    temp.num = this->num + ob1.num;
    return temp ;
}