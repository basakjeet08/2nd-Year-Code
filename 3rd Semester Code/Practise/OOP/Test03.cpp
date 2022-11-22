#include <iostream>
using namespace std;
class Bank{
    int noOfPerson ;
    public :
        Bank(){
            noOfPerson = 0 ;
        }
        void operator++(){
            noOfPerson++;
        }
        void operator--(){
            noOfPerson--;
        }
        void showData(){
            cout << "The Number of person : " << noOfPerson << endl ;
        }
};
int main(){
    Bank ob ;
    int choice ;
    do{
        cout << "1. Person Entered " << endl ;
        cout << "2. Person Left " << endl ;
        cout << "3. Show Present Person " << endl ;
        cout << "4. Exit " << endl ;
        cout << "Enter your choice : " ;
        cin >> choice ;
        switch(choice){
            case 1 : 
                ++ob;
                break;
            case 2 : 
                --ob;
                break;
            case 3 : 
                ob.showData();
                break;
        }
    }while(choice != 4);
    return 0 ;
}