/* Function Example 2 :
Print Namaste for India and Bonjour for French*/
#include <stdio.h>
int n;        // Global Variable Declaration
void Hello(); // Function Declaration
int main()    // Calling Main Function
{
    printf("Enter 1 for Indian \nEnter 2 for French \n");
    printf("Enter Your Choice : ");
    scanf("%d", &n);
    Hello(); // Calling Function
    return 0;
}
void Hello() // Function Definition
{
    switch (n)
    {
    case 1:
        printf("Namaste India");
        break;
    case 2:
        printf("Bonjour");
        break;
    default:
        printf("Invalid Input");
    }
}