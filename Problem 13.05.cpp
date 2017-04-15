#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int year = 0;
	int rank = 0;
	char gender = NULL;
	string name;
	string file;
	string boyname, girlname;
	string boyfrequency, girlfrequency;

	cout << "Please enter the year: " << endl;
	cin >> year;
	cout << "Please enter the gender, M or F: " << endl;
	cin >> gender;
	cout << "Please enter the name: " << name << endl;
	cin >> name;
	
	//find the file based on the year the user typed in
	//from 2010-2016 for the pages on github
	if (year == 2010) {
		file = "C:\\Users\\breeannwilson\\Desktop\\Babynamesranking2010.txt";
	}
	else if (year == 2011) {
		file = "C:\\Users\\breeannwilson\\Desktop\\Babynamesranking2011.txt";
	}
	else if (year == 2012) {
		file = "C:\\Users\\breeannwilson\\Desktop\\Babynamesranking2011.txt";
	}
	else if (year == 2013) {
		file = "C:\\Users\\breeannwilson\\Desktop\\Babynamesranking2011.txt";
	}
	else if (year == 2014) {
		file = "C:\\Users\\breeannwilson\\Desktop\\Babynamesranking2011.txt";
	}

	//open the file
	ifstream input(file);

	//if the file doesn't exist
	if (input.fail()) {
		cout << "This file does not exist.";
		return 0;
	}

	//find the gender and match it with the gender's name and display rank
	while (input) {
		input >> rank >> boyname >> boyfrequency >> girlname >> girlfrequency;
		if (gender == 'M' || gender == 'm') {
			if (name == boyname) {
				cout << name << " is ranked " << rank << " in the year " << year << " with frequency "
					<< boyfrequency << endl;
			}
			else
				cout << "This name is not on the list." << endl;
		}
		else if (gender == 'F' || gender =='f') {
			if (name == girlname) {
				cout << name << " is ranked " << rank << " in the year " << year << " with frequency "
					<< girlfrequency << endl;
			}
			else
				cout << "This name is not on the list." << endl;
		}
	}
	
	//close the file
	input.close();

	return 0;
	
	
}