// Factorial 
#include <iostream>
using namespace std;
int main(){
    int fact(int);
    int num,res;
    
    
    cout<<"Enter the Number : ";
    cin>>num;
    
    res = fact(num);
    cout<<"Factorial of "<<num<<" is "<<res;
    return 0;
}

int fact(int num){
    
    if(num>1)
        return (num*fact(num-1));
    else
        return 1;
}