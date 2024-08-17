#include<iostream>
using namespace std;

int main( ){
    cout << "Program to Check Weather a Number is Pallindrome or Not .\n" << endl;

    int num;
    cout << "Enter a Number : ";
    cin >> num;

    int rem , cpy , rev = 0;

    cpy = num; // Copy of OG Num

    while (num > 0){
        rem = num % 10; // Stores Remainder of num % 10 OR gets last digit of num
        num /= 10; // Removing Last Digit of Num
        rev = (rev * 10) + rem; // Storing Digits in Reverse Order
    }
    if (rev == cpy){
        cout << "Yay! " << cpy << " is Pallindrome . " << endl;
    }
    else cout << cpy << " is not Pallindrome." << endl;

    return 0;
}