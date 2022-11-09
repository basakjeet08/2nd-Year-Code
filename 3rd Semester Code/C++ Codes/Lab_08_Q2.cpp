/**
    ii. Create a class which stores employee name,id and salary Derive two classes from
    ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA
    and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
    Calculate the salary of a regular employee and a par-time employee, using virtualfunction 
 */
#include <iostream>
using namespace std;

class Employee {
    protected : 
        int id;
        string name ;
        double salary ;
    public : 
        virtual void getData() = 0 ;
        virtual void calculate() = 0 ;
        void showData(){
            cout << "ID : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "Salary : " << salary << endl ;
        }
};
class PartTime : public Employee { 
    int hours , no_of_hours;
    public : 
        void getData(){
            cout << "Enter the ID : " ;
            cin >> id ;
            cout << "Enter the Name : " ;
            cin >> name ;
            cout << "Enter the Hours and No of Hours : " ;
            cin >> hours >> no_of_hours ;
            calculate();
            showData();
        }
        void calculate(){
            salary = hours * no_of_hours ;
        }
};
class Regular : public Employee {
    int DA , HRA , basic ;
    public : 
        void getData(){
            cout << "Enter the ID : " ;
            cin >> id ;
            cout << "Enter the Name : " ;
            cin >> name ;
            cout << "Enter the DA , HRA and Basic Salary : " ;
            cin >> DA >> HRA >> basic ;
            calculate();
            showData();
        } 
        void calculate(){
            salary = DA + HRA + basic ;
        }
};
int main(){
    Employee* ptr ;
    PartTime p ;
    Regular r ;

    ptr = &p;
    ptr->getData();
    ptr = &r ;
    ptr->getData();
}