#include <iostream>
using namespace std;
class Strings{
    string st;
    int len;
    public : 
        Strings(){
            st = "";
            len = 0;
        }
        Strings(string st){
            this->st = st;
            len = st.length();
        }
        Strings(Strings* ob){
            st = ob->st;
            len = ob->len;
        }
        void showData(){
            cout << "The String is : " << st << " of length " << len << endl;
        }
        void concatStrings(Strings s){
            st = st + s.st;
            len = len + s.len;
        }
};
int main(){
    string temp;
    cout << "Enter the String for 1st Class : ";
    getline(cin , temp);
    Strings ob1(temp);
    cout << "Enter the String to Concatinate to First String : ";
    getline(cin, temp);
    Strings ob2(temp);
    ob1.concatStrings(ob2);

    ob1.showData();
    ob2.showData();

    return 0;
}