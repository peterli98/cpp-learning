#include <iostream>

int main()
{
    int input = 0;

    std::cout << "Please enter a number \n";
    std::cin >> input;

    if(input % 2 == 0)
    {
        std::cout << "Your number is even \n";
    }
    else
    {
        std::cout << "Your number is odd \n";
    }

    return 0;
}