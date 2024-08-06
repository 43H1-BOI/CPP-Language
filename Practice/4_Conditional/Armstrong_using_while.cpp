#include <iostream>
using namespace std;

int main( ){
    int num , ogNum , rem , res = 0;
    printf("Enter a three-digit integer: ");
    cin >> num;
    ogNum = num;

    while (ogNum != 0){
       // remainder contains the last digit
        rem = ogNum % 10;

        res += rem * rem * rem;

        // removing last digit from the orignal number
        ogNum /= 10;
    }

    if (res == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
