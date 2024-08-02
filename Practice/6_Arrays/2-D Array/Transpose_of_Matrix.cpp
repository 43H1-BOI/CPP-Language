/*Write a C++ Program to find transpose of a matrix. */
// #include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int a[10][10], transpose[10][10], r, c;

  cout << "Enter number of rows: ";
  cin >> r;

  cout << "Enter number of columns: ";
  cin >> c;

  // asssigning elements to the matrix
  cout << "\nEnter matrix elements:" << endl;
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      cout << "Enter element A[" << (i + 1) << "," << (j + 1) << "]";
      scanf("%d", &a[i][j]);
    }

  // Printing Matrix
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      // printing the matrix a[][]
      cout << a[i][j] << "  ";

      // Computing Transpose of AMtrix
      transpose[j][i] = a[i][j];
    }
    printf("\n");
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  {
    for (int j = 0; j < r; ++j)
    {
      cout << transpose[i][j] << "  ";
    }
    printf("\n");
  }
  return 0;
}
