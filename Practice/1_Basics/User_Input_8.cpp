#include <iostream>

int main()
{

    std::string name;
    std::cout << "Enter your Full Name : ";
    std::getline(std::cin, name); // to read a string that also contains spaces

    int age;
    std::cout << "Enter Your Age : ";
    std::cin >> age; // to get user input

    /*
    std::string name;
    std::cout << "Enter your Full Name : ";
    std::getline(std::cin >> std::ws , name); // to read a string that also contains spaces
    //  the above line is written in case if there is already a std::cin used before the getline()
    //  function, a problem occurs , the problem with getline() function is it also reads the
    //  \n (new line character) which is already set with std::cin and this makes getline() function
    //  thinks that the user has inputed it's data and proceeded to next line

    */

    std::string nationality;
    std::cout << "Enter your Nationality : ";
    std::cin >> nationality; // to read a string which gets terminated after a space

    std::cout << "Hello " << name << " , " << std::endl;
    std::cout << "Your are " << age << " years old." << std::endl;
    std::cout << "You are " << nationality << std::endl;
}