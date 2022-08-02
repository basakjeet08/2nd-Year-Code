#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks[5];
};
void getData(struct Student*,int);
int main(){
    int student_count;
    cout << "Enter the number of Students : ";
    cin >> student_count;
    struct Student stu[student_count];
    getData(stu,student_count);


    return 0 ;
}