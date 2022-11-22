#include <iostream>
using namespace std;
#define MAX 2147483648
class Int{
    long long data;
    public : 
        void getData(){
            cout << "Enter the Int : " ;
            cin >> data ;
        }
        void checkRange(long long temp){
            try{
                if(temp > MAX || temp < -(MAX-1))
                    throw('y');
            }catch(char e){
                cout << "Invalid Operation !!" << endl ;
                exit(1);
            }
        }
        Int operator+(Int ob){
            long long tempData = this->data + ob.data ;
            checkRange(tempData) ;
            Int temp;
            temp.data = tempData;
            return temp ;
        }
        Int operator-(Int ob){
            long long tempData = this->data - ob.data ;
            checkRange(tempData);
            Int temp ;
            temp.data = tempData;
            return temp ;
        }
        Int operator*(Int ob){
            long long tempData = this->data + ob.data ;
            checkRange(tempData);
            Int temp ;
            temp.data = tempData;
            return temp ;
        }
        Int operator/(Int ob){
            Int temp ;
            temp.data = this->data / ob.data ;
            return temp ;
        }
        void showData(){
            cout << "The Answer : " << data << endl;
        }
};
int main(){
    Int s1 , s2 , s3;
    s1.getData();
    s2.getData();
    s3 = s1 * s2 ;
    s3.showData();
    return 0;
}