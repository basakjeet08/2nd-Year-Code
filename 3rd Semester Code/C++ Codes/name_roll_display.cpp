#include <iostream>
using namespace std;
int main(){
    string name[10];
    int roll_no[10];
    int i ;
    for(i = 0;i<10;i++){
    cout<<"Enter Your Name : ";
    getline(cin,name[i]);
    cout<<"Enter Your Roll No : ";
    cin>>roll_no[i];
    }

    for(i = 0 ;i<10;i++){
        cout<<"\n\nYour Name is : "<<name[i]<<"\n";
        cout<<"Your Roll No is : "<<roll_no[i]<<"\n";
    }
    

    return 0;
}