#include<stdio.h>

int main()
{
    int a;
    char C;
    printf("Program for Printing of Triangles from Alphabets ::\n");
    
    printf("\nEnter Number of Lines :- ");
    scanf("%d",&a);
    for ( int i = 1 ; i <= a ; i++ )
    {
    C = 'A';
        for ( int j = 1 ; j <= i ; j++ )
        {
            printf(" %c ",C);
            C ++;
        }
        printf("\n");
    }
    
    return 0;
}