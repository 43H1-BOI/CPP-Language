#include<iostream>
using namespace std;

int main( ){
    int row , column;
    cout << "Program for Printing of '*' Pattern :: \n" << endl;

    cout << "Enter Number of Rows :- ";
    cin >> row;
    cout << "Enter Number of Column :- ";
    cin >> column;


    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
