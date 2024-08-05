#include<iostream>
#include<ctime>
using namespace std;

// Program to make a dice having random starting and ending points
int main( ){
    srand(time(NULL));
    int x = 0;

    // int num = rand() % y ) + x ;
    // it will give random numbers from x to y

    do{
        int start = 1 , end = 6;
        cout << endl << "Program To pick a random number from specific starting and ending points . " << endl << endl;
        cout << "Enter Starting Number : ";
        cin >> start;

        cout << "Enter Ending Number : ";
        cin >> end;

        cout << endl << "Picking Random Number..." << endl;
        int num = (rand( ) % end) + start;
        cout << "Random Number = " << num << endl << endl;

        cout << "Enter Any Number to Continue." << endl;
        cout << "Enter 1 to Exit." << endl;
        cin >> x;
    } while (x != 1);

    cout << "Thanks for using our program !!" << endl;


    return 0;
}