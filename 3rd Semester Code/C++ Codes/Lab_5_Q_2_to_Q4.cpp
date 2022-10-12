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

*/
#include <iostream>
using namespace std ;
class Student { 
    public : 
        string name ;
        int roll , age , total;
        double percentage ;
};
class sports{
    protected :
        int sports_marks ;

    protected : 
     void getDataSports(){
        cout << "Enter the Marks in Sports : " ;
        cin >> sports_marks ;
    }
};
class test : protected Student{
    protected : 
        int marks[5];

    protected : 
        void getDataStudent(){
            cout << "Enter the Name : ";
            getline(cin , name);
            cout << "Enter the Roll Number : ";
            cin >> roll ;
            cout << "Enter the Age : " ;
            cin >> age ;
            cout << "Enter the Marks in 5 Subjects : ";
            for(int i = 0;i<5;i++)
                cin >> marks[i];
            getchar();
        }
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
class result : private test , sports{
    public : 
        void calculate(){
            for(int i=0;i<5;i++)
                total += marks[i];
            total+= sports_marks;
            percentage = total/6.0 ;
        }
        void caller(){
            getDataStudent();
            getDataSports();
            calculate();
            showData();
        }
};
int main(){
    result ob ;
    ob.caller();
    return 0 ;
}