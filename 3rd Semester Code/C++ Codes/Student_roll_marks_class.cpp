#include <iostream>
#include <string>
using namespace std;
class Student{
    private :
        int roll,marks;
        string name ;
    public : 
        void getData(int i){
            cout << "\nEnter the Details of Student "<<i+1<<" : \n";
            cout << "Name : ";
            getline(cin,name);
            cout << "Roll No. : ";
            cin >> roll;
            cout << "Total Marks : ";
            cin >> marks;
            cin.ignore();
        }
        void showData(int i){
            cout << "\nDetails of Student " << i+1 << " : \n";
            cout << "Name : " << name <<endl;
            cout << "Roll No. : " << roll << endl;
            cout << "Total Marks : " << marks << endl ;
        }
};
int main(){
    int nos;
    cout << "Enter the Number of Students : ";
    cin >> nos;
    cin.ignore();
    Student stu[nos] ;
    for(int i=0;i<nos;i++)
        stu[i].getData(i);
    for(int i=0;i<nos;i++)
        stu[i].showData(i);
    return 0;
}