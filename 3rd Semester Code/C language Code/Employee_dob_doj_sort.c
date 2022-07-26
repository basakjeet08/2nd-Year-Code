#include <stdio.h>
#include <string.h>
struct date{
    int day;
    int month;
    int year;
};
struct employee{
    char name[20];
    struct date dob;
    struct date doj;
    int salary;
};
void getData(struct employee*,int);
void menuOfTheProgram(struct employee* , int);
void sortName(struct employee* , int );
void sortBirth(struct employee* , int );
void sortJoin(struct employee* , int);
void sortSalary(struct employee* , int);
void replaceArray(struct employee* , struct date , struct date);
void display(struct employee* , int );
void swap(struct employee*);
int main(){
    int nos;
    printf("Enter the Number of Employees : ");
    scanf("%d",&nos);
    getchar();
    struct employee emp[nos];
    getData(emp,nos);
    menuOfTheProgram(emp,nos);
    display(emp,nos);
    return 0;
}
void getData(struct employee *emp,int nos){
    for(int i = 0;i<nos;i++){
        printf("Enter the Details of Employee %d :-- \n",(i+1));
        printf("Name : ");
        gets(emp->name);
        printf("Enter the DOB (DD MM YYYY): ");
        scanf("%d %d %d",&emp->dob.day,&emp->dob.month,&emp->dob.year);
        printf("Enter the DOJ (DD MM YYYY): ");
        scanf("%d %d %d",&emp->doj.day,&emp->doj.month,&emp->doj.year);
        printf("Enter the Salary : ");
        scanf("%d",&emp->salary);
        getchar();
        emp++;
    }
}
void menuOfTheProgram(struct employee* emp,int nos){
    int choice ;
    printf("\n1. Sort By Name \n");
    printf("2. Sort by Birth\n");
    printf("3. Sort by Joining \n");
    printf("4. Sort By salary\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
            sortName(emp,nos);
            break;
        case 2 :
            sortBirth(emp,nos);
            break;
        case 3 :
            sortJoin(emp,nos);
            break;
        case 4 :
            sortSalary(emp,nos);
            break;
        default : 
            printf("Wrong Choice !!\n");
    }
}
void sortName(struct employee* emp , int nos){
    struct employee temp;
    struct employee* pointer = emp;
    for(int i = 0;i<nos-1;i++){
        for(int j = 0;j<nos-1-i;j++){
            if(strcmp(emp->name, (emp+1)->name) > 0)
                swap(emp);
            emp++;
        }
        emp = pointer;
    }
}
void sortBirth(struct employee* emp , int nos){
    struct employee* pointer = emp;
    for(int i = 0;i<nos-1;i++){
        for(int j = 0;j<nos-1-i;j++){
            replaceArray(emp,(emp->dob),(emp+1)->dob);
            emp++;
        }
        emp = pointer;
    }
}
void sortJoin(struct employee* emp , int nos){
    struct employee* pointer = emp;
    for(int i = 0;i<nos-1;i++){
        for(int j = 0;j<nos-1-i;j++){
            replaceArray(emp,(emp->doj),((emp+1)->doj));
            emp++;
        }
        emp = pointer;
    }
}
void replaceArray(struct employee* emp , struct date d1,struct date d2){
    struct employee temp;
    if(d1.year > d2.year)
        swap(emp);
    else if((d1.year == d1.year)&&(d1.month > d2.month))
        swap(emp);
    else if((d1.month == d2.month) && (d1.day > d2.day))
        swap(emp);
}
void sortSalary(struct employee* emp , int nos){
    struct employee* pointer = emp;
    struct employee* temp;
    for(int i = 0;i<nos-1;i++){
        for(int j = 0;j<nos-1-i;j++){
            if(emp->salary > (emp+1)->salary)
                swap(emp);
            emp++;
        }
        emp = pointer;
    }
}
void display(struct employee* emp,int nos){
    printf("\nThe Details of the Employees : -\n");
    for(int i = 0;i<nos;i++){
        printf("Name : %s\n",emp->name);
        printf("DOB : %d/%d/%d \n",emp->dob.day,emp->dob.month,emp->dob.year);
        printf("DOJ : %d/%d/%d \n",emp->doj.day,emp->doj.month,emp->doj.year);
        printf("Salary : %d\n\n\n",emp->salary);
        emp++;
    }
}
void swap(struct employee* emp){
    struct employee temp ;
    temp = *emp;
    *emp = *(emp+1);
    *(emp+1) = temp;
}