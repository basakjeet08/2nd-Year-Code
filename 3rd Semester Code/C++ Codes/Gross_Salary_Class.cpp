#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Employee{
    private : 
        int id,age;
        string name;
        float basic_salary,gross_salary;
        void calSalary(){
            gross_salary = basic_salary + (0.8)*basic_salary + (0.1)*basic_salary;     
        }
    public :
        void getData(int i){
            cout << "\nEnter the Details of Employee " << i+1 << " : \n";
            cout << "Name : ";
            getline(cin,name);
            cout << "ID : ";
            cin >> id;
            cout << "Age : ";
            cin >> age;
            cout << "Basic Salary : ";
            cin >> basic_salary;
            cin.ignore();
            calSalary();
        }
        void showData(){
            cout << endl;
            cout << left << setw(6) << "SL";
            cout << left << setw(10) << "ID";
            cout << left << setw(20) << "Name ";
            cout << left << setw(8) << "Age ";
            cout << left << setw(15) << "basic salary";
            cout << left << setw(15) << "gross salary";
            cout <<endl;
        }
        void showData(int i){
            cout << left << setw(6) << i+1;
            cout << left << setw(10) << id;
            cout << left << setw(20) << name;
            cout << left << setw(8) << age;
            cout << left << setw(15) << basic_salary;
            cout << left << setw(15) << gross_salary;
            cout << endl;
        }
};
int main(){
    int nos;
    cout << "Enter the Numbers of Employee : ";
    cin >> nos;
    cin.ignore();
    Employee emp[nos];
    for(int i=0;i<nos;i++)
        emp[i].getData(i);

    emp[0].showData();

    for(int i=0;i<nos;i++)
        emp[i].showData(i);
    return 0;    
}