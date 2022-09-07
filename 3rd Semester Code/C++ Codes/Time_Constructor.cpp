#include <iostream>
using namespace std;
class Time{
    private : 
        int hour,min;
    public : 
        Time(){
            hour = 0;
            min = 0;
        }
        Time(int hour,int min=0){
            this->hour = hour;
            this->min = min;
        }
        Time(Time &ob){
            hour = ob.hour;
            min = ob.min;
        }
        showData(){
            cout << "HH:MM:SS :-> " << hour << ":"<< min << endl;
        }
};
int main(){
    int hour,min;
    cout << "Enter the Time in Hour : ";
    cin >> hour;
    cout << "Enter the Time in Min : ";
    cin >> min; 
    Time t1;
    Time t2(hour,min);
    Time t3(t2);
    t1.showData();
    t2.showData();
    t3.showData();
}