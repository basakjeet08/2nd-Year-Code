#include <iostream>
#include <string>
using namespace std;
struct Employee{
    int id;
    string name;
    int age;
    float basic_salary;
    float gross_salary;
};
void getData(int , struct Employee*);
void display(int , struct Employee*);
int main(){
    int no_of_employees;

    cout<< "Enter the Number of Employees : ";
    cin >> no_of_employees;
    struct Employee emp[no_of_employees];

    getData(no_of_employees,emp);
    display(no_of_employees,emp);
    return 0;
}

void getData(int no_of_employees,struct Employee *emp){

    for (int i = 0;i<no_of_employees;i++)
    {
        cout << "Enter the Employee ID : ";
        cin >> emp->id;
        cin.ignore();
        cout << "Enter the Employee Name : ";
        getline(cin,emp->name);
        cout << "Enter the Employee age : ";
        cin >> emp->age;
        cout << "Enter the Employee Basic Salary : ";
        cin >> emp->basic_salary;
        // Doing the Calculation Part and initializing the Gross Salary 
        emp->gross_salary = emp->basic_salary + (80.0/100.0 )*(emp->basic_salary ) + (10/100.0)*(emp->basic_salary);
        emp++;
    }
}

void display(int no_of_employees,struct Employee* emp){
    cout << "\n\n\n";
        for (int i = 0;i<no_of_employees;i++)
    {
        cout << "The Employee ID : " << emp->id << "\n";
        cout << "The Employee Name : " << emp->name << "\n";
        cout << "The Employee age : " << emp->age << "\n";
        cout << "The Employee Basic Salary : " << emp->basic_salary << "\n";
        cout << "The Employee Gross Salary : " << emp->gross_salary << "\n\n\n";
        emp++;
    }
}