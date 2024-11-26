#include <iostream>
using namespace std;

/*
2. Write a menu driven program to implement following operations on Matrix :
a. Add two matrix
b. Multiply two matrix
c. Transpose a matrix
d. Display matrix
*/

class Matrix
{
    int A[10][10] , B[10][10] , C[10][10] , a , b , c , d , i , j , k;

public:
    void create_matrix( );
    void add_matrix( );
    void multiply_matrix( );
    void transpose_matrix( );
    void display_matrix( );
};

void Matrix::create_matrix( ) {
    cout << "Enter number rows of 1st matrix: ";
    cin >> a;
    cout << endl;
    cout << "Enter number columns of 1st matrix: ";
    cin >> b;
    cout << endl;
    cout << "Enter number rows of 2nd matrix: ";
    cin >> c;
    cout << endl;
    cout << "Enter number columns of 2nd matrix: ";
    cin >> d;
    cout << endl;
    cout << "Your 1st matrix is a " << a << "x" << b << " matrix!" << endl;
    cout << "Your 2nd matrix is a " << c << "x" << d << " matrix!" << endl;
    cout << "Enter values in 1st matrix:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter values in 2nd matrix:" << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cin >> B[i][j];
        }
    }
    cout << "Values entered successfully in the matrix!!!" << endl;
}

void Matrix::add_matrix( ) {
    if (a == c && b == d) {
        cout << "Adding two matrices: " << endl;
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        cout << "Sum of matrices is:" << endl;
        for (i = 0; i < a; i++) {
            for (j = 0; j < b; j++) {
                cout << C[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Matrices have different order so they can't be added!!!" << endl;
    }
}

void Matrix::multiply_matrix( ) {
    if (b == c) {
        for (i = 0; i < a; i++) {
            for (j = 0; j < d; j++) {
                C[i][j] = 0;
                for (k = 0; k < c; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        cout << "Product of matrices is:" << endl;
        for (i = 0; i < a; i++) {
            for (j = 0; j < d; j++) {
                cout << C[i][j] << "  ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Matrices cannot be multiplied!!" << endl;
        cout << "Note: Number of rows of one matrix should be equal to number of coulumns of another matrix." << endl;
    }
}

void Matrix::transpose_matrix( ) {
    cout << "Which matrix you want to transpose?" << endl;
    cout << "Enter 1 for 1st matrix" << endl;
    cout << "Enter 2 for 2nd matrix" << endl;
    cout << "Enter 3 for both matrices" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
        {
            cout << "Your first matrix before transpose is: " << endl;
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    cout << A[i][j] << "  ";
                }
                cout << endl;
            }

            cout << "Your first matrix after transpose is: " << endl;
            for (i = 0; i < b; i++) {
                for (j = 0; j < a; j++) {
                    cout << A[j][i] << "  ";
                }
                cout << endl;
            }
            break;
        }

        case 2:
        {
            cout << "Your second matrix before transpose is: " << endl;
            for (i = 0; i < c; i++) {
                for (j = 0; j < d; j++) {
                    cout << B[i][j] << "  ";
                }
                cout << endl;
            }

            cout << "Your second matrix after transpose is: " << endl;
            for (i = 0; i < d; i++) {
                for (j = 0; j < c; j++) {
                    cout << B[j][i] << "  ";
                }
                cout << endl;
            }
            break;
        }

        case 3: {
            cout << "Your first matrix before transpose is: " << endl;
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    cout << A[i][j] << "  ";
                }
                cout << endl;
            }

            cout << "Your first matrix after transpose is: " << endl;
            for (i = 0; i < b; i++) {
                for (j = 0; j < a; j++) {
                    cout << A[j][i] << "  ";
                }
                cout << endl;
            }

            cout << "Your second matrix before transpose is: " << endl;
            for (i = 0; i < c; i++) {
                for (j = 0; j < d; j++) {
                    cout << B[i][j] << "  ";
                }
                cout << endl;
            }

            cout << "Your second matrix after transpose is: " << endl;
            for (i = 0; i < d; i++) {
                for (j = 0; j < c; j++) {
                    cout << B[j][i] << "  ";
                }
                cout << endl;
            }
        }
              break;
        default: cout << "Enter a valid input!" << endl;
    }
}

void Matrix::display_matrix( ) {
    cout << "Which matrix you want to display?" << endl;
    cout << "Enter 1 for 1st matrix" << endl;
    cout << "Enter 2 for 2nd matrix" << endl;
    cout << "Enter 3 for both matrices" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
        {
            cout << "Your first matrix is: " << endl;
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    cout << A[i][j] << "  ";
                }
                cout << endl;
            }
            break;
        }

        case 2:
        {
            cout << "Your second matrix is: " << endl;
            for (i = 0; i < c; i++) {
                for (j = 0; j < d; j++) {
                    cout << B[i][j] << "  ";
                }
                cout << endl;
            }
            break;
        }

        case 3: {
            cout << "Your first matrix is: " << endl;
            for (i = 0; i < a; i++) {
                for (j = 0; j < b; j++) {
                    cout << A[i][j] << "  ";
                }
                cout << endl;
            }

            cout << "Your second matrix is: " << endl;
            for (i = 0; i < c; i++) {
                for (j = 0; j < d; j++) {
                    cout << B[i][j] << "  ";
                }
                cout << endl;
            }
            break;
        }
        default: cout << "Enter a valid input!" << endl;
    }
}

int main( ) {
    Matrix ob1;
    int input;
    int z;
    z = 1;
    ob1.create_matrix( );
    while (z == 1) {
        cout << "Press 1 to Add 2 Matrices" << endl;
        cout << "Press 2 to Multiply 2 Matrices" << endl;
        cout << "Press 3 to Transpose a Matrix" << endl;
        cout << "Press 4 to Display a Matrix" << endl;
        cout << "Press 5 to Exit the Program" << endl;
        cin >> input;

        switch (input) {
            case 1:
            {
                ob1.add_matrix( );
                break;
            }
            case 2:
            {
                ob1.multiply_matrix( );
                break;
            }
            case 3:
            {
                ob1.transpose_matrix( );
                break;
            }
            case 4:
            {
                ob1.display_matrix( );
                break;
            }
            case 5:
            {
                cout << "Program exited successfully!!!" << endl;
                break;
            }
            default:
            {
                cout << "Enter a valid operation!!!" << endl;
            }
        }
        cout << "if you want to continue press 1, else 0" << endl;
        cin >> z;
        if (z != 1) {
            cout << "Program terminated successfully!!!" << endl;
        }
    }
    return 0;
}