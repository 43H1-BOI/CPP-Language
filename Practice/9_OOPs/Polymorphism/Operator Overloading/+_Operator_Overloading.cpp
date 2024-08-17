#include <iostream>
using namespace std;

// Program to Add Two Complex Numbers using Operator Overloading
class Complex {
private:
    float real , imag;
public:
    Complex( ){
        real = 0;
        imag = 0;
    }
    void getData( ){
        cout << "Enter Real Part of Complex Number (a): ";
        cin >> real;
        cout << "Enter Imaginary Part of Complex Number (b): ";
        cin >> imag;
    }

    void printData( ){
        cout << real << "+ i" << imag << "\n\n";
    }

    Complex operator + (Complex& temp);
};

Complex Complex :: operator + (Complex& temp){
    Complex Sum;
    Sum.real = real + temp.real;
    Sum.imag = imag + temp.imag;
    return Sum;
}


int main( ){
    Complex C1 , C2;

    cout << "Enter 1st Complex Number (a + ib) :" << endl;
    C1.getData( );
    cout << "1st Complex Number is (a + ib) :" << endl;
    C1.printData( );

    cout << "Enter 2nd Complex Number (a + ib) :" << endl;
    C2.getData( );
    cout << "2nd Complex Number is (a + ib) :" << endl;
    C2.printData( );

    cout << "Sum of 2 Complex Numbers Are : " << endl;
    Complex C3 = C1 + C2;
    C3.printData( );
    return 0;

}