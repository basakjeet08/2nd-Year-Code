#include <iostream>
using namespace std;
class Tester{
    int num;
    public : 
        Tester(){
            cout << "Default Constructor Invoked" << endl;
            num = 0;
            cout << "Number : " << num << endl;
        }
        Tester(int num){
            this->num = num;
            cout << "Parametarized Called "<<endl;
            cout << "Number : " << num << endl;
        }
        Tester(Tester *ob){
            num = ob->num;
            cout << "Copy Constructor Invoked" << endl;
            cout << "Number : " << num << endl;
        }
};
int main(){
    Tester ob1;
    Tester ob2(34);
    Tester ob3(&ob2);
    return 0;
}