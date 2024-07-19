#include <iostream>
using namespace std;

// Program for Friend Class
class MCA
{
public:
    void Show()
    {
        cout << "Show () of MCA" << endl;
    }
    friend class MTech;
    // Here MTech is a Friend of MCA Class but MCA
};

class MTech
{
public:
    void Show()
    {
        MCA x;
        x.Show();
        cout << "Show () of MTech" << endl;
    }
};

int main()
{
    MTech Abhi;
    Abhi.Show();
    return 0;
}