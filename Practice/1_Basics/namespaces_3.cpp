#include <iostream>
// using namespace std;

/*
***Namespace***
Provides a Solution for Preventing name conflicts in
large projects. Each Entity needs a unique name .
A namespace allows for identically named entities
as long as the namespaes are different.

*We use "using namespace std;" to get rid of writing
"std::" before each statement like "std::cout" ,
"std::string" ,  etc.*

*/

namespace Hindi
{
    int population = 5;
    std::string greet = "Namaste";

}

int main()
{
    // We can include specific namespace by defining them seperately
    using std::cout;
    using std::endl;
    using std::string;

    string Jai = "Jai Shree Ram"; // If using standard namespace

    // cout << "Jai Shree Ram" << endl;

    // If we remove "using namespace std;" , we have to write
    std::cout << Jai << std::endl;
    cout << endl;

    /*
        We can also create Custom namespace to use them in our program

        syntax :-

        namespace name_of_namespace {
        // value of Variables
        EG :
        int x = 5;
        std::string Jai = "Jai Mata Di";
        }
    */

    int population = 10;
    string greet = "Hello";

    // using namespace mine;
    /*
    If we write above statement , the program will get values
    from custom namespace "mine" and we don't have to write
    "mine::Jai" or "mine::x" to get value provided inside
    custom namespace
    */

    cout << greet << endl;
    // This will print value of "Jai" present inside main

    cout << population << endl;
    // This will print value of "x" present inside main

    cout << endl;

    cout << Hindi::greet << endl;
    // This will print value of "greet" present in our custom namespace "mine"

    cout << Hindi::population << endl;
    // This will print value of "x" present in our custom namespace "mine"

    return 0;
}