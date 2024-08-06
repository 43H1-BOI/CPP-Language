#include<iostream>
using namespace std;

int main( ){
    int lines;
    char C;

    cout << "Program for Printing Plus using Asterisk ::\n" << endl;

    cout << "Enter Number of Lines :- ";
    cin >> lines;


    if (lines % 2 != 0){
        for (int i = 1; i <= lines; i++){
            for (int j = 1; j <= lines; j++){
                int num = lines / 2 + 1;
                if (j == num || i == num) printf(" * ");
                else printf("   ");
            }
            printf("\n");
        }
    }
    else cout << "\nPattern Not Possible" << endl;
    return 0;
}