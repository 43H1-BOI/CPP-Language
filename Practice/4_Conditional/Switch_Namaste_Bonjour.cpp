/* Function Example 2 :
Print Namaste for India and Bonjour for French*/
#include <iostream>
using namespace std;

int n;     // Global Variable Declaration
int main() // Calling Main Function
{
    printf("Enter 1 for Indian \nEnter 2 for French \n");
    printf("Enter Your Choice : ");
    scanf("%d", &n);

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
    return 0;
}