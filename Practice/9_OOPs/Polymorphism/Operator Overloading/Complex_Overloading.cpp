#include <iostream>
using namespace std;

// Program to Overlaod + , - , << , >> in Complex Numbers
class Complex {
private:
    float real , imag;
public:
    Complex( ){
        real = 0;
        imag = 0;
    }
    Complex operator + (Complex& temp);
    Complex operator - (Complex& temp);
    Complex operator * (Complex& temp);
    Complex operator / (Complex& temp);
    friend void operator >> (istream& in , Complex& temp);
    friend void operator << (ostream& out , Complex& temp);

};

Complex Complex :: operator + (Complex& temp){
    Complex Sum;
    Sum.real = real + temp.real;
    Sum.imag = imag + temp.imag;
    return Sum;
}

Complex Complex :: operator - (Complex& temp){
    Complex Sum;
    Sum.real = real - temp.real;
    Sum.imag = imag - temp.imag;
    return Sum;
}

Complex Complex :: operator * (Complex& temp){
    Complex Sum;
    Sum.real = real * temp.real;
    Sum.imag = imag * temp.imag;
    return Sum;
}

Complex Complex :: operator / (Complex& temp){
    Complex Sum;
    Sum.real = real / temp.real;
    Sum.imag = imag / temp.imag;
    return Sum;
}


void operator >> (istream& in , Complex& temp){
    cout << "Enter Real Part of Complex Number (a): ";
    in >> temp.real;
    cout << "Enter Imaginary Part of Complex Number (b): ";
    in >> temp.imag;
}

void operator << (ostream& out , Complex& temp){
    out << temp.real << " + i" << temp.imag << "\n";
}

int main( ){
    Complex C1 , C2;

    cout << "Enter 1st Complex Number (a + ib) :" << endl;
    cin >> C1;
    cout << "1st Complex Number is (a + ib) :" << endl;
    cout << C1;
    cout << endl;

    cout << "Enter 2nd Complex Number (a + ib) :" << endl;
    cin >> C2;
    cout << "2nd Complex Number is (a + ib) :" << endl;
    cout << C2;
    cout << endl;

    cout << "\nSum of 2 Complex Numbers Are : " << endl;
    cout << " C1 + C2 = ";
    Complex Sum = C1 + C2;
    cout << Sum;

    cout << "\nSubtraction of 2 Complex Numbers Are : " << endl;
    cout << " C1 - C2 = ";
    Complex Sub = C1 - C2;
    cout << Sub;

    cout << "\nMultiplication of 2 Complex Numbers Are : " << endl;
    cout << " C1 * C2 = ";
    Complex Mult = C1 * C2;
    cout << Mult;

    cout << "\nDivision of 2 Complex Numbers Are : " << endl;
    cout << " C1 / C2 = ";
    Complex Div = C1 / C2;
    cout << Div;
    return 0;

}