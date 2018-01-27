#include <iostream>
#include <cmath>

bool isAlmostEqual(double x, double y, double absEpsilon, double relEpsilon);

int main()
{
    double d1(100 - 99.99);
    double d2(10 - 9.99);
    double relEpsilon = 1e-8;
    double absEpsilon = 1e-12;

    if(d1 == d2 || isAlmostEqual(d1, d2, absEpsilon, relEpsilon) == true)
    {
        std::cout << "d1 is equal to d2" << "\n";
    }
    else if(d1 > d2 && isAlmostEqual(d1, d2, absEpsilon, relEpsilon) == false)
    {
        std::cout << "d1 is bigger than d2" << "\n";
    }
    else if(d1 < d2 && isAlmostEqual(d1, d2, absEpsilon, relEpsilon) == false)
    {
        std::cout << "d1 is smaller than d2" << "\n";
    }

    std::cout << d1 << "\n";
    std::cout << d2 << "\n";
}

bool isAlmostEqual(double x, double y, double absEpsilon, double relEpsilon)
{
    if (fabs(x - y) <= absEpsilon)
    {
        return true; 
    }

    //Knuth's algorithm
    return fabs(x - y) <= ( (fabs(x) > fabs(y) ? fabs(x) : fabs(y)) * relEpsilon);
}