#include <iostream>
using namespace std;

int main( ){
    int rows , columns;

    // Prompt user to enter the dimensions of the matrices
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> columns;

    int matrix1[rows][columns] , matrix2[rows][columns] , sum[rows][columns];

    // Prompt user to enter values for the first matrix
    cout << "Enter values for the first matrix:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> matrix1[i][j];
        }
    }

    // Prompt user to enter values for the second matrix
    cout << "Enter values for the second matrix:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> matrix2[i][j];
        }
    }

    // Add the two matrices and store the result in the "sum" matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum matrix
    cout << "The sum of the two matrices is:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << sum[i][j] << "  ";
        }
        printf("\n");
    }

    return 0;
}