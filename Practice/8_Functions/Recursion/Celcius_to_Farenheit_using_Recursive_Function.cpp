// Program to convert Celcius to Farenheit
#include<iostream>
using namespace std;

float CelToFar(float celcius); // Celcius to Farenheit
float FarToCel(float farenheit); // Farenheit to Celcius

int main( ){
    float celcius;
    cout << "Enter Temperature in Celcius : ";
    cin >> celcius;

    int farenheit = CelToFar(celcius);
    cout << "In Farenheit : " << CelToFar(celcius);

    cout << "In Farenheit : " << FarToCel(farenheit);
    return 0;
}

float CelToFar(float celcius){
    return (celcius * (9.0 / 5.0) + 32);
}

float FarToCel(float farenheit){
    return ((farenheit - 32) * (5.0 / 9.0));
}