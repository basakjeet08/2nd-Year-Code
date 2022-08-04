#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[20];
    struct date dob;
    struct date doj;
    int salary;
};
int main()
{
    int i,j;
    struct employee e[5],temp,temp1,temp2,temp3;
    printf("Date of Birth\n");
    for(i=0;i<5;i++)
    {
        printf("For employee %d enter the day: ",i+1);
        scanf("%d",&e->dob.day);
        printf("For employee %d enter the month: ",i+1);
        scanf("%d",&e->dob.month);
        printf("For employee %d enter the year: ",i+1);
        scanf("%d",&e->dob.year);
        printf("\n");

        printf("Date Of Joining of employee\n");
        printf("For employee %d enter the day: ",i+1);
        scanf("%d",&e->doj.day);
        printf("For employee %d enter the month: ",i+1);
        scanf("%d",&e->doj.month);
        printf("For employee %d enter the year: ",i+1);
        scanf("%d",&e->doj.year);
        printf("\n");
        
        printf("Employee %d name: ",i+1);
        scanf("%s",e[i].name);
        printf("\n");
        printf("For employee %d salary: ",i+1);
        scanf("%d",&e[i].salary);
    }
    //Sorting By name
    for (i = 1; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++) 
        {
            if (strcmp(e[j].name, e[j + 1].name) > 0) 
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    printf("\n");
    //Printing the sorted by name structure
    for(i=0;i<5;i++)
    {
        printf("Name: %s\nDOB: %d/%d/%d\nDOJ: %d:%d:%d\nSalary: %d\n",e[i].name,e[i].dob.day,e[i].dob.month,e[i].dob.year,e[i].doj.day,e[i].doj.month,e[i].doj.year,e[i].salary);
    }
    //Sort by DOB
    for (i=0; i<4; i++)
    {    
        for (j=i+1; j<5; j++)
        {       
            if ((e[i].dob.year > e[j].dob.year)&&(e[i].dob.month > e[j].dob.month)&&(e[i].dob.day > e[j].dob.day))
            {          
                temp1=e[i];          
                e[i] = e[j];          
                e[j] = temp1;
            }
        }
    }
    printf("\n");
    //Printing the sorted by DOB
    for(i=0;i<5;i++)
    {
        printf("Name: %s\nDOB: %d/%d/%d\nDOJ: %d:%d:%d\nSalary: %d\n",e[i].name,e[i].dob.day,e[i].dob.month,e[i].dob.year,e[i].doj.day,e[i].doj.month,e[i].doj.year,e[i].salary);
    }
    //Sort by DOJ
    for (i=0; i<4; i++)
    {    
        for (j=i+1; j<5; j++)
        {       
            if ((e[i].doj.year > e[j].doj.year)&&(e[i].doj.month > e[j].doj.month)&&(e[i].doj.day > e[j].doj.day))
            {          
                temp2=e[i];          
                e[i] = e[j];          
                e[j] = temp2;
            }
        }
    }
    printf("\n");
    //Printing the sorted by DOJ 
    for(i=0;i<5;i++)
    {
        printf("Name: %s\nDOB: %d/%d/%d\nDOJ: %d:%d:%d\nSalary: %d\n",e[i].name,e[i].dob.day,e[i].dob.month,e[i].dob.year,e[i].doj.day,e[i].doj.month,e[i].doj.year,e[i].salary);
    }
    //Sort by salary
    for (i=0; i<4; i++)
    {    
        for (j=i+1; j<5; j++)
        {       
            if (e[i].salary > e[j].salary)
            {          
                temp3=e[i];          
                e[i] = e[j];          
                e[j] = temp3;
            }
        }
    }
    //Printing the sorted by salary
    for(i=0;i<5;i++)
    {
        printf("Name: %s\nDOB: %d/%d/%d\nDOJ: %d:%d:%d\nSalary: %d\n",e[i].name,e[i].dob.day,e[i].dob.month,e[i].dob.year,e[i].doj.day,e[i].doj.month,e[i].doj.year,e[i].salary);
        printf("\n");
    }
    return 0;
}