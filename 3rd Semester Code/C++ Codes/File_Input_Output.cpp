#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string input ;
    string output ;
    ofstream myFileWriter("File.txt");
    
    cout << "Enter the data to be added to the File : " << endl;
    for(int i = 0 ;i<3 ;i++){
        getline(cin , input);
        myFileWriter << input;
    }
    myFileWriter.close();
    ifstream myFileReader("File.txt");
    cout << "--------------------OUTPUT--------------------\n";
    while(!myFileReader.eof()){
        getline(myFileReader,output) ;
        cout << output << endl ;
    }
    myFileReader.close();
    return 0 ;
}