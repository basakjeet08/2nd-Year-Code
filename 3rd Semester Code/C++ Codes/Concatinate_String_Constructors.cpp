#include <iostream>
using namespace std;
class String{
    private :
        string st;
        int len;
    public : 
        String(){
            st= "";
            len = 0;
        }
        String(string st){
            this->st = st ;
            len = st.length();
        }
        String(String &ob){
            st = ob.st;
            len = ob.len;
        }
        void concatinateString(String ob){
            st = st + ob.st ;
            len = len + ob.len;
        }
        void showData(){
            cout << "String is : " << st << " with the length of " << len << endl;
        }
};
int main(){
    String ob1;
    string st;
    cout << "Enter the String : ";
    getline(cin , st);
    String ob2(st);
    String ob3(ob2);
    ob2.concatinateString(ob3);
    ob1.showData();
    ob2.showData();
    ob3.showData();
    return 0;
}