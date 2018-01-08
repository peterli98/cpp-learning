#include <iostream>

int main()
{
    int counter = 1;

    for(int i = 1; i <= 200; i++)
    {
        std::cout << i << " "; 

        if(counter % 20 == 0)
        {
            std::cout << "\n";
        }

        counter++;
    }

    //a % b always resolves to the sign of a.
    //the result is -2 
    std::cout << -5 % 3 << "\n";

    return 0;
}