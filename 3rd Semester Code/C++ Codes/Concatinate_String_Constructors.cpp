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
        void concatStrings(string s){
            st = st + s;
            len = len + s.length();
        }
};
int main(){
    Strings ob1;
    Strings ob2("Anirban");
    Strings ob3(ob2);
    ob1.concatStrings("Hello");
    ob2.concatStrings(" Basak");
    ob3.concatStrings("\n");

    ob1.showData();
    ob2.showData();
    ob3.showData();
    return 0;
}