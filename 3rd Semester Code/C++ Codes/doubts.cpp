#include <iostream>
#include <string>
using namespace std ;
string reverseSt(string , int);
int main(){
    string st ;
    cout << "Enter the String : " ;
    getline(cin , st);
    st = reverseSt(st,0);
    cout << st << endl;
    return 0;
}
string reverseSt(string st1 , int key){
    string st2 ;
    if(key+1 != st1.length())
        st2 = st2 + reverseSt(st1 , (key+1));
        
    st2 = st1[key];
    return st2;
}