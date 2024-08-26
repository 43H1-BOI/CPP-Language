/* Assignment 4 */

/*
    Write a menu  driven program to perform following:
    A --> Input a Matrix --> Done
    B --> Display Matrix --> Done
    C --> Add two Matrix --> Done
    D --> Multiply two Matrix --> Done
    E --> Transpose of Matrix --> Done

    In this Version i am making this program cleaner by adding
    -- Operator Overloading
    -- Return Type in Functions
    -- Generalizing Code
*/

#include <iostream>
using namespace std;

class Matrix
{
  int** mat;
  int rows , columns;

public:
  Matrix( ){ } // Default Constructor
  Matrix(int , int); // Parameterized Constructor

  // Operator Overloading << , >> , + , * , ! (Transpose)
  friend ostream& operator<<(ostream& out , const Matrix& M);
  friend istream& operator>>(istream& in , Matrix& M);
  Matrix operator+(Matrix& M);
  Matrix operator*(Matrix& M);
  Matrix operator!( );

  inline int Rows( ){ // Returns rows
    return rows;
  }
  inline int Columns( ){ // Returns rows
    return columns;
  }
};

// Parameterized Constructor
Matrix::Matrix(int r , int c){
  rows = r;
  columns = c;

  mat = new int* [rows];
  for (int i = 0; i < rows; i++){
    mat[i] = new int[columns];
  }

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      // cin >> mat[i][j];
      mat[i][j] = 0;
    }
  }
}

// Insertion Operator Overloaded
istream& operator>>(istream& in , Matrix& M){
  for (int i = 0; i < M.rows; i++){
    for (int j = 0; j < M.columns; j++){
      in >> M.mat[i][j];
    }
  }
  return in;
}

// Extraction Operator Overloaded
ostream& operator<<(ostream& out , const Matrix& M){
  for (int i = 0; i < M.rows; i++){
    for (int j = 0; j < M.columns; j++){
      out << M.mat[i][j] << "  ";
    }
    out << "\n";
  }
  return out;
}

// Overloading + Operator
Matrix Matrix::operator+(Matrix& M){
  Matrix sum(rows , columns);
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      sum.mat[i][j] = mat[i][j] + M.mat[i][j];
    }
  }
  return sum;
}

// Overloading * Operator
Matrix Matrix::operator*(Matrix& M){
  Matrix mult(rows , M.columns);

  for (int i = 0; i < rows; ++i){
    for (int j = 0; j < M.columns; ++j){
      for (int k = 0; k < columns; ++k){
        mult.mat[i][j] += mat[i][k] * M.mat[k][j];
      }
    }
  }
  return mult;
}

// Overloading ! (Transpose) Unary Operator
Matrix Matrix::operator!( ){
  Matrix transpose(columns , rows);

  for (int i = 0; i < columns; i++){
    for (int j = 0; j < rows; j++){
      transpose.mat[i][j] = mat[j][i];
    }
  }
  return transpose;
}

int main( ){
  int choice;
  int rows , columns;
  cout << "Program to Perform Calculations on Matrix :: " << endl;
  cout << "Enter Details of 1st Matrix : " << endl;
  cout << "Enter Number of Rows : ";
  cin >> rows;
  cout << "Enter Number of Columns : ";
  cin >> columns;
  Matrix M1(rows , columns);
  cout << "Enter Elements in 1st Matrix : " << endl;
  cin >> M1;

  cout << endl;

  cout << "Enter Details of 2nd Matrix : " << endl;
  cout << "Enter Number of Rows : ";
  cin >> rows;
  cout << "Enter Number of Columns : ";
  cin >> columns;

  Matrix M2(rows , columns);
  cout << "Enter Elements in 2nd Matrix : " << endl;
  cin >> M2;

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
        cout << M1 << endl;

        cout << "Displaying 2nd Matrix : " << endl;
        cout << M2 << endl;
        break;
      }

      case 2:
      cout << endl;
      if (M1.Rows( ) == M2.Rows( ) && M1.Columns( ) == M2.Columns( )){ // Neccessary Condition for Matrix Addition
        cout << (M1 + M2) << endl;
      }
      else{
        cout << "Addition Not Possibble !" << endl;
      }
      break;

      case 3:
      cout << endl;
      if (M1.Columns( ) == M2.Rows( )){ // Neccessary Condition for Matrix Multiplication
        cout << (M1 * M2) << endl;
      }
      else{
        cout << "Matrix Multiplication Not Possible ! " << endl;
      }
      break;

      case 4:{ // For Transpose of Matrix
        cout << "1. Transpose of 1st Matrix" << endl;
        cout << (!M1) << endl;
        cout << endl;

        cout << "2. Transpose of 2nd Matrix" << endl;
        cout << (!M2) << endl;
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