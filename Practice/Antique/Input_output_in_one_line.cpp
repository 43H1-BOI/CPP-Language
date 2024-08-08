#include<iostream>

int main( ){
    int money;
    std::cout << "How much money do you have?" << (std::cin >> money , money) << std::endl;
    return 0;
}