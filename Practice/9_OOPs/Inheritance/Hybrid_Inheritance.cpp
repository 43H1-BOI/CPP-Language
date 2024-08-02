#include <iostream>
#include <string.h>
using namespace std;

// Code for Hybrid Inheritance

class Student {
protected:
    char name[10];
    int roll_no;
    int sem;

public:
    void getData();
    void showData();
};

void Student::getData() {
    cout << "Enter Data of Student : " << endl;
    cout << "Enter Full Name : ";
    cin >> name;
    cout << "Enter Roll Number : ";
    cin >> roll_no;
    cout << "Enter Semester (in number) : ";
    cin >> sem;
}

void Student::showData() {
    cout << "Student's Data : " << endl;
    cout << "Name : ";
    puts(name);
    cout << "Roll Number : " << roll_no << endl;
    cout << "Semester : " << sem << endl;
}

class Test : virtual public Student {
protected:
    int marks;
    int english , maths , science;

public:
    void getTestMarks();
    void showTestMarks();
};

void Test::getTestMarks() {
    cout << "Enter Test Marks : " << endl;
    cout << "Maths : ";
    cin >> maths;
    cout << "Science : ";
    cin >> science;
    cout << "English : ";
    cin >> english;
}

void Test::showTestMarks() {
    cout << "Test Marks are : " << endl;
    cout << "Maths : " << maths << endl;
    cout << "Science : " << science << endl;
    cout << "English : " << english << endl;
    marks = english + maths + science;
    cout << "Total Marks : " << marks << endl;
}

class Sports : virtual public Student {
protected:
    int grade;

public:
    void getGrade();
    void showGrade();
};

void Sports::getGrade() {
    cout << "Enter Sports Grade (in numbers) : " << endl;
    cin >> grade;
}

void Sports::showGrade() {
    cout << "Sports Grades are : " << grade << endl;
}

class Result : virtual public Test , virtual public Sports {
public:
    void makeResult();
    void showResult();
};

void Result::makeResult() {
    getData();
    getTestMarks();
    getGrade();
    cout << "Result Created Successfully !! " << endl;
}

void Result::showResult() {
    cout << "Result : " << endl;
    showData();
    showTestMarks();
    showGrade();
    cout << "Result Shown Successfully !! " << endl;
}

int main() {
    Result Abhi , Tushar;
    Abhi.makeResult();
    Abhi.showResult();
    return 0;
}