// vi. WAP to throw and handle’ array out of bound’ exception.
#include <iostream>
using namespace std;
int main(){
    int arr[5];

    try{
        for(int i=0 ; i<6;i++){
            if(i > 4)
                throw(i) ;
            cin >> arr[i];
        }  
    }catch(int e){
        cout << "Array out of Bounds : " << e << endl;
    }
}