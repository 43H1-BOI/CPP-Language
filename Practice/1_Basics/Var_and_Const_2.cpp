#include <iostream>
using namespace std;

int main() {
    // Variables and DataTypes
    // **int** --> *Stores integers* -- *2 or 4 bytes*
    int marks = 99;
    int year = 2005;

    cout << "Marks = " << marks << endl;

    // **float** --> *Floating Point Number , 6 or 7 Decimal Places* -- *4 bytes*
    float price = 69.99;
    float gpa = 8.7;

    cout << "GPA = " << gpa << endl;

    // **double** --> *Stores floating point numbers , 15 Decimal Places* -- *8 bytes*
    double Small_Num = 1.424354453332;
    double Big_Num = 1424354453332;

    cout << "Small Number = " << Small_Num << endl;

    // **bool** --> *Stores True or False / 1 or 0* -- *1 byte*
    bool is_Student = true;
    bool is_Adult = false;

    cout << "is Student ? = " << is_Student << endl;
    /*ṇ
    bool is_Student = 1; // Referred as true
    bool is_Adult = 0; // Referred as false
    */

    // **char** --> *Stores single characters* -- *1 byte*
    char dollar = '$';
    char FirstLetter = 'A';

    cout << "Dollar Sign = " << dollar << endl;

    // **string** --> *Sentence or couple of words , stores text* -- *Changes Accordingly*
    string name = "Abhi";
    string country = "India";

    cout << "Name = " << name << " & Country = " << country << endl;

    // Constants
    const double PI = 3.14159265359;

    cout << "Value of PI = " << PI << endl;

    // PI = 3.14159; // will not work because PI is read only Variable
    // If using const keyword , use all capitals for Naming of Constant Variable
    // (It Increases in readability of Code)

    return 0;
}