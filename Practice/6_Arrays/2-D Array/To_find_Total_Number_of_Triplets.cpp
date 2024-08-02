#include<iostream>
using namespace std;

int main()
{
    int num ;
    printf("Enter Number of Elements : ");
    scanf("%d",&num);
    int arr[num], TotalPairs = 0, x ;
    printf("Enter Elements in your list one by one : \n");

    for ( int i = 0 ; i < num ; i ++ )
    {
        printf("Element %d = ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n(A value to find sum of )\nEnter Value of X : ");
    scanf("%d",&x);

    for ( int i = 0 ; i < num ; i ++ )
    {
        for ( int j = i +1 ; j < num ; j ++ )
        {
            for ( int k = j + 1 ; k < num ; k ++ )
            {
                if ( arr[i] + arr[j] + arr[k] == x )
                {
                    TotalPairs++;
                    printf("\nTriplets %d = {%d,%d,%d}",TotalPairs,arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    if ( TotalPairs == 0 )
    {
        printf("\nNo Triplets Found :(");
    }
    else
    {
        printf("\nTotal Number of Triplets = %d ", TotalPairs);
    }
    return 0;
}