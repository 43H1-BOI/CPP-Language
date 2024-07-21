#include <iostream>

typedef std::string str_t;

using INT = int;

int main()
{
    /*
    typedef is used  to define your own identifiers
    that can be used in place of type specifiers such
    as int , float , and double , etc.

    We must use "_t" or "_type" as suffix for the typedef variables
    Example :-
        typedef std::string str_t;

    syntax :-
        typedef <current_name> <new_name>;
    */
    str_t name = "Abhi"; // this is a string but created using typedef
    std::cout << "Name = " << name << std::endl;

    /*
    We can also use "*using*" keyword for aliasing of DataTypes
ṇ
    syntax :-
        using <new_name> = <current_name>;
    */
    INT marks = 99; // this is a integer but created using "using keyword"
    std::cout << "Marks = " << marks << std::endl;

    return 0;
}