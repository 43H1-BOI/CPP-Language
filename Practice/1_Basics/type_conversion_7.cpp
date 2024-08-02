#include <iostream>

int main() {
    /*

Type Conversion :- Conversion of a value from one type to another .
    - Implicit --> Automatic by Compiler
    - Explicit --> Precode value with new data type (Done by Programmer)

    */
    int correctQ = 8;
    int totalQ = 10;

    std::cout << "Total Questions : " << totalQ << std::endl;
    std::cout << "Correct Questions : " << correctQ << std::endl;

    double score1 = correctQ / totalQ;
    // in the above line , we havn't converted the result of operation

    std::cout << "Score (After Type Conversion) : " << score1 << std::endl;

    double score2 = (double)correctQ / totalQ;
    // in the above line of code , we have explicitely converted the resultant of the operation.

    std::cout << "Score (After Type Conversion) : " << score2 << std::endl;
    return 0;
}