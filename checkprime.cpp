#include <iostream>

int main()
{
    

    std::cout << "Please enter a positive number" << std::endl;
    long num;

    while(!(std::cin >> num) || num < 0)
    {
        std::cout << "Invalid input, please try again" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for(long i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            std::cout << "Not a prime number" << std::endl;
            return 0;
        }
    }

    std::cout << "This is a prime number" << std::endl;
    
    return 0;
}

