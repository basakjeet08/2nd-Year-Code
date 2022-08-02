#include <iostream>
#include <string>
using namespace std;
struct Student {
    string name;
    int roll;
    int marks[5];
    int total_marks;
    float percentage;
};
void getData(struct Student*,int);
void findTotalPercentage(struct Student*,int);
void menuOfTheProgram(struct Student*,int);
void showData(struct Student*,int);
void showData(struct Student*,int,int);
void showData(struct Student*,int,float,float);
void sortArray(struct Student*,int );
int main(){
    int student_count;
    cout << "Enter the number of Students : ";
    cin >> student_count;
    cin.ignore();
    struct Student stu[student_count];
    getData(stu,student_count);
    findTotalPercentage(stu,student_count);
    menuOfTheProgram(stu,student_count);
    return 0 ;
}
void getData(struct Student* stu,int student_count){
    for(int i = 0;i<student_count;i++){
        cout << "Enter the Details of Student " << i+1 << " : \n";
        cout << "Name : ";
        getline(cin,stu->name);
        cout << "Roll No : ";
        cin >> stu->roll;
        cout << "Enter Marks in 5 subjects with spaces inbetween them :--";
        for(int j=0;j<5;j++)
            cin >> stu->marks[j];
        cout << endl;
        cin.ignore();
        stu++;
    }
}
void menuOfTheProgram(struct Student* stu,int student_count){
    int choice ;
    do{
        cout << "\n";
        cout << "-----------------------------------------------------------\n";
        cout << "1. Show Details of all the Students\n";
        cout << "2. Show details of a student with a given Roll NO. \n";
        cout << "3. Display Details of Student who are in-between a given percent range\n";
        cout << "4. Sort the Array in a ascending Order \n";
        cout << "5. Exit\n";
        cout << "\nEnter Your Choice : ";
        cin >> choice ;

        switch(choice){
            case 1 :
                showData(stu,student_count);
                break;
            case 2 :
                int roll;
                cout << "Enter the Roll No : ";
                cin >> roll;
                showData(stu,student_count,roll);
                break;
            case 3 :
                float ub,lb;
                cout << "Enter the Lower Bound of Percentage : ";
                cin >> lb;
                cout << "Enter the Upper Bound of Percentage : ";
                cin >> ub;
                showData(stu,student_count,lb,ub);
                break;
            case 4 :
                sortArray(stu,student_count);
                showData(stu,student_count);
                break;
            case 5 : 
                break;
            default :
                cout << "Wrong Choice !! Try Again\n";
        }
    }while(choice!=5);
}
void findTotalPercentage(struct Student* stu,int student_count){
    for(int i = 0;i<student_count;i++){
        stu->total_marks = stu->marks[0]+stu->marks[1]+stu->marks[2]+stu->marks[3]+stu->marks[4];
        stu->percentage = (float)stu->total_marks/5.0;
        stu++;
    }
}
void showData(struct Student *stu,int student_count,int given_roll){
    int flag = 0;
    for(int i = 0;i<student_count;i++){
        if(stu->roll == given_roll){
            showData(stu,1);
            flag = 1;
        }
        stu++;
    }
    if(!flag)
        cout << "No Data Found !! \n";
}
void showData(struct Student *stu,int student_count,float lb,float ub){
    for(int i=0;i<student_count;i++){
        if((stu->percentage >= lb) && (stu->percentage<=ub))
            showData(stu,1);
        stu++;
    }
}
void showData(struct Student* stu, int student_count){
    for(int i = 0;i<student_count;i++){
        cout << "Details of Student "<< i+1 <<" : \n";
        cout << "Name : " << stu->name << endl;
        cout << "Roll : " << stu->roll << endl ;
        cout << "Marks : ";
        for(int j = 0;j<5;j++)
            cout << stu->marks[j]<<" ";
        cout << "\n";
        cout << "Total Marks : " << stu->total_marks << endl;
        cout << "Percentage : " << stu->percentage << endl ;
        cout << "\n\n";
        stu++;
    }
}
void sortArray(struct Student *stu,int student_count){
    struct Student temp;
    struct Student *pointer = stu;
    for(int i = 0;i<student_count-1;i++){
        for(int j=0;j<student_count-1-i;j++){
            if(stu->total_marks>=(stu+1)->total_marks){
                temp = *stu;
                *stu = *(stu+1);
                *(stu+1) = temp;
            }
            stu++;
        }
        stu = pointer;
    }
}