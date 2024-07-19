#include <iostream>
using namespace std;

class Date
{
    int dd, mm, yy;

public:
    void operator++();
    void month(int days);
    friend void operator<<(ostream &out, Date &Demo);
    friend void operator>>(istream &in, Date &Demo);
};

void Date ::month(int days)
{
    if (dd > 0 && dd < days)
    {
        ++dd;
    }
    else if (dd == days)
    {
        dd = 1;
        if (mm == 12)
        {
            mm = 1;
            ++yy;
        }
        else
        {
            ++mm;
        }
    }
    else
    {
        cout << "Not a Valid Date" << endl;
    }
}

void Date ::operator++()
{
    if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
    {
        month(31);
    }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        month(30);
    }
    else if (mm == 2)
    {
        if (yy % 4 == 0)
        {
            month(29);
        }
        else
        {
            month(28);
        }
    }
    else
    {
        cout << "Not a Valid Date" << endl;
    }
}

void operator<<(ostream &out, Date &Demo)
{
    out << Demo.dd << " / " << Demo.mm << " / " << Demo.yy << endl;
}

void operator>>(istream &in, Date &Demo)
{
    in >> Demo.dd >> Demo.mm >> Demo.yy;
}

int main()
{
    int choice;
    Date Abhi;
    cout << "Program to Increament Any Date :)" << endl;
    cout << "Enter any Date :: (DD MM YYYY)" << endl;
    cin >> Abhi;
    cout << endl;
    do
    {
        cout << "1 --> Enter New Date " << endl;
        cout << "2 --> Print Next Date " << endl;
        cout << "3 --> Restart Program " << endl;
        cout << "4 --> Exit Program " << endl;
        cout << "Choose Any Option :: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> Abhi;
            cout << Abhi;
            cout << endl;
            break;
        case 2:
            ++Abhi;
            cout << "Next Date is : " << Abhi;
            cout << endl;
            break;
        case 3:
            cout << "Restarting Program !! " << endl;
        case 4:
            cout << "Exiting Program !! " << endl;
            break;
        default:
            cout << "Invalid Input !! " << endl;
            cout << "Please Try Again ." << endl;
        }
    } while (choice != 4);
    return 0;
}