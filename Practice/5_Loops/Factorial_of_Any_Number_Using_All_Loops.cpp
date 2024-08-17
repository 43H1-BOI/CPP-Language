/* To Find Factorial of Any Number*/
#include <iostream>
using namespace std;

int main( ){
    int num , i , fact = 1;
    cout << "Enter a Number : ";
    cin >> num;

    { // Using For Loop
        for (int i = 1; i <= num; i++){
            fact = fact * i;
        }
        printf("Factorial of %d is %d \n" , num , fact);
    }

    { // Using While Loop
        i = 1;
        fact = 1;
        while (i <= num){
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d is %d \n" , num , fact);
    }

    { // Using Do While Loop
        i = 1;
        fact = 1;
        do{
            fact = fact * i;
            i++;
        } while (i <= num);
        printf("Factorial of %d is %d \n" , num , fact);
    }
    return 0;
}