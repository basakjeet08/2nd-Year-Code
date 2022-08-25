#include <iostream>
using namespace std ;
class Printing{
    public : 
        void getData(){
            int n;
            char ch;
            cout << "Enter the Character : ";
            scanf("%c",&ch);
            cout << "Enter the Number : ";
            cin >> n;
            if((n != 0) && (ch != '\n'))
                showData(n,ch);
            else if((n != 0) && (ch == '\n'))
                showData(n);
            else if((n == 0) && (ch != '\n'))
                showData(80,ch);
            else
                showData();
        }
        void showData(int n = 80 , char ch = '*'){
            for(int i=0;i<n;i++)
                cout << ch << endl;
        }
};
int main(){
    Printing p;
    p.getData();
    return 0 ;
}