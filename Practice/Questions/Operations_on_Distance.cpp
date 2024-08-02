/*
Assignment 10 : Final Draft
Write a menu driven program for addition, subtraction, display result of two distances (given in meter and centimetre) .
Overload ‘+’ operator with member function
Overload ‘–‘ operator using friend function
Overload << and >> operator

*/

#include <iostream>
using namespace std;

class Distance
{
    float m;  // in meters
    float cm; // in centimetres
    float inMeter;
    float inCentiMeter;

public:
    Distance() {
        m = 0.0;
        cm = 0.0;
        inMeter = 0.0;
        inCentiMeter = 0.0;
    }
    // Display Functions
    void DispinMeter() {
        inMeter = m + (cm / 100);
        cout << "Distance (in m) = " << inMeter << " meters" << endl;
    }
    void DispinCentiMeter() {
        inCentiMeter = cm + (m * 100);
        cout << "Distance ( in cm) = " << inCentiMeter << " centimeters" << endl;
    }
    // Overloading Operators
    Distance operator+(Distance& Temp) {
        Distance Sum;
        Sum.m = m + Temp.m;
        Sum.cm = cm + Temp.cm;
        return Sum;
    }
    Distance operator-(Distance& Temp) {
        Distance Sub;
        Sub.m = m - Temp.m;
        Sub.cm = cm - Temp.cm;
        if (Sub.m < 0 && Sub.cm < 0) {
            cout << "Subtraction Not Possible . Results may not be Negative" << endl;
            Sub.m = 0;
            Sub.cm = 0;
        }
        return Sub;
    }
    friend void operator<<(ostream& out , Distance& Temp);
    friend void operator>>(istream& in , Distance& Temp);
};

void operator<<(ostream& out , Distance& Temp) {
    Temp.DispinMeter();
    Temp.DispinCentiMeter();
}

void operator>>(istream& in , Distance& Temp) {
    cout << "Enter Distance in Meters : ";
    in >> Temp.m;
    cout << "Enter Distance in Centimetres : ";
    in >> Temp.cm;
}

int main() {
    Distance d1 , d2 , result;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add two distances\n";
        cout << "2. Subtract two distances\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first distance:\n";
                cin >> d1;
                cout << "Enter second distance:\n";
                cin >> d2;
                result = d1 + d2;
                cout << result;
                break;
            case 2:
                cout << "Enter first distance:\n";
                cin >> d1;
                cout << "Enter second distance:\n";
                cin >> d2;
                result = d1 - d2;
                cout << result;
                break;
            case 3:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}

// Abhi tak Sahi Chal Taha Raha he ye
