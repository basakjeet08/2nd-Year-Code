// 4-WAP to convert hour format to minutes format and vice versa.
/*
    3-WAP to convert Class type to Class type.
        ii- By using casting operator
*/
#include <iostream>
using namespace std;
class Minute{
    int min ;
    public : 
        Minute(int min){
            this->min = min*60 ;
        }
        void showData(){
            cout << "Minutes : " << min << endl;
        }
};
class Hour{
    int hour;
    public : 
        void getData(){
            cout << "Enter Hour : " ;
            cin >> hour;
        }
        operator Minute(){
            Minute m(hour);
            return m;
        }
};
int main(){
    Hour h1;
    h1.getData();
    Minute m = h1 ;
    m.showData();
    return 0 ;
}