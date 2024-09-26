/* Assignment 4 */

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
    int row , column;
    // Dynamically Allocating 2D Array
    int** mat = new int* [row];
    static int count;

public:
    Matrix( );
    ~Matrix( ){
        for (int i = 0; i < row; ++i){
            delete[ ] mat[i];
        }
        delete[ ] mat;
        mat = NULL;
    }
    void Display( );
    void Transpose( );
    friend void Add(Matrix m1 , Matrix m2);
    friend void Multiply(Matrix m1 , Matrix m2);
};

Matrix::Matrix( ){ // Default Constructor
    count++;
    cout << "Operating on Matrix " << count << ".\n" << endl;
    cout << "Enter number of Rows : ";
    cin >> row;
    cout << "Enter number of Columns : ";
    cin >> column;

    cout << "Input Elements of Matrix " << count << ":" << endl;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            mat[i] = new int[column];
            cout << "Enter Element(" << i + 1 << "," << j + 1 << "):";
            cin >> mat[i][j];
        }
    }
    cout << endl;
}

void Matrix::Display( ){
    cout << "Elements in Matrix Are : " << endl;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}

void Add(Matrix m1 , Matrix m2){
    if (m1.row == m2.row && m1.column == m2.column){
        int sum[m1.row][m1.column];
        cout << endl;
        cout << "Addition of Matrix :" << endl;

        for (int i = 0; i < m1.row; i++){
            for (int j = 0; j < m1.column; j++){
                sum[i][j] = m1.mat[i][j] + m2.mat[i][j];
                cout << sum[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Addition of Matrix not Possible." << endl;
    }
}

void Multiply(Matrix m1 , Matrix m2){
    if (m1.column == m2.row){
        int mult[3][3] = { 0 };
        cout << endl;
        cout << "Multiplication of Matrix :" << endl;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++){
                    mult[i][j] += m1.mat[i][k] * m2.mat[k][j];
                }
                cout << mult[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Multiplication of Matrix not Possible." << endl;
    }
}

void Matrix::Transpose( ){
    int trans[column][row];
    cout << endl;
    cout << "Transpose of Matrix :" << endl;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
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
            case 1: // For Display of Matrix
            {
                int choice2;
                do{
                    cout << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Display 1st Matrix" << endl;
                    cout << "2. Display 2nd Matrix" << endl;
                    cout << "3. Exit" << endl;

                    cout << "Enter your choice: ";
                    cin >> choice2;

                    switch (choice2){
                        case 1:
                        cout << endl;
                        cout << "Displaying 1st Matrix : " << endl;
                        M1.Display( );
                        break;

                        case 2:
                        cout << endl;
                        cout << "Displaying 2nd Matrix : " << endl;
                        M2.Display( );
                        break;

                        case 3:
                        cout << "Exiting Display Section." << endl;
                        break;

                        default:
                        cout << "Invalid choice. Please try again." << endl;

                    }
                } while (choice2 != 3);
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

            case 4: // For Transpose of Matrix
            {
                int choice2;
                do{
                    cout << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Transpose of 1st Matrix" << endl;
                    cout << "2. Transpose of 2nd Matrix" << endl;
                    cout << "3. Exit" << endl;

                    cout << "Enter your choice: ";
                    cin >> choice2;

                    switch (choice2){
                        case 1:
                        M1.Transpose( );
                        break;

                        case 2:
                        M2.Transpose( );
                        break;

                        case 3:
                        cout << "Exiting Transpose Section." << endl;
                        break;

                        default:
                        cout << "Invalid choice. Please try again." << endl;

                    }
                } while (choice2 != 3);
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