#include <iostream>
using namespace std;

int main() {
    int n , x , count = 0;

    cout << "Enter Number of Elements to be compared : ";
    cin >> n;

    int arr[n]; // Initialising Array
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " = ";
        cin >> arr[i];
    }

    cout << "Enter X : ";
    cin >> x;

    int newArr[n];
    cout << "Numbers Greater than " << x << " = ";
    for (int i = 1; i < n; i++) {
        if (arr[i] > x) {
            newArr[count] = arr[i];
            cout << newArr[count] << " ";
            count++;
        }
    }

    // TO Find Maximun and Minimum
    // int max = arr[0], min = arr[0];
    // if (arr[i] > max)
    // {
    //     max = arr[i];
    // }
    // else if (min < arr[i])
    // {
    //     min = arr[i];
    // }

    // C Program Logic
    // int max = arr[0], min = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //         if (max > x)
    //         {
    //             count++;
    //         }
    //     }
    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }
    // }
    // printf("Numbers Greater than %d = %d \n", x, count);
    // printf("Maximum = %d \n", max);
    // printf("Minimum = %d \n", min);
    return 0;
}