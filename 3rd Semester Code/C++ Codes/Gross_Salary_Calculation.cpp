#include <iostream>
#include <iomanip>
using namespace std ;
struct Employee {
    int Id;
    string name;
    int age;
    float basic_salary;
    float gross_salary;
};
void calShow(struct Employee*,int);
void getData(struct Employee*,int);
int main(){
    int no_of_employees;
    cout << "Enter the number of the Employees : ";
    cin >> no_of_employees;
    cin.ignore();
    struct Employee emp[no_of_employees];
    getData(emp,no_of_employees);
    calShow(emp,no_of_employees);
    return 0;
}
void getData(struct Employee* emp,int no_of_employees){
    for(int i=0;i<no_of_employees;i++){
        cout << "Enter the Details of Employee "<<i+1 << " : \n";
        cout << "ID : ";
        cin >> emp->Id;
        cin.ignore();
        cout << "Name : ";
        getline(cin,emp->name);
        cout << "Age : ";
        cin >> emp->age;
        cout << "Basic Salary : ";
        cin >> emp->basic_salary;
        cout << "\n";
        emp++;
    }
}
void calShow(struct Employee* emp,int no_of_students){
    cout << left << setw(12) << "ID";
    cout << left << setw(20) << "NAME";
    cout << left << setw(9) << "AGE";
    cout << left << setw(18) << "Basic Salary";
    cout << left << setw(18) << "Gross Salary";
    cout << endl;
    for(int i=0;i<no_of_students;i++){
        emp->gross_salary = emp->basic_salary+(80.0/100)*emp->basic_salary+ (10.0/100.0)*emp->basic_salary;
        cout << left << setw(12) << emp->Id;
        cout << left << setw(20) << emp->name;
        cout << left << setw(9) << emp->age;
        cout << left << setw(18) << emp->basic_salary;
        cout << left << setw(18) << emp->gross_salary;
        cout << endl;
        emp++;
    }
}