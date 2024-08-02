#include <iostream>
using namespace std;

void FunUP(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    n--;
    FunUP(n);
}

void FunDN(int n)
{
    if (n == 0)
        return;
    FunDN(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter any Number : ";
    cin >> n;
    FunUP(n);

    cout << endl;
    cout << endl;

    FunDN(n);
    /*
    //To Print from 1 to n without recursion
    for ( int i = 1 ; i <= n ; i ++)
    {
        printf("%d\n",i);
    }

    //To Print from n to 1 without recursion
    for ( int i = n ; i >=1 ; i--)
    {
        printf("%d\n",i);
    }
    */
    return 0;
}