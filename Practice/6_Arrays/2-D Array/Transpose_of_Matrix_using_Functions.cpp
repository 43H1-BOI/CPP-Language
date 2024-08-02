#include <iostream>
using namespace std;

int r1, c1;

int MatPrint(int mat[10][10])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << mat[i][j] << " ";
        }
        printf("\n");
    }
    return 0;
}

int Transpose(int mat[10][10])
{
    int trans[10][10];
    cout << "\nTranspose of Matrix :: " << endl;
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            trans[i][j] = mat[j][i];
            cout << trans[i][j] << " ";
        }
        printf("\n");
    }
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
            cout << "Element [" << (i + 1) << " , " << (j + 1) << "] : ";
            cin >> mat1[i][j];
        }
    }

    printf("Matrix :: \n");
    MatPrint(mat1);

    Transpose(mat1);

    return 0;
}