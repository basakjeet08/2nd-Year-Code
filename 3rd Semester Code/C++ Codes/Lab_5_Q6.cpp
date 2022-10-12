/*
Q6. Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee.
*/

#include <iostream>
using namespace std ;
class employee{
    protected :
        string name;
        int id;
        double salary;
        void getDataEmployee(){
            cout << "Enter the Name : ";
            getline(cin , name);
            cout << "Enter the Id : " ;
            cin >> id ;
        }
        void showData(){
            cout << "Name : " << name << endl ;
            cout << "ID : " << id << endl ;
            cout << "Salary : " << salary << endl ;
        }
};
class PartTime : private employee{
    int hours,pay;
    public : 
        void getData(){
            getDataEmployee();
            cout << "Enter the Amount of Hours : ";
            cin >> hours;
            cout << "Enter the Salary per hour : " ;
            cin >> pay ;
            getchar();
            calSalary();
        }
        void calSalary(){
            salary = hours*pay ;
            showData();
        }
};
class RegularTime : private employee{
    double basic_salary,da, hra ;
    public :
        void getData(){
            getDataEmployee();
            cout << "Enter the Basic Salary : ";
            cin >> basic_salary ;
            cout << "Enter the DA : ";
            cin >> da ;
            cout << "Enter the HRA : ";
            cin >> hra ;
            getchar();
            calSalary();
        }
        void calSalary(){
            salary = da + basic_salary + hra ;
            showData();
        }
};
int main(){
    RegularTime r1;
    PartTime p1 ;
    r1.getData();
    p1.getData();
    return 0 ;
}