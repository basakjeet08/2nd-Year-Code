#include <stdio.h>
struct student {
    char name[20];
    int rollno;
    int total;
    char grade ;
    int marks[5];
};
void getData(struct student*,int );
void sortData(struct student*,int );
void showData(struct student*,int );
int main(){
    int nos;
    printf("Enter the Numbers of Students : ");
    scanf("%d",&nos);
    getchar();
    struct student stu[nos];
    for(int i=0;i<nos;i++){
        printf("Enter the Details of Student %d : \n",i+1);
        printf("Name : ");;
        gets(stu[i].name);
        printf("Roll No : ");
        scanf("%d",&stu[i].rollno);
        printf("Enter Marks in 5 Subjects : ");
        int sum = 0;
        for(int j=0;j<5;j++){
            scanf("%d",&stu[i].marks[j]);
            sum += stu[i].marks[j];
        }
        stu[i].total = sum;
        getchar();

        if(stu[i].total >=90)
            stu[i].grade = 'O';
        else if(stu[i].total >=450)
            stu[i].grade = 'E';
        else if(stu[i].total >=400)
            stu[i].grade = 'A';
        else if(stu[i].total >=350)
            stu[i].grade = 'B';
        else if(stu[i].total >=300)
            stu[i].grade = 'C';
        else if(stu[i].total >=250)
            stu[i].grade = 'D';
        else
            stu[i].grade = 'F';
    }
    struct student temp;
    for(int i=0;i<nos-1;i++){
        for(int j=0;j<nos-1-i;j++){
            if(stu[j].total > stu[j+1].total){
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp; 
            }
        }
    }
    printf("\nThe details of the Students are :-----------\n");
    for(int i=0;i<nos;i++){
        printf("\nName : %s\n",stu[i].name);
        printf("Roll NO : %d\n",stu[i].rollno);
        printf("Total Marks : %d\n",stu[i].total);
        printf("Grade : %c\n",stu[i].grade);
    }
    return 0;
}