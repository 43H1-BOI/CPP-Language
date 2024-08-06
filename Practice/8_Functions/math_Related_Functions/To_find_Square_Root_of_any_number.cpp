#include<iostream>
#include<cmath>
using namespace std;

int main( ){
    int num;
    double SquareRoot;
    cout << "Enter the Number :  ";
    cin >> num;

    SquareRoot = sqrt(num);
    printf("Square Root of %d is %lf " , num , SquareRoot);

    return 0;
}