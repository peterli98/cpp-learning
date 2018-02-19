#include <iostream>

int main()
{
    int x(0);
    int y(0);

    std::cout << "Please enter an integer" << "\n";
    std::cin >> x;
    std::cout << "Please enter a larger integer" << "\n";
    std::cin >> y;

    if(y < x)
    {
        int temp(0);
        temp = x;
        x = y;
        y = temp; 
    } //temp destroyed here

    std::cout << "The smaller value is " << x << "\n";
    std::cout << "The larger value is " << y << "\n";

    return 0;
}
