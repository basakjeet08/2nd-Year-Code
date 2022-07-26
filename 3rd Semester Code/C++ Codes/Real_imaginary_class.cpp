#include <iostream>
using namespace std;
class Complex{
    private : 
        int img,real;
    public : 
        void getData(int i){
            cout << "\nEnter Details of Number " << i+1 << " : \n";
            cout << "Enter the Real Part : ";
            cin >> real;
            cout << "Enter the Imaginary Part : ";
            cin >> img;
        }
        void showData(int i){
            cout << "Number " << i+1 << " : \n";
            if (img >= 0)
                cout<<real<<" + i"<<img;
            else
                cout<<real<<" - i"<<-img;
        }
};
int main(){
    Complex cm[10];
    for(int i=0;i<10;i++)
        cm[i].getData(i);
    cout << endl;
    cout << "Details of the Complex Numbers are :---\n";
    for(int i=0;i<10;i++)
        cm[i].showData(i);
    return 0;
}