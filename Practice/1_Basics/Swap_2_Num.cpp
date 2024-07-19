#include <iostream>
using namespace std;

// Swaping using third variable
void Swap_1(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Swaping without third variable
void Swap_2(int &x, int &y)
{
    // x = 5 , y = 4
    x = x + y; // x = 5 + 4 = 9
    y = x - y; // y = 9 - 4 = 5
    x = x - y; // x = 9 - 5 = 4
}

int main()
{
    int a, b;
    cout << "Program to Swap Two Numbers : " << endl;
    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;

    cout << "\nGiven Numbers : " << endl;
    cout << "1st Num = " << a << endl;
    cout << "2nd Num = " << b << endl;

    /*
        // Swap
        {
            int temp = a;
            a = b;
            b = temp;
        }
    */
    Swap_2(a, b);
    cout << "\nNumbers Swapped Successfully !" << endl;
    cout << "1st Num = " << a << endl;
    cout << "2nd Num = " << b << endl;

    return 0;
}