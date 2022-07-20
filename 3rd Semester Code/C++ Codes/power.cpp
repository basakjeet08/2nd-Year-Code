//Power
#include <iostream>
using namespace std;

int main(){
    int n1,n2,res;
    
    cout<<"Enter Two Numbers : ";
    cin>>n1>>n2;
    
    int i = 0;
    res = n1;
    for(i=1;i<n2;i++){
        res*=n1;
    }
    cout<<n1<< "^"<<n2<<"="<<res;
    
    return 0;
}