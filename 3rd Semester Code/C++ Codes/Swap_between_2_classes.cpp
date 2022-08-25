#include <iostream>
using namespace std ;
class Number{
    private :
        int num ;
    public : 
        void getData(int i){
            cout << "Number " << i << " : ";
            cin >> num;
        }
        void swap(Number* n){
            int temp = num ;
            num = n->num;
            n->num = temp;
        }
        void showData(){
            cout << num << endl;
        }
};
int main(){
    Number num1,num2;
    num1.getData(1);
    num2.getData(2);
    num1.swap(&num2);
    cout << "After Swapping \n";
    num1.showData();
    num2.showData();
    return 0;
}