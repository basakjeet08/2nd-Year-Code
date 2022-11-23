#include <iostream>
using namespace std ;
class student{
    string name , branch ;
    int roll_no , age , marks ;
    public : 
        void Input(){
            cout << "Enter Name : " ;
            cin >> name ;
            cout << "Enter Branch : " ;
            cin >> branch ;
            cout << "Enter Roll : " ;
            cin >> roll_no ;
            cout << "Enter the Age : " ;
            cin >> age ;
            cout << "Enter Marks : " ;
            cin >> marks ;
        }
        void Output(){
            cout << "Name : " << name << endl ;
            cout << "Branch : " << branch << endl ;
            cout << "Roll : " << roll_no << endl ;
            cout << "Age : " << age << endl ;
            cout << "Marks : " << marks << endl ;
        }
        void Updatemarks(int newMarks){
            if(newMarks > 0)
                marks = newMarks ;
        }
};
int main(){
    student stu ;
    stu.Input();
    cout << "Enter the New Marks : " ;
    int marks;
    cin >> marks;
    stu.Updatemarks(marks);
    stu.Output();
    return 0 ;
}