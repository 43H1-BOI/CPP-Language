#include<iostream>
using namespace std;

int main( ){
    int a;
    printf("Program for Printing of Triangles from '*' ::\n");
    // Upward Triangle
    printf("\nEnter Height of Upward Triangle :- ");
    scanf("%d" , &a);
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= i; j++){
            printf(" * ");
        }
        printf("\n");
    }

    cout << endl << endl;

    // Downward Triangle 
    printf("\n\nEnter Height of Downward Triangle :- ");
    scanf("%d" , &a);

    for (int i = a; i >= 1; i--){
        for (int j = i; j >= 1; j--){
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}