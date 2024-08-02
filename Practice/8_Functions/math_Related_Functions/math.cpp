#include <iostream>
#include <cmath>
using namespace std;
// Some usefull math functions
int main() {
    double x = 3.49;
    double y = 8;
    double z;

    // returns maximum
    z = max(x , y);

    // returns minimum
    z = min(x , y);

    // will return 2 raised to the power 4
    z = pow(2 , 4);

    // returns square root
    z = sqrt(9);

    // returns abstract value
    z = abs(x);

    // return roundoff value
    z = round(x);

    // returns lower round-off value
    z = ceil(x);

    // returns upper round-off value
    z = floor(x);

    return 0;
}