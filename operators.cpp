#include <iostream>

int main()
{
    //unary
    int x = 5;
    int y = -x;
    std::cout << "X is " << x << ", Y is " << y << std::endl;

    //casting
    double z = 1.6969;
    std::cout << "Z is " << z << ", the int version is " << static_cast<int>(z) << std::endl;
    //*NOTE: casting doesnt mean its going to round, it just takes the integer parts of the variable
    // can use casting to perform otherwise impossible operations


    return 0;
}