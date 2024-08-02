#include <iostream>
using namespace std;

class Operations
{
protected:
    int a , b;

public:
    void input() {
        cout << "Enter Value of A and B :" << endl;
        cin >> a >> b;
    }
    void show() {
        cout << "Value of A is : " << a << endl;
        cout << "Value of B is : " << b << endl;
    }
    friend class Sum;
};

class Sum
{
public:
    void sum(Operations& Temp) {
        cout << "Sum of A and B is : " << Temp.a + Temp.b << endl;
    }
};

class Subt : public Sum , public Operations
{
public:
    void subt() {
        cout << "Subtraction of A and B is : " << a - b << endl;
    }
};

int main() {
    Subt Abhi;
    Abhi.input();
    Abhi.show();
    Abhi.sum(Abhi);
    Abhi.subt();
    return 0;
}