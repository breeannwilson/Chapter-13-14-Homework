#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main() {
	//ask the user what file name they are looking for
	string filename;
	cout << "What text file do you want?" << endl;
	getline(cin, filename);

	//creation of object "input"
	ifstream input(filename.c_str());

	//testing file existence
	if (input.fail()) {
		cout << "This file does not exist." << endl;
	}
	//if the file does exist, count the number of characters in file
	else {
		int numchar = 0;
		while (!input.eof()) {
			input.get();
			numchar++;
		}
		//will not count the numchar right after the text ends
		numchar--;
		cout << "The number of characters in the file is: " << numchar << endl;
	}
	system("pause");
}