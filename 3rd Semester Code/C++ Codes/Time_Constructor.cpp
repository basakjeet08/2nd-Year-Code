#include <iostream>
using namespace std;
class Time{
    private : 
        int hour,min,sec;
    public : 
        Time(){
            hour = 0;
            min = 0;
            sec = 0;
        }
        Time(int hour,int min,int sec){
            this->hour = hour;
            this->min = min;
            this->sec = sec;
        }
        Time(Time *ob){
            hour = ob->hour;
            min = ob->min;
            sec = ob->sec;
        }
        showData(){
            cout << "HH:MM:SS :-> " << hour << ":"<< min << ":"<< sec << endl;
        }
};
int main(){
    Time t1;
    Time t2(22,0,54);
    Time t3(&t2);
    t1.showData();
    t2.showData();
    t3.showData();
}