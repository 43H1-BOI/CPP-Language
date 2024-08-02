// Example for Explicit Default Cons.
#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int rno;
    char name[50];
    float marks;

public:
    student() { //  Explicit Default constructor
        cout << "Enter Roll No : ";
        cin >> rno;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Marks : ";
        cin >> marks;
    }

    student(student& obj) { //  Copy constructor
        rno = obj.rno;
        strcpy(name , obj.name);
        marks = obj.marks;
        cout << "Copy Constructor Called !" << endl;
    }

    void display() {
        cout << "Roll No. : " << rno << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    student s;
    cout << "Students Data : " << endl;
    cout << endl;
    s.display();
    student s1(s);
    student s2 = s;
    s1.display();
    s2.display();
    return 0;
}