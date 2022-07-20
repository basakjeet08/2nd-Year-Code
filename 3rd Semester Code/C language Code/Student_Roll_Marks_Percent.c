#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll_no;
    int marks_in_phy, marks_in_eng, marks_in_maths, marks_in_comp, marks_in_chem;
    int total_marks;
    float percentage;
};

// Prototypes of the Functions
void calculateTotalAndPercentage(int, struct Student *);
void getData(int, struct Student *);
void showOutputOfParticularStudent(int, struct Student *);
void showOutputOfParticularPercentageRange(int, struct Student *);
void menuOfTheProgram(int , struct Student*);
void showOutputofAllStudents(int , struct Student *);
void sortTheArray(int,struct Student*);

// Main Fucntion of the Code
int main()
{
    int no_of_students;

    printf("Enter the Number of Students : ");
    scanf("%d", &no_of_students);

    struct Student stu[no_of_students];
    getData(no_of_students, stu);
    calculateTotalAndPercentage(no_of_students, stu);
    menuOfTheProgram(no_of_students,stu);
    return 0;
}

// Function is made to Get Data as Input fromm User
void getData(int no_of_students, struct Student *stu)
{
    for (int i = 0; i < no_of_students; i++)
    {
        printf("Enter the Name : ");
        getchar();
        gets(stu->name);
        printf("Enter the Roll No : ");
        scanf("%d", &stu->roll_no);
        printf("Enter the Marks in Physics : ");
        scanf("%d", &stu->marks_in_phy);
        printf("Enter the Marks in Maths : ");
        scanf("%d", &stu->marks_in_maths);
        printf("Enter the Marks in English : ");
        scanf("%d", &stu->marks_in_eng);
        printf("Enter the Marks in Computer : ");
        scanf("%d", &stu->marks_in_comp);
        printf("Enter the Marks in Chemistry : ");
        scanf("%d", &stu->marks_in_chem);

        stu++;
    }
}

// Calculating the total marks and the percentage of every Students
void calculateTotalAndPercentage(int no_of_students, struct Student *stu)
{
    int i = 0;
    for (i = 0; i < no_of_students; i++)
    {
        stu->total_marks = stu->marks_in_chem + stu->marks_in_comp + stu->marks_in_eng + stu->marks_in_maths + stu->marks_in_phy;
        stu->percentage = (float)stu->total_marks / 5.0;

        stu++;
    }
}

// Menu of the program to ask the User what to do In the program so this Program runs according to Him !!
void menuOfTheProgram(int no_of_students , struct Student *stu)
{
    int choice_by_user;
    do{

        printf("\n\n\n----------------------------Menu------------------------------\n");
        printf("1. Show the Total marks and the percentage of the Student along with other details :-\n");
        printf("2. Find Details of a particular Student By entering Roll No.:-\n");
        printf("3. Display the Names of Student who are in your entered Percentage Range:-\n");
        printf("4. Sort the Array in Assending Order and Display it :-\n");
        printf("5. Exit the Program:-\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice_by_user);

        switch (choice_by_user)
        {
        case 1:
        showOutputofAllStudents(no_of_students,stu);
        break;
        case 2:
        showOutputOfParticularStudent(no_of_students , stu);
        break;
        case 3:
        showOutputOfParticularPercentageRange(no_of_students,stu);
        break;
        case 4:
        sortTheArray(no_of_students,stu);
        showOutputofAllStudents(no_of_students,stu);
        break;
        case 5 :
        break;
        default:
        printf("Not a Valid Choice :-\n");
        }
    }while(choice_by_user!=5);
}

void showOutputofAllStudents(int no_of_students , struct Student *stu){
    printf("\n\nDetails of All Students :----------\n");
    for(int i=0;i<no_of_students;i++){
        printf("The Name : %s \n",stu->name);
        printf("The Roll No : %d \n",stu->roll_no);
        printf("The Marks in Physics : %d \n",stu->marks_in_phy);
        printf("The Marks in Maths : %d\n",stu->marks_in_maths);
        printf("The Marks in English : %d\n",stu->marks_in_eng);
        printf("The Marks in Computer : %d\n",stu->marks_in_comp);
        printf("The Marks in Chemistry : %d\n",stu->marks_in_chem);
        printf("The total marks : %d \n",stu->total_marks);
        printf("The total Percentage : %f \n\n\n",stu->percentage);

        stu++;
    }
}

void showOutputOfParticularStudent(int no_of_students, struct Student *stu){
    int roll_to_search ;
    int i,count = 0;

    printf("\n\n Input the Roll u want to see Details of :-");
    scanf("%d",&roll_to_search);
    for(i=0;i<no_of_students;i++){
        if(stu->roll_no == roll_to_search){
            count = 1;
            break;
        }
        stu++;
    }
    if(count){
        printf("Found Out Something Check it out :--\n");
        printf("The Name : %s \n",stu->name);
        printf("The Roll No : %d \n",stu->roll_no);
        printf("The Marks in Physics : %d \n",stu->marks_in_phy);
        printf("The Marks in Maths : %d\n",stu->marks_in_maths);
        printf("The Marks in English : %d\n",stu->marks_in_eng);
        printf("The Marks in Computer : %d\n",stu->marks_in_comp);
        printf("The Marks in Chemistry : %d\n",stu->marks_in_chem);
        printf("The total marks : %d \n",stu->total_marks);
        printf("The total Percentage : %f \n\n\n",stu->percentage);
    }
    else
        printf("No Such Directories Found !!");
}

void showOutputOfParticularPercentageRange(int no_of_students,struct Student *stu){
    float lower_range,upper_range;
    printf("\n\n Enter the Lower Range of Percentage : ");
    scanf("%f",&lower_range);
    printf("\n\n Enter the Upper Range of Percentage : ");
    scanf("%f",&upper_range);

    for(int i = 0;i<no_of_students;i++){
        if(lower_range<=(stu->percentage) && upper_range>= (stu->percentage)){
        printf("Enter the Name : %s \n",stu->name);
        printf("Enter the Roll No : %d \n",stu->roll_no);
        printf("Enter the Marks in Physics : %d \n",stu->marks_in_phy);
        printf("Enter the Marks in Maths : %d\n",stu->marks_in_maths);
        printf("Enter the Marks in English : %d\n",stu->marks_in_eng);
        printf("Enter the Marks in Computer : %d\n",stu->marks_in_comp);
        printf("Enter the Marks in Chemistry : %d\n\n\n",stu->marks_in_chem);
        }
        stu++;
    }
}


void sortTheArray(int no_of_students,struct Student *stu){
    struct Student temp;
    struct Student *pointer = stu;
    for(int i = 0;i<no_of_students-1;i++){
        for(int j=0;j<no_of_students-1-i;j++){
            if(stu->total_marks>=(stu+1)->total_marks){
                strcpy(temp.name ,stu->name );
                temp.roll_no = stu->roll_no;
                temp.total_marks = stu->total_marks;
                temp.percentage = stu->percentage;
                temp.marks_in_chem = stu->marks_in_chem;
                temp.marks_in_comp = stu->marks_in_comp;
                temp.marks_in_eng = stu->marks_in_eng;
                temp.marks_in_maths = stu->marks_in_maths;
                temp.marks_in_phy = stu->marks_in_phy;


                strcpy(stu->name,(stu+1)->name);
                stu->roll_no = (stu+1)->roll_no;
                stu->total_marks = (stu+1)->total_marks;
                stu->percentage = (stu+1)->percentage;
                stu->marks_in_chem = (stu+1)->marks_in_chem;
                stu->marks_in_comp = (stu+1)->marks_in_comp;
                stu->marks_in_eng = (stu+1)->marks_in_eng;
                stu->marks_in_maths = (stu+1)->marks_in_maths;
                stu->marks_in_phy = (stu+1)->marks_in_phy;


                strcpy((stu+1)->name,temp.name);
                (stu+1)->roll_no = temp.roll_no;
                (stu+1)->total_marks = temp.total_marks;
                (stu+1)->percentage = temp.percentage;
                (stu+1)->marks_in_chem = temp.marks_in_chem;
                (stu+1)->marks_in_comp = temp.marks_in_comp;
                (stu+1)->marks_in_eng = temp.marks_in_eng;
                (stu+1)->marks_in_maths = temp.marks_in_maths;
                (stu+1)->marks_in_phy = temp.marks_in_phy;
            }
            stu++;
        }
        stu = pointer;
    }
}