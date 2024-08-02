#include <iostream>
using namespace std;

int main() {
	string name;
	string surname;
	string copyName;
	// String is an array of Char Data members

	cout << "Enter your Name : ";

	cin >> name;
	// this will take word as input and will get terminated after space
	// if we get length of string which got it's input from cin then it will give us 1 increased length

	cout << "Enter your Surname : ";
	getline(cin >> ws , surname);
	// this will take a sentence as input ( including spaces)
	/*
		the above line is written in case if there is already a cin used before the getline()
		function, a problem occurs , the problem with getline() function is it also reads the
		\n (new line character) which is already set with cin and this makes getline() function
		thinks that the user has inputed it's data and proceeded to next line

		getline(cin >> ws , name);
		Above Line will terminate any whitespace before currunt input
	*/

	cout << endl;

	// methods related to string in C++
	// To append Another strig after existing string
	// returns nothing
	cout << "To append Another strig after existing string :: " << endl;
	name.append(" ");	  // appending space
	name.append(surname); // appending another string
	// after appending surname to name
	cout << "Your name is " << name << endl;

	cout << endl;

	// To get length of String (included spaces)
	// name.length();
	// returns integer value
	cout << "To get length of String (included spaces) :: " << endl;
	cout << "Length of your Full Name is : " << name.length() << " characters." << endl;

	cout << endl;

	// To check if a string is empty or not
	// name.empty();
	// returns true or false
	cout << "To check if a string is empty or not :: " << endl;
	if (name.empty() && surname.empty()) {
		cout << "No Name Found" << endl;
	}
	else {
		cout << "Hello " << name << endl;
	}
	cout << endl;

	// To Insert any string at given index
	// name.insert(index,"your string");
	cout << "To Insert any string at given index :: " << endl;
	surname.insert(0 , "Mr./Mrs. ");
	cout << "Hello " << surname << endl;

	cout << endl;

	// To Clear value of String
	// returns nothing
	cout << "To Clear value of String :: " << endl;
	name.clear();
	cout << "Hello " << name << surname << endl;

	cout << endl;

	// To Erase a specific portion from string
	// name.erase(starting Index , Ending Index);
	cout << "To Erase a specific portion from string :: " << endl;
	surname.erase(0 , 9);
	cout << "Surname =" << surname << endl;

	cout << endl;

	// To get character at given index
	// name.at(index);
	cout << "To get character at given index :: " << endl;
	int index;
	cout << "Enter Index to find character in " << surname << " : ";
	cin >> index;
	cout << "Character at Index " << index << " in your surname = " << surname.at(index) << endl;

	cout << endl;

	// To find index of any character
	// name.find('char');
	// returns integer
	// if returns -1 means not present
	cout << "To find index of any character :: " << endl;
	char nemo;
	cout << "Enter character to find : ";
	cin >> nemo;

	if (surname.find(nemo) == -1) {
		cout << nemo << " not Found." << endl;
	}
	else {
		cout << surname.find(nemo) << endl;
	}

	return 0;
}
