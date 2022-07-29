#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int roll;
    int marks[5];
    int tot;
    char grade;
};
typedef struct student node;
void main()
{
    node *x;
    int i,j,n,t;
    printf("\nHow many records you want to input");
    scanf("%d",&n);
    x=(node *)malloc(n*sizeof(node));
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\nEnter name of the student: ");
        gets(x[i].name);
        printf("\nEnter roll number of the student: ");
        scanf("%d",&x[i].roll);
        printf("\nEnter marks of 5 subjects:\n");
        for(j=0;j<5;j++)
            scanf("%d",&x[i].marks[j]);
    }
    for(i=0;i<n;i++)
    {
        x[i].tot=0;
        for(j=0;j<5;j++)
            x[i].tot+=x[i].marks[j];
        if(x[i].tot>=400)
            strcpy(x[i].grade,"A");
        if(x[i].tot>=300)
            strcpy(x[i].grade,"B");
        if(x[i].tot>=200)
            strcpy(x[i].grade,"C");
        else
            strcpy(x[i].grade,"D");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(x[j].tot>x[j+1].tot)
            {
                t=x[j].tot;
                x[j].tot=x[j+1].tot;
                x[j+1].tot=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("\n\nName = %s",x[i].name);
        printf("\nRoll Number = %d",x[i].roll);
        printf("\nMarks of 5 subjects:\n");
        for(j=0;j<5;j++)
            printf("%d\n",x[i].marks[j]);
        printf("\nTotal Marks = %d",x[i].tot);
        printf("\nGrade = %s",x[i].grade);
    }
}