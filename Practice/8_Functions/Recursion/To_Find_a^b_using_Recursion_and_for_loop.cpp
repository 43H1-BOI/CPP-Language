#include <stdio.h>
// To Find a^b using Recursion 
int POW( int a, int b ) 
{
    if ( b == 0 ) return 1;
    b--;
    int pow = a*POW(a,b);
    return pow ;
}
int main ()
{
    int a , b , pow = 1;
    printf("To Find a^b using Program\n");
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    /* Using For Loop
    for ( int i = 1 ; i <= b ; i ++ )
    {
        pow = pow*a;
    } 
    */
   pow = POW(a,b);
    printf("\n a^b = %d",pow);
    return 0;
}