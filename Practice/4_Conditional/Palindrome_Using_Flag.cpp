#include<iostream>
using namespace std;

int main( ){
    int num , flag = 0;
    cout << "Enter Number of Elements : ";
    cin >> num;
    int arr[num];

    cout << "Enter Elements in your list \nOne-By-One :" << endl;;

    for (int i = 0; i < num; i++){
        printf("Element %d = " , i + 1);
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++){
        int x = num - i - 1;
        if (arr[i] != arr[x]){
            flag++;
            break;
        }
    }
    if (flag == 0){
        cout << "\nPalindrome" << endl;
    }
    else{
        cout << "\nNot Palindrome" << endl;
    }

    return 0;
}