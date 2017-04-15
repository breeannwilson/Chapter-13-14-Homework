#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
	
	//declare the object "output"
	ofstream output;

	//open the file in quotes, if does not exist-->creates, if it exists-->appends
	output.open("Exercise13_1.txt", ios::app);

	//generate 100 random numbers and put them into object "output"
	srand(time(0));
	for (int i = 1; i < 100; i++) {
		int r = rand() % 100;
		output << " " << r;
	}

	//close file
	output.close();

	return 0;
}