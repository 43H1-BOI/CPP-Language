#include <iostream>
using namespace std;
// Program to get Maximum sum of row of Matrix with row number

int r1, c1;

int MatPrint(int mat[10][10])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int MaxRowPrint(int mat[10][10])
{
    int MaxSum = 0, row;
    for (int i = 0; i < r1; i++)
    {
        int sumR = 0;
        for (int j = 0; j < c1; j++)
        {
            sumR += mat[i][j];
            if (sumR >= MaxSum)
            {
                MaxSum = sumR;
                row = i + 1;
            }
        }
    }
    cout << "Sum of Row " << row << " is Maximum" << endl;
    cout << "\nMax Sum of Row of Matrix = " << MaxSum << endl;
    return 0;
}

int main()
{
    int mat1[10][10], mat2[10][10];
    cout << "Enter Order of Matrix (m x n) : ";
    cin >> r1 >> c1;
    cout << "Enter Elements of Matrix :: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Element %d%d = ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    cout << "Matrix :: " << endl;
    MatPrint(mat1);

    MaxRowPrint(mat1);

    return 0;
}