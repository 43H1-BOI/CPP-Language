#include <iostream>
using namespace std;

// cin >> (Insertion Operator)
// cout << (Exertion Operator)
int main() {

    string name;
    cout << "Enter your Full Name : ";
    getline(cin >> ws , name); // to read a string that also contains spaces
                              /*
                              the above line is written in case if there is already a cin used before the getline()
                              function, a problem occurs , the problem with getline() function is it also reads the
                              \n (new line character) which is already set with cin and this makes getline() function
                              thinks that the user has inputed it's data and proceeded to next line

                              getline(cin >> ws , name);
                              Above Line will terminate any whitespace before currunt input
                              */

    int age;
    cout << "Enter Your Age : ";
    cin >> age; // to get user input

    string nationality;
    cout << "Enter your Nationality : ";
    cin >> nationality; // to read a string which gets terminated after a space

    cout << "Hello " << name << " , " << endl;
    cout << "Your are " << age << " years old." << endl;
    cout << "You are " << nationality << endl;
}