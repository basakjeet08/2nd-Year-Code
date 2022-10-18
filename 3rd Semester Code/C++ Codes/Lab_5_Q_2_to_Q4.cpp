/*
Q2. Create a class student which stores name, roll number and age of a student. Derive a class
test from student class, which stores marks in 5 subjects. Input and display the details of
a student.

Q3. Extend the program ii. to derive a class from result from classs ‘test’ which includes
member function to calculate total marks and percentage of a student. Input the data for a
student and display its total marks and percentage

Q4. Extend the program ii. to include a class sports, which stores the marks in sports activity.
Derive the result class from the classes ‘test’ and ‘sports’. Calculate the total marks and
percentage of a student.

Q11. Extend the program ii. of inheritance to include a class sports, which stores the marks in
sports activity. Derive the result class from the classes ‘test’ and ‘sports’. Create objects
using parameterized constructors .Calculate the total marks and percentage of a student
*/
#include <iostream>
using namespace std ;
class Student { 
    public :
        string name ;
        int roll , age , total;
        double percentage ;
        Student(string name , int roll , int age){
            this->name = name ;
            this->roll = roll ;
            this->age = age ;
        }
};
class sports{
    protected :
        int sports_marks ;

    protected : 
     void getMarksSports(){
        cout << "Enter the Marks in Sports : " ;
        cin >> sports_marks ;
    }
};
class test : protected Student{
    protected : 
        int marks[5];
    public : 
        test(string name , int roll , int age) : Student(name , roll , age){
            cout << "Enter the Marks in 5 Subjects : ";
            for(int i = 0;i<5;i++)
                cin >> marks[i];
            getchar();
        }
    protected : 
        void showData(){
            cout << "Name : " << name << endl;
            cout << "Roll No : " << roll <<endl;
            cout << "Age : " << age << endl;
            cout << "Marks in 5 subjects : ";
            for(int i=0;i<5;i++)
                cout << marks[i] << " " ;
            cout << endl ;
            cout << "Total : " << total << endl ;
            cout << "Percentage : " << percentage << endl ;
        }
};
class result : protected test , sports{
    public : 
        result(string name , int roll , int age) : test (name , roll , age){}
        void calculate(){
            for(int i=0;i<5;i++)
                total += marks[i];
            total+= sports_marks;
            percentage = total/6.0 ;
        }
        void caller(){
            getMarksSports();
            calculate();
            showData();
        }
};
int main(){
    string name ;
    int roll , age ;
    cout << "Enter the Name : ";
    getline(cin , name);
    cout << "Enter the Roll Number : ";
    cin >> roll ;
    cout << "Enter the Age : " ;
    cin >> age ;
    result ob (name , roll , age);
    ob.caller();
    return 0 ;
}