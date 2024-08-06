/* Function Example 2 :
Print Namaste for India and Bonjour for French*/
#include<iostream>
using namespace std;

int n; // Global Variable Declaration 
void Greet( ); // Function Declaration 

int main( ){ // Calling Main Function 
    printf("Enter 1 for Indian \nEnter 2 for French \n");
    printf("Enter Your Choice : ");
    cin >> n;
    Greet( ); // Calling Function 
    return 0;
}
void Greet( ){ // Function Definition
    if (n == 1){
        printf("Namaste India");
    }
    else if (n == 2)
        printf("Bonjour");
    else{
        printf("Invalid Input");
    }
}
