#include <iostream>
using namespace std ;
class Student{
    string name;
    int age,roll_no,avg_marks;
    public : 
        Student(string name,int age,int roll_no,int avg_marks){
            this->age = age ;
            this->name = name ;
            this->avg_marks = avg_marks;
            this->roll_no = roll_no;
        }
        Student(Student &s){
            name = s.name;
            age = s.age;
            roll_no = s.roll_no;
            avg_marks = s.avg_marks;
        }
        friend void highestAverage(Student ,Student);
};
int main(){
    string name;
    int roll,age,mark;
    cout << "Student 01 :" <<  endl;
    cout << "Enter Name : ";
    getline(cin,name);
    cout << "Enter Age : ";
    cin >> age ;
    cout << "Enter Roll No : ";
    cin >> roll;
    cout << "Enter Average Marks : ";
    cin >> mark;
    getchar();
    Student st1(name,age,roll,mark);

    cout << "Student 02 : "<<  endl;
    cout << "Enter Name : ";
    getline(cin,name);
    cout << "Enter Age : ";
    cin >> age ;
    cout << "Enter Roll No : ";
    cin >> roll;
    cout << "Enter Average Marks : ";
    cin >> mark;
    Student st2(name,age,roll,mark);

    Student st3(st2);
    highestAverage(st3,st1);
    return 0 ;
}
void highestAverage(Student ob1 , Student ob2){
    if(ob1.avg_marks > ob2.avg_marks)
        cout << ob1.name << " has highest Average Marks of " << ob1.avg_marks << endl;
    else if(ob1.avg_marks < ob2.avg_marks)
        cout << ob2.name << " has highest Average Marks of " << ob2.avg_marks << endl;
    else
        cout << ob2.name << " and " << ob2.name << " Has same Marks of " << ob2.avg_marks << endl;
}