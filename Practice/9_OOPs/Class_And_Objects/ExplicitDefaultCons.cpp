// Example for Explicit Default Cons.
#include<iostream>
using namespace std;

class student{
    int rno;
    char name[50];
    double fee;

public:
    student( ){   //  Explicit Default constructor
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
    }

    void display( ){
        cout << rno << "\t : " << name << endl;
    }
};


int main( ){
    student s;
    cout << "Roll No. " << " : " << "Name" << endl;
    s.display( );
    return 0;
}