#include<iostream>
using namespace std;

int main( ){
    int a;
    char C;
    cout << "Program for Printing Cross using Asterisk ::\n";

    cout << "\nEnter Number of Lines :- ";
    cin >> a;
    if (a % 2 != 0){
        for (int i = 1; i <= a; i++){
            for (int j = 1; j <= a; j++){
                if (j == i || i + j == a + 1){
                    printf(" * ");
                }
                else{
                    cout << "   ";
                }
            }
            cout << endl;;
        }
    }
    else{
        cout << "\nPattern Not Possible" << endl;
    }
    return 0;
}