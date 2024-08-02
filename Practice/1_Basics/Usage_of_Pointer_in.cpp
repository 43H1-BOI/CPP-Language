// #include <stdio.h>
#include <iostream>
using namespace std;

/* Use of Pointer Variable
    Declared using int* pointer_name
    & is used to get address of
    * is used to extract value of any datatype from pointer
    %p is used to get pointer
    %x is used to get address in hexadecimal form
*/

/*
int main() // Studied
{
    int a = 6;
    int* ptrA = &a; // pointer declaration

    // Value obtained from int Variable
    printf("The Value of A is %d\n", a );

    // Value Obtained from Pointer Variable
    printf("The Value of A through Pointer ptrA is %d\n", *ptrA );

    // Address Obtained from Pointer Variable
    printf("The Address of prtA is %p\n", &ptrA);

    // Address Obtained from int Variable
    printf("The Address of A is %p\n", &a);

    // Value through Pointer variable
    printf("The Value of A using Pointer ptrA is %x\n", *ptrA);

    return 0;
}
*/

// This is Written in C Language
/*
int main() // Self
{
    int B = 63;
    int *ptrB = &B;

    // Value of B without using Pointer
    printf("Value of B is %d\n", B);

    // Value of B using Pointer
    printf("Value of B using Pointer is %d\n", *ptrB);

    // Address of B in Hexadecimal Form (using %x)
    printf("Address of B in Hexadecimal Form is %x\n", &B);

    // Address of Pointer in Hexadecimal Form (using %x)
    printf("Address of Pointer ptrB in Hexadecimal Form is %x\n", &ptrB);

    // Address of Pointer using %p
    printf("Address of Pointer ptrB is %p\n", &ptrB);

    // Value of B from Pointer using %p
    printf("Value of B from Pointer is %p\n", *ptrB);
    // Result will be in Hexadecimal Form

    return 0;
}
*/

// This is Written in C++ Language
int main() // Self
{
    int B = 63;
    int *ptrB = &B;

    // Value of B without using Pointer
    cout << "Value of B is " << B << endl;

    // Value of B using Pointer
    cout << "Value of B using Pointer is " << *ptrB << endl;

    // Address of B in Hexadecimal Form (using %x)
    cout << "Address of B in Hexadecimal Form is " << &B << endl;

    // Address of Pointer in Hexadecimal Form (using %x)
    cout << "Address of Pointer ptrB in Hexadecimal Form is " << &ptrB << endl;

    // Address of Pointer using %p
    cout << "Address of Pointer ptrB is " << &ptrB << endl;

    return 0;
}