#include <iostream>

int function(int num)
{
    int sqr = num * num;

    return sqr;
}

int main()
{
    int userInput;
    std::cout << "Enter your number: " << std::endl;
    std::cin >> userInput;

    std::cout << "Square of " << userInput << " is: " << function(userInput) << std::endl;

    return 0;
}