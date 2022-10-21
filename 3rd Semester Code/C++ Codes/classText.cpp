#include <iostream>
#include <stdlib.h>
using namespace std ;

class Student{
    int data ;
    public :
        void getData(){
            cout << "Enter Data : ";
            cin >> data ;
        }
        void showData(){
            cout << "Data : " << data ;
        }
        void* operator new(size_t size){
            cout << "New Called " << endl ;
            void* temp = ::operator new(size);
            return temp;
        }
};
int main(){
    Student* stu = new Student;
    stu->getData();
    stu->showData();
    return 0 ;
}