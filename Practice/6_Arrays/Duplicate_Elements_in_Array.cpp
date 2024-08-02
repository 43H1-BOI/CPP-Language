// #include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    printf("Enter Number of Elements : ");
    scanf("%d" , &num);
    int arr[num];
    // int newArr[num];
    printf("Enter Elements One by One :: \n");
    for (int i = 0; i < num; i++) {
        scanf("%d" , &arr[i]);
        // newArr[i] = arr[i];
    }
    printf("Duplicate Elements in Array = ");
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] == arr[j]) {
                printf("%d  " , arr[i]);
                break;
            }
        }
    }
    return 0;
}