#include<iostream>
#include<ctime>
using namespace std;

int main( ){
    srand(time(NULL));
    int num = (rand( ) % 7) + 1;

    switch (num){
        case 1: cout << "Monday is your lucky day !" << endl;
            break;
        case 2: cout << "Tueday is your lucky day !" << endl;
            break;
        case 3: cout << "Wednesday is your lucky day !" << endl;
            break;
        case 4: cout << "Thursday is your lucky day !" << endl;
            break;
        case 5: cout << "Friday is your lucky day !" << endl;
            break;
        case 6: cout << "Saturday is your lucky day !" << endl;
            break;
        case 7: cout << "Sunday is your lucky day !" << endl;
            break;
    }

    cout << "Thanks for using our Program .";

    return 0;
}