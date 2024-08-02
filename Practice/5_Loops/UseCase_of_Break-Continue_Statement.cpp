/* Usecase of Break Continue Statement */
// #include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Break statement is used to completely terminate the loop or ignore the lines of code after Break statement
// Continue statement skips that iteration only for which it is commanded
// Both these statements can be used inside or outside of a loop

int main()
{
    int i; // Using For Loop
    for (i = 1; i <= 15; i++)
    {
        printf("%d \n", i);
        if (i == 6)
        {
            break; // this will stops at no. 6
        }

        if (i == 8)
        {
            continue; // this will skip no. 6
        }
    }

    // Using Do While Loop
    do
    {
        printf("%d \n", i);
        i++;
        if (i == 5)
        { // num ÷ 7 then rem != 0
            continue;
        }
    } while (i <= 100); // 1 shows true

    printf("Thanks");
    return 0;
}
// Use /* */ before using any Loop