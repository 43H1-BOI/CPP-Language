#include <iostream>
using namespace std;

int print_Till_N(int x)
{
    cout << " ";
    if (x == 1)
        return 1;
    printf("%d ", x);
    x = print_Till_N(x - 1);
    return x;
}
int main()
{
    int num, fact;
    cout << "\nEnter any Number :- " << endl;
    cin >> num;

    cout << "Printing Numbers from 1 to " << num << " : " << endl;
    cout << print_Till_N(num) << endl;
    return 0;
}