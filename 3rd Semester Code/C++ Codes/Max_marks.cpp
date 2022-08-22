#include <iostream>
using namespace std ;
class Student {
    private : 
        int marks ;
    public : 
        void input(){ 
            cin >> marks ;
        }
        int giveData(){
            return marks ;
        }
};
int main(){
    Student stu[10];
    cout << "Enter the Numbers : ";
    for(int i=0;i<5;i++)
        stu[i].input();
    int max = stu[0].giveData();
    for(int i=0;i<5;i++)
        if(max < stu[i].giveData())
            max = stu[i].giveData();

    cout << "The Maximum element : " << max << endl;
    return 0 ;
}