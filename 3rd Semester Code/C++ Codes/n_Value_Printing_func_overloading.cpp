#include <iostream>
using namespace std;
class Printing{
    public :
        void getData(){
            int n;
            char c;
            cout << "Enter the Character : ";
            scanf("%c",&c);
            cout << "Enter the Number : ";
            cin >> n;
            if((n != 0) && (c != '\n'))
                showData(n,c);
            else if((n != 0) && (c == '\n'))
                showData(n);
            else if((n == 0) && (c != '\n'))
                showData(c);
            else
                showData();
        }
        void showData(int n,char c){
            for(int i=0;i<n;i++)
                cout << c << endl;
        }
        void showData(int n){
            for(int i=0;i<n;i++)
                cout << '*' << endl;
        }
        void showData(char c){
            for(int i=0;i<80;i++)
                cout << c << endl;
        }
        void showData(){
            for(int i=0;i<80;i++)
                cout << '*' << endl;
        }
};
int main(){
    Printing p;
    p.getData();
    return 0 ;
}