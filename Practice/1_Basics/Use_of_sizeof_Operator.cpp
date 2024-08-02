#include <iostream>
using namespace std;
// sizeof operator is used to get size of any variable of having any data type
int main()
{
    int intType;
    float floatType;
    char charType;

    printf(" INT : %zu \n ", sizeof(intType));
    printf("CHAR : %zu \n ", sizeof(charType));
    printf("FLOAT : %zu \n ", sizeof(floatType));

    return 0;
}