/*Check Weather Character Entered
is Upper Case or Lower Case */
// Using If Else-If Else
#include <iostream>
using namespace std;

int main()

{
    char ch;
    printf("Enter Any Character : ");
    scanf("%c", &ch);
    // this checks upper case
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\nUpper Case");
    }
    // this checks lower case
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\nLower Case");
    }
    // this checks invalid inputs
    else
    {
        printf("\nInvalid Input");
    }
    return 0;
}