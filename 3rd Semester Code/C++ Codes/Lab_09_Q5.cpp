#include <iostream>
using namespace std;
int main(){
    int val = 10 ;
    try{
        for(int i = 5; i>=0 ; i--){
            if(i == 0)
                throw(i);
            cout << val/i << endl;
        }  
    }catch(int e){
        cout << "Divide by : " << e << endl ;
    }
    return 0 ;
}