#include <iostream>
using namespace std;

class Operations
{
protected:
    int a, b;

public:
    void input()
    {
        cout << "Enter Value of A and B :" << endl;
        cin >> a >> b;
    }
    void show()
    {
        cout << "Value of A is : " << a << endl;
        cout << "Value of B is : " << b << endl;
    }
};

class Sum : public Operations
{
public:
    void sum()
    {
        cout << "Sum of A and B is : " << a + b << endl;
    }
};

class Subt : public Sum
{
public:
    void subt()
    {
        cout << "Subtraction of A and B is : " << a - b << endl;
    }
};

int main()
{
    Subt Abhi;
    Abhi.input();
    Abhi.show();
    Abhi.sum();
    Abhi.subt();
    return 0;
}