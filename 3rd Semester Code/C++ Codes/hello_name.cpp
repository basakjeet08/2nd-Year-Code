#include <iostream>
#include <string>
using namespace std;
class MyName {
    private :
        string name;
    public :
        void getData(){
            cout << "Enter Your Name : ";
            getline(cin,name);
        }
        void showData(){
            cout << "Hello " << name;
        }
};
int main(){
    MyName ob;
    ob.getData();
    ob.showData();
    return 0;
}