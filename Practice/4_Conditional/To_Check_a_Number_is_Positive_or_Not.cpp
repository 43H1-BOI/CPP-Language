#include<iostream>
using namespace std;

int main( ){
  cout << "Program to Check whether a number is Positive or Negative :" << endl << endl;
  int a , b , result;
  cout << "Enter a Number to be Checked : ";
  cin >> a;

  if (a < 0){
    cout << "Entered Number is Negative" << endl;
  }
  if (a >= 0){
    cout << "Entered Number is Positive" << endl;
  }
  return 0;
}