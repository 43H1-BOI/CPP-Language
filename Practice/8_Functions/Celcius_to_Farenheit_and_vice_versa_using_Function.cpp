// Program to convert Celcius to Farenheit
#include<iostream>
using namespace std;

float CelToFar(float celcius); // Celcius to Farenheit
float FarToCel(float farenheit); // Farenheit to Celcius

int main( ){
    cout << "Program to Convert Temperature : " << endl << endl;

    float celcius;
    cout << "Enter Temperature in Celcius : ";
    cin >> celcius;

    float farenheit = CelToFar(celcius);
    cout << "In Farenheit : " << CelToFar(celcius);

    cout << endl;

    cout << "Enter Temperature in Farenheit : ";
    cin >> farenheit;

    cout << "In Celcius : " << FarToCel(farenheit);

    return 0;
}

float CelToFar(float celcius){
    return (celcius * (9.0 / 5.0) + 32);
}

float FarToCel(float farenheit){
    return ((farenheit - 32) * (5.0 / 9.0));
}