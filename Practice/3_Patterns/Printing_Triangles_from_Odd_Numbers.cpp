#include<stdio.h>

int main()
{
    int a;
    printf("Program for Printing of Triangles from Odd Numbers ::\n");
    
    printf("\nEnter Number of Lines :- ");
    scanf("%d",&a);
    for ( int i = 1 ; i <= a ; i++ )
    {
    int x = 1;
        for ( int j = 1 ; j <= i ; j++ )
        {
            printf(" %d ",x);
            x += 2 ;
        }
        printf("\n");
    }
    
    return 0;
}