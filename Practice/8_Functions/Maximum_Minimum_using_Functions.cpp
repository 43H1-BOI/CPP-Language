// CPP program to find maximum and minimum between two numbers using functions.
#include <iostream>
using namespace std;

/* Function declarations */
int max(int , int);
int min(int , int);



int main( ){
    int a , b , maxi , mini;

    /* Input two numbers from user */
    cout << "Enter any two numbers: ";
    cin >> a >> b;

    maxi = max(a , b);  // Call maximum function
    mini = min(a , b);  // Call minimum function

    printf("\nMaximum = %d\n" , maxi);
    printf("Minimum = %d" , mini);

    return 0;
}


// Find maximum between two numbers.
int max(int num1 , int num2){
    return (num1 > num2) ? num1 : num2;
}


// Find minimum between two numbers.
int min(int num1 , int num2){
    return (num1 > num2) ? num2 : num1;
}