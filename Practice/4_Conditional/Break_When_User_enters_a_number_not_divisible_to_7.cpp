/* Program to Stop when used enters
number is not multiple of 7 */
#include<iostream>
using namespace std;

int main( ){
    int n , i = 1;
    cout << "Program to check a number is divisible by 7 or not : " << endl;
        /*
        // Using For Loop
        for ( i = 1 ; ; i++){
        scanf("%d",&n);
            if ( n % 7 != 0 )
                break ;
        }
        */

        // Using Do While Loop
    do{
        printf("Enter Number : ");
        scanf("%d" , &n);
        if (n % 7 != 0) // num ÷ 7 then rem != 0
            break;
    } while (1); // 1 shows true

    printf("\n%d is not Multiple of 7" , n);
    return 0;
}