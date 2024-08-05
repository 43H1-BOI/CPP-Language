// Program to convert Celcius to Farenheit
#include<iostream>
using namespace std;

void CelToFar( ); // Celcius to Farenheit
void FarToCel( ); // Farenheit to Celcius

int main( ){

    int x;
    do{
        cout << endl << "Program to Convert Temperature : " << endl << endl;
        cout << "Enter 1 for Celcius to Farenheit Conversion ." << endl;
        cout << "Enter 2 for Farenheit to Celcius Conversion ." << endl;
        cout << "Enter 3 to Exit Program ." << endl;
        cout << "Choose Option from Above : ";
        cin >> x;

        switch (x){
            case 1:
            CelToFar( );
            break;

            case 2:
            FarToCel( );
            break;

            case 3:
            break;

            default:
            cout << "Not a Valid Input !" << endl;
            cout << "Enter Again : " << endl;
        }
    } while (x != 3);

    cout << endl << "Thanks for using our Program ." << endl;


    return 0;
}

void CelToFar( ){ // 
    cout << endl << "Program to Convert Temperature from Celcius to Farenheit : " << endl;

    float celcius;
    cout << "Enter Temperature in Celcius : ";
    cin >> celcius;

    cout << celcius << "°C = " << (celcius * (9.0 / 5.0) + 32) << "°F " << endl;
}

void FarToCel( ){ // Farenheit to Celcius
    cout << endl << "Program to Convert Temperature from Celcius to Farenheit : " << endl;

    float farenheit;
    cout << "Enter Temperature in Farenheit : ";
    cin >> farenheit;

    cout << farenheit << "°F = " << ((farenheit - 32) * (5.0 / 9.0)) << "°C " << endl;
}