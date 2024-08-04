// C++ program to find the size of int, char, float and double data types

#include <iostream>
using namespace std;

int main( ){
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // Calculate and Print

    // the size of integer type
    printf("Size of int is: %zu" , sizeof(integerType));
    // Calculate and Print

    // the size of charType
    printf("\nSize of char is: %zu" , sizeof(charType));
    // Calculate and Print

    // the size of floatType
    printf("\nSize of float is: %zu" , sizeof(floatType));
    // Calculate and Print

    // the size of doubleType
    printf("\nSize of double is: %zu" , sizeof(doubleType));

    return 0;
}