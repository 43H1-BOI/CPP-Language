#include<stdio.h>

int main()
{
    int a;
    char C;
    printf("Program for Printing Cross using Asterisk ::\n");

    printf("\nEnter Number of Lines :- ");
    scanf("%d",&a);
    if (  a % 2 != 0 ) 
    {
        for ( int i = 1 ; i <= a ; i++ )
        {
            for ( int j = 1 ; j <= a ; j++ )
            {
                if ( j == i || i + j == a + 1 ) printf(" * ");
                else printf("   ");
            }
            printf("\n");
        }
    }
    else printf("\nPattern Not Possible");
    return 0;
}