#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int roll_no;
    int marks_in_phy,marks_in_eng,marks_in_maths,marks_in_comp,marks_in_chem;

};

void getData(int , struct Student* );
void showOutput(int , struct Student* );
int main(){
    int no_of_students;

    cout << "Enter the Number of Students : ";
    cin >> no_of_students;
    cin.ignore();
    
    struct Student stu[no_of_students];
    getData(no_of_students,stu);
    showOutput(no_of_students,stu);
    return 0;
}
void getData(int no_of_students,struct Student* stu){
    for(int i=0;i<no_of_students;i++){
        cout << "Enter the Name : ";
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
        cin.ignore();

        stu++;
    }
}

void showOutput(int no_of_students , struct Student *stu){
    cout << ("\n\n");
    for(int i=0;i<no_of_students;i++){
        cout << "Enter the Name : " << stu->name<<"\n";
        cout << "Enter the Roll No : " <<stu->roll_no<< "\n";
        cout << "Enter the Marks in Physics : "<<stu->marks_in_phy << "\n";
        cout << "Enter the Marks in Maths : " << stu->marks_in_maths << "\n";
        cout << "Enter the Marks in English : " << stu->marks_in_eng << "\n";
        cout << "Enter the Marks in Computer : "<<stu->marks_in_comp << "\n";
        cout << "Enter the Marks in Chemistry : "<<stu->marks_in_chem << "\n";
        stu++;
    }
}