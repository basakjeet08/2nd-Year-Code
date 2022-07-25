#include <iostream>
using namespace std;
struct Student{
    string name;
    int roll;
};
int main(){
    struct Student st[2];
    int i ;
    for(i = 0;i<2;i++){
    cout<<"Enter Your Name : ";
    getline(cin,st[i].name);
    cout<<"Enter Your Roll No : ";
    cin>>st[i].roll;
    cin.ignore();
    }
    for(i = 0 ;i<2;i++){
        cout<<"\n\nYour Name is : "<<st[i].name<<"\n";
        cout<<"Your Roll No is : "<<st[i].roll<<"\n";
    }
    return 0;
}