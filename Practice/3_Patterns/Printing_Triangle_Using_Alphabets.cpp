#include<iostream>
using namespace std;

int main( ){
    int n;
    char C = 'a'; // change this with anything
    cout << "Program for Printing Triangle Using Alphabets :: \n" << endl;

    cout << "Enter Number of Lines :- ";
    cin >> n;

    {
        C = 'a'; // change this with anything
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                cout << C++;

            }
            cout << endl;
        }
    }
    return 0;
}