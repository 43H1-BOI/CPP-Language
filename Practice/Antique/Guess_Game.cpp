#include<iostream>
#include<ctime>
using namespace std;

int main( ){
    srand(time(NULL));
    int num , guess , tries;
    num = (rand( ) % 100) + 1;

    cout << "Number Guess Game : " << endl;

    do{
        cout << endl << "Enter a number between 1-100 : ";
        cin >> guess;
        tries++;

        if (guess > num){
            // cout << "Get Down , You are away from Guess" << endl;
            cout << "Enter a smaller number." << endl;
        }
        else if (guess < num){
            cout << "Enter a bigger number." << endl;
        }
        else{
            cout << "Yahoo ! You Guessed It in " << tries << " tries." << endl;
        }

    } while (guess != num);

    return 0;
}