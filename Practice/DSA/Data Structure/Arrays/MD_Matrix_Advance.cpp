/* Assignment 2 */

/*
    Write a menu  driven program to perform following:
    A --> Input a Matrix --> Done
    B --> Display Matrix --> Done
    C --> Add two Matrix --> Done
    D --> Multiply two Matrix --> Done
    E --> Transpose of Matrix --> Done
*/

#include <iostream>
using namespace std;

class Matrix
{
    int** mat;
    int rows , columns;
    static int count; // To Count Number of Matrix

public:
    Matrix( );
    void Display( );
    void Transpose( );
    friend void Add(Matrix m1 , Matrix m2);
    friend void Multiply(Matrix m1 , Matrix m2);
};

Matrix::Matrix( ){
    count++;
    cout << "Input Details of Matrix " << count << " : " << endl;


    cout << "Enter number of rows : ";
    cin >> rows;
    cout << "Enter number of columns : ";
    cin >> columns;

    // Dynamically Creating Matrix (2-D Array)
    mat = new int* [rows];
    for (int i = 0; i < rows; ++i){
        mat[i] = new int[columns];
    }

    cout << "Enter Elements in Matrix " << count << " : " << endl;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            // cout << "Enter Element(" << i + 1 << "," << j + 1 << "):";
            cin >> mat[i][j];
        }
    }

    cout << endl;
}

void Matrix::Display( ){
    cout << "Elements in Matrix Are : " << endl;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}

void Add(Matrix m1 , Matrix m2){
    if (m1.rows == m2.rows && m1.columns == m2.columns){
        int sum[m1.rows][m1.columns];
        cout << endl;
        cout << "Addition of Matrix :" << endl;

        for (int i = 0; i < m1.rows; i++){
            for (int j = 0; j < m1.columns; j++){
                sum[i][j] = m1.mat[i][j] + m2.mat[i][j];
                cout << sum[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Addition Not Possible ! " << endl;
    }
}

void Multiply(Matrix m1 , Matrix m2){
    if (m1.columns == m2.rows){ // Neccessary Condition for Matrix Multiplication
        int mult[m1.rows][m2.columns];

        // int i , j , k;

        for (int i = 0; i < m1.rows; ++i){
            for (int j = 0; j < m2.columns; ++j){
                mult[i][j] = 0;
            }
        }


     // Multiplying matrix a and b and storing in array mult.
        for (int i = 0; i < m1.rows; ++i){
            for (int j = 0; j < m2.columns; ++j){
                for (int k = 0; k < m1.columns; ++k){
                    mult[i][j] += m1.mat[i][k] * m2.mat[k][j];
                }
            }
        }
    /*
    cout << endl;
    cout << "Multiplication of Matrix :" << endl;
    for (int i = 0; i < m1.rows; i++){
        for (int j = 0; j < m2.columns; j++){
            for (int k = 0; k < m1.columns; k++){
                mult[i][j] += m1.mat[i][k] * m2.mat[k][j];
            }
        // cout << mult[i][j] << "  ";
        }
        // cout << endl;
    }
    */

        for (int i = 0; i < m1.rows; i++){
            for (int j = 0; j < m2.columns; j++){
                cout << mult[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Multiplication Not Possible ! " << endl;
    }
}

void Matrix::Transpose( ){
    int trans[columns][rows];
    // cout << endl;
    // cout << "Transpose of Matrix :" << endl;

    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            trans[i][j] = mat[j][i];
            cout << trans[i][j] << "  ";
        }
        cout << endl;
    }
}

int Matrix::count = 0;

int main( ){
    int choice;
    cout << "Program to Perform Calculations on Matrix :: " << endl;
    Matrix M1 , M2;

    do{
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Display Matrices" << endl;
        cout << "2. Add Matrices" << endl;
        cout << "3. Multiply Matrices" << endl;
        cout << "4. Transpose of Matrix" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
            case 1: {// For Display of Matrix
                cout << endl;
                cout << "Displaying 1st Matrix : " << endl;
                M1.Display( );
                cout << endl;

                cout << "Displaying 2nd Matrix : " << endl;
                M2.Display( );

                break;
            }

            case 2:
            cout << endl;
            Add(M1 , M2);
            break;

            case 3:
            cout << endl;
            Multiply(M1 , M2);
            break;

            case 4:{ // For Transpose of Matrix
                cout << "1. Transpose of 1st Matrix" << endl;
                M1.Transpose( );
                cout << endl;

                cout << "2. Transpose of 2nd Matrix" << endl;
                M2.Transpose( );
                break;
            }

            case 5:
            cout << endl;
            cout << "Exiting program." << endl;
            break;

            default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}