/*
Create a class which allocates the memory for a string through dynamic constructor.
Overload the binary + to concatenate two strings and display it.
*/
#include <iostream>
#include <string.h>
using namespace std ;
class String{
    char* ch;
    public : 
        String(){ch = new char;}
        void getData(){
            cout << "Enter the String : " ;
            cin >> ch ;
        }
        void show(){
            cout << "String : " << ch <<endl;
        }
        String operator+(String st){
            String temp;
            char* str = ch ;
            temp.ch = strcat(str,st.ch);
            return temp ;
        }
};
int main(){
    String st1 , st2 , st3 ;
    st1.getData();
    st2.getData();
    st3 = st1 + st2 ;
    st3.show();
}