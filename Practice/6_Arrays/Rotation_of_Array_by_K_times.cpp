#include <iostream>
using namespace std;

int main()
{
    int num, k, New;
    printf("Enter Number of Elements : ");
    scanf("%d", &num);
    int arr[num], newArr[num];

    printf("Enter Elements in your list \nOne-By-One : \n");

    for (int i = 0; i < num; i++)
    {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Number of Times to Rotate the Array : \nk = ");
    scanf("%d", &k);
    if (k > num)
        k -= num - 1;
    for (int i = 0, j = k; i < num; i++, j++)
    {
        newArr[i] = arr[j];
        if (j == num - 1 || i == num)
            j = -1;
    }
    printf("New Array After Rotating to %d times : \n ", k);
    for (int i = 0; i < num; i++)
    {
        printf("%d  ", newArr[i]);
    }

    return 1;
}