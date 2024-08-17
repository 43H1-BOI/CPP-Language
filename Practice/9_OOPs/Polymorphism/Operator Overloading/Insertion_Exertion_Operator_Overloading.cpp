#include<iostream>
#include<string.h>
using namespace std;

class Student {
    int RollNum;
    char Name[ ];
public:
    friend void operator<<(ostream& out , Student& Demo1);
    friend void operator>>(istream& in , Student& Demo2);
};

void operator<<(ostream& out , Student& Demo1){
    out << Demo1.RollNum << endl;
    out << Demo1.Name << endl;
}

void operator>>(istream& in , Student& Demo2){
    in >> Demo2.RollNum;
    in >> Demo2.Name;
}

int main( ){
    Student Abhi;
    cout << "Program to Overload << & >> Operators" << endl;
    cin >> Abhi;
    cout << Abhi;
    return 0;
}