#include <iostream>
using namespace std ;
class Number{
    private :
        int num;
    public : 
        void getData(){
            cout << "Enter the Number : ";
            cin >> num ;
        }
        void Square();
        void Cube();
};
int main(){
    Number n ;
    n.getData();
    n.Square();
    n.Cube();
    return 0 ;    
}
inline void Number :: Square(){
    cout << "Square : " << num*num << endl;
}
inline void Number :: Cube(){
    cout << "Cube : " << num*num*num;
}