#include <iostream>
#include <string>
using namespace std ;
string reversest(string , int);
int main(){
    string st ;
    cout << "Enter the String : " ;
    getline(cin , st);
    st+="\0";
    st = reversest(st,0);
    cout << st << endl;
    return 0;
}
string reversest(string st1 , int key){
    string st2 ;
    if(st1[key+1] != '\0'){
        st2 = reversest(st1[key+1]) + st1[key] ;
    }
    else
        return st1[key];
}