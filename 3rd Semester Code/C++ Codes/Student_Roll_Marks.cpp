#include <iostream>
#include <string>
using namespace std ;
struct Student{
    int roll;
    string name;
    int marks[5];
};
void showData(struct Student *,int);
void getData(struct Student*,int);
int main(){
    int no_of_students;
    cout << "Enter the Number of Students : ";
    cin >> no_of_students;
    cin.ignore();
    struct Student S[no_of_students];
    getData(S,no_of_students);
    showData(S,no_of_students);
    return 0;
}
void getData(struct Student* stu,int no_of_students){
    for(int i = 0;i<no_of_students;i++){
        cout << "Enter Details of Student " << i+1 << " : \n";
        cout << "Name : ";
        getline(cin,stu->name);
        cout << "Roll No. : ";
        cin >> stu->roll;
        cout << "Enter the Marks in a single Line with space : ";
        for(int j=0;j<5;j++)
            cin >> stu->marks[j];
        cin.ignore();
        cout << "\n\n";
        stu++;
    }
}
void showData(struct Student* stu, int no_of_students){
    for(int i = 0;i<no_of_students;i++){
        cout << "Details of Student "<< i+1 <<" : \n";
        cout << "Name : " << stu->name << endl;
        cout << "Roll : " << stu->roll << endl ;
        cout << "Marks : ";
        for(int j = 0;j<5;j++)
            cout << stu->marks[i]<<" ";
        cout << "\n\n";
        stu++;
    }

}