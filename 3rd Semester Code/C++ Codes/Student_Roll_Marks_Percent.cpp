#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
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

    cout << "Enter the Number of Students : ";
    cin >> no_of_students;

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
        cout << "Enter the Name : ";
        cin.ignore();
        getline(cin,stu->name);
        cout << "Enter the Roll No : ";
        cin >> stu->roll_no;
        cout << "Enter the Marks in Physics : ";
        cin >> stu->marks_in_phy;
        cout << "Enter the Marks in Maths : ";
        cin >> stu->marks_in_maths;
        cout << "Enter the Marks in English : ";
        cin >> stu->marks_in_eng;
        cout << "Enter the Marks in Computer : ";
        cin >> stu->marks_in_comp;
        cout << "Enter the Marks in Chemistry : ";
        cin >> stu->marks_in_chem;

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

        cout << "\n\n\n----------------------------Menu------------------------------\n";
        cout << "1. Show the Total marks and the percentage of the Student along with other details :-\n";
        cout << "2. Find Details of a particular Student By entering Roll No.:-\n";
        cout << "3. Display the Names of Student who are in your entered Percentage Range:-\n";
        cout << "4. Sort the Array in Assending Order and Display it :-\n";
        cout << "5. Exit the Program:-\n";
        cout << "Enter Your Choice : ";
        cin >>choice_by_user;

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
        cout << "Not a Valid Choice :-\n";
        }
    }while(choice_by_user!=5);
}

void showOutputofAllStudents(int no_of_students , struct Student *stu){
    cout << "\n\nDetails of All Students :----------\n";
    for(int i=0;i<no_of_students;i++){
        cout << "The Name : "<< stu->name << "\n";
        cout << "The Roll No : "<< stu->roll_no << "\n";
        cout << "The Marks in Physics : "<< stu->marks_in_phy << "\n";
        cout << "The Marks in Maths : "<< stu->marks_in_maths << "\n";
        cout << "The Marks in English : "<< stu->marks_in_eng << "\n";
        cout << "The Marks in Computer : "<< stu->marks_in_comp << "\n";
        cout << "The Marks in Chemistry : "<< stu->marks_in_chem << "\n";
        cout << "The total marks : " << stu->total_marks << "\n";
        cout << "The total Percentage : " << stu->percentage << "\n\n\n";

        stu++;
    }
}

void showOutputOfParticularStudent(int no_of_students, struct Student *stu){
    int roll_to_search ;
    int i,count = 0;

    cout << "\n\n Input the Roll u want to see Details of :-";
    cin >> roll_to_search;
    for(i=0;i<no_of_students;i++){
        if(stu->roll_no == roll_to_search){
            count = 1;
            break;
        }
        stu++;
    }
    if(count){
        cout << "Found Out Something Check it out :--\n";
        cout << "The Name : " << stu->name << "\n";
        cout << "The Roll No : " << stu->roll_no << "\n";
        cout << "The Marks in Physics : " << stu->marks_in_phy << "\n";
        cout << "The Marks in Maths : " << stu->marks_in_maths << "\n";
        cout << "The Marks in English : " << stu->marks_in_eng << "\n";
        cout << "The Marks in Computer : " << stu->marks_in_comp << "\n";
        cout << "The Marks in Chemistry : " << stu->marks_in_chem << "\n";
        cout << "The total marks : " << stu->total_marks << "\n";
        cout << "The total Percentage : " << stu->percentage << "\n\n\n";
    }
    else
        printf("No Such Directories Found !!");
}

void showOutputOfParticularPercentageRange(int no_of_students,struct Student *stu){
    float lower_range,upper_range;
    cout << "\n\n Enter the Lower Range of Percentage : ";
    cin >> lower_range;
    cout << "\n\n Enter the Upper Range of Percentage : ";
    cin >> upper_range;

    for(int i = 0;i<no_of_students;i++){
        if(lower_range<=(stu->percentage) && upper_range>= (stu->percentage)){
        cout << "Enter the Name : " << stu->name << "\n";
        cout << "Enter the Roll No : " << stu->roll_no << "\n";
        cout << "Enter the Marks in Physics : "<< stu->marks_in_phy << "\n";
        cout << "Enter the Marks in Maths : " << stu->marks_in_maths << "\n";
        cout << "Enter the Marks in English : " << stu->marks_in_eng << "\n";
        cout << "Enter the Marks in Computer : " << stu->marks_in_comp << "\n";
        cout << "Enter the Marks in Chemistry : " << stu->marks_in_chem << "\n\n\n";
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
                temp.name = stu->name ;
                temp.roll_no = stu->roll_no;
                temp.total_marks = stu->total_marks;
                temp.percentage = stu->percentage;
                temp.marks_in_chem = stu->marks_in_chem;
                temp.marks_in_comp = stu->marks_in_comp;
                temp.marks_in_eng = stu->marks_in_eng;
                temp.marks_in_maths = stu->marks_in_maths;
                temp.marks_in_phy = stu->marks_in_phy;


                stu->name = (stu+1)->name;
                stu->roll_no = (stu+1)->roll_no;
                stu->total_marks = (stu+1)->total_marks;
                stu->percentage = (stu+1)->percentage;
                stu->marks_in_chem = (stu+1)->marks_in_chem;
                stu->marks_in_comp = (stu+1)->marks_in_comp;
                stu->marks_in_eng = (stu+1)->marks_in_eng;
                stu->marks_in_maths = (stu+1)->marks_in_maths;
                stu->marks_in_phy = (stu+1)->marks_in_phy;


                (stu+1)->name = temp.name;
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