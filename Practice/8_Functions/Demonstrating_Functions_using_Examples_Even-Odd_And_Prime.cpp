// #include <stdio.h>
#include <iostream>
using namespace std;

void checkEvenOdd(int); // Function Declaration before main() function

/*
We can also decalare and define function at the same time but must
remember that it must be done before msin function
*/

bool checkPrime(int num) {
    int i = 2;
    while (num > i) {
        if (num % i == 0) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter The Number To Check Even or Odd : " << endl;
    cin >> num;
    // printf("Enter The Number To Check Even or Odd\n");
    // scanf("%d", &num);
    checkEvenOdd(num);

    cout << "Enter The Number To Check Prime or Not : " << endl;
    cin >> num;

    if (checkPrime(num)) {
        cout << num << " is a Not Prime Number." << endl;
    }
    else {
        cout << num << " is a Prime Number." << endl;
    }
    return 0;
}

// Function Definition After main() function
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    }
    else {
        cout << num << " is Odd" << endl;
    }
}