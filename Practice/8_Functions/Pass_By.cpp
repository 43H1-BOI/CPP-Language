#include <iostream>
using namespace std;

// If we use Reference Variable then it will pass the memory address of variable and
// this is used to change original values  
void PassByRef(int& a , int& b){ // Call by Reference
    a *= a;
    b *= b;
}

// If we use Call by Value then it passes a copy of the variable and 
// hence the original value remains unchanged 
void PassByVal(int a , int b){ // Call by Value
    a *= a;
    b *= b;
}

int main( ){
    int a , b;
    cout << "Enter Value of a : ";
    cin >> a;
    cout << "Enter Value of b : ";
    cin >> b;


    cout << "Entered Values : " << endl;
    cout << "Value of  a = " << a << endl;
    cout << "Value of  b = " << b << endl;

    cout << endl;

    cout << "After Pass By Value : " << endl;
    PassByVal(a , b);
    cout << "Value of  a = " << a << endl;
    cout << "Value of  b = " << b << endl;

    cout << endl;

    cout << "After Pass By Reference : " << endl;
    PassByRef(a , b);
    cout << "Value of  a = " << a << endl;
    cout << "Value of  b = " << b << endl;

    return 0;
}
