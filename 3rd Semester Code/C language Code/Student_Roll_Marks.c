#include <stdio.h>

struct Student{
    char name[50];
    int roll_no;
    int marks_in_phy,marks_in_eng,marks_in_maths,marks_in_comp,marks_in_chem;

};

void getData(int , struct Student* );
void showOutput(int , struct Student* );
int main(){
    int no_of_students;

    printf("Enter the Number of Students : ");
    scanf("%d",&no_of_students);
    
    struct Student stu[no_of_students];
    getData(no_of_students,stu);
    showOutput(no_of_students,stu);
    return 0;
}
void getData(int no_of_students,struct Student* stu){
    for(int i=0;i<no_of_students;i++){
        printf("Enter the Name : ");
        getchar();
        gets(stu->name);
        printf("Enter the Roll No : ");
        scanf("%d",&stu->roll_no);
        printf("Enter the Marks in Physics : ");
        scanf("%d",&stu->marks_in_phy);
        printf("Enter the Marks in Maths : ");
        scanf("%d",&stu->marks_in_maths);
        printf("Enter the Marks in English : ");
        scanf("%d",&stu->marks_in_eng);
        printf("Enter the Marks in Computer : ");
        scanf("%d",&stu->marks_in_comp);
        printf("Enter the Marks in Chemistry : ");
        scanf("%d",&stu->marks_in_chem);

        stu++;
    }
}

void showOutput(int no_of_students , struct Student *stu){
    printf("\n\n");
    for(int i=0;i<no_of_students;i++){
        printf("Enter the Name : %s \n",stu->name);
        printf("Enter the Roll No : %d \n",stu->roll_no);
        printf("Enter the Marks in Physics : %d \n",stu->marks_in_phy);
        printf("Enter the Marks in Maths : %d\n",stu->marks_in_maths);
        printf("Enter the Marks in English : %d\n",stu->marks_in_eng);
        printf("Enter the Marks in Computer : %d\n",stu->marks_in_comp);
        printf("Enter the Marks in Chemistry : %d\n\n\n",stu->marks_in_chem);

        stu++;
    }
}