#include<stdio.h>

int main()
{
    int a;
    printf("Program for Printing of Triangle from '*'");
    printf("\nEnter Height of Triangle :- ");
    scanf("%d",&a);

    for (int i=1 ; i <= a ; i ++)
    {
        for ( int j = 1 ; j <= i ; j ++ )
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}