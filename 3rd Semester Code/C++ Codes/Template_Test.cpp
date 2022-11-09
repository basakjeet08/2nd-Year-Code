#include <iostream>
using namespace std;

template<class T1 , class T2>
T2 compare(T1 a , T2 b){
    if(a > b)
        return a;
    return b ;
}
int main(){
    cout << compare<int , double>(2,3.5);
}