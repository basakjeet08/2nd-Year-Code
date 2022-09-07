#include <iostream>
using namespace std;
class TestClass{
    static int count;
    public : 
        TestClass(){
            count++;
        }
        showData(){
            cout << "The Number of Objects : " << count ;
        }
};
int TestClass :: count = 0;
int main(){
    TestClass ob1,ob2,ob3,ob4,ob5,ob6,ob7;
    ob1.showData();
    return 0;
}