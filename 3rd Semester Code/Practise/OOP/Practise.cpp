#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	string line;
	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	fout.open("sample.txt", ios::app);
	// fout.open("sample.txt");
	while (fout) {
		getline(cin, line);
		if (line == "-1")
			break;
		fout << line << endl;
	}
	fout.close();
	ifstream fin;
	fin.open("sample.txt");
	while (getline(fin, line)) {
		cout << line << endl;
	}
	fin.close();
	return 0;
}
