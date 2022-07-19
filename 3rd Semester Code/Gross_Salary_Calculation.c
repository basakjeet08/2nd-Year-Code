#include <stdio.h>
struct Employee{
    int id;
    char name[50];
    int age;
    float basic_salary;
    float gross_salary;
};
void getData(int , struct Employee*);
void display(int , struct Employee*);

int main(){
    int no_of_employees;

    printf("Enter the Number of Employees : ");
    scanf("%d",&no_of_employees);
    struct Employee emp[no_of_employees];

    getData(no_of_employees,emp);
    display(no_of_employees,emp);
}

void getData(int no_of_employees,struct Employee *emp){

    for (int i = 0;i<no_of_employees;i++)
    {
        printf("Enter the Employee ID : ");
        scanf("%d",&emp->id);
        getchar();
        printf("Enter the Employee Name : ");
        gets(emp->name);
        printf("Enter the Employee age : ");
        scanf("%d",&emp->age);
        printf("Enter the Employee Basic Salary : ");
        scanf("%f",&emp->basic_salary);

        // Doing the Calculation Part and initializing the Gross Salary 
        emp->gross_salary = emp->basic_salary + ((80.0/100.0 )*emp->basic_salary ) + ((10/100.0)*emp->basic_salary);
        emp++;
    }
}

void display(int no_of_employees,struct Employee *emp){
    printf("\n\n\n");
        for (int i = 0;i<no_of_employees;i++)
    {
        printf("The Employee ID : %d\n",emp->id);
        printf("The Employee Name : %s\n",emp->name);
        printf("The Employee age : %d\n",emp->age);
        printf("The Employee Basic Salary : %f\n",emp->basic_salary);
        printf("The Employee Gross Salary : %f\n\n\n",emp->gross_salary);
        emp++;
    }
}