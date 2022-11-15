// vii. WAP to demonstrate multiple catch and catch all.
#include <iostream>
using namespace std;
int main(){
    try{
        for(int i = 0;i<5 ; i++){
            if(i == 0)
                throw(i);
            if(i == 1)
                throw('a');
        }
    }catch(int i){
        cout << "Exception : " << i << endl ;
    }catch(char ch){
        cout << "Exception : " << ch << endl ;
    }catch(...){
        cout << "Exception caught !!" << endl ;
    }
}