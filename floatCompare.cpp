#include <iostream>
#include <cmath>

bool isAlmostEqual(double x, double y, double epsilon);

int main()
{
    double d1(100 - 99.99);
    double d2(10 - 9.99);
    double epsilon = 0.001;

    if(d1 == d2 /*|| isAlmostEqual(d1, d2, epsilon) == true*/)
    {
        std::cout << "d1 is equal to d2" << "\n";
    }
    else if(d1 > d2 /* && isAlmostEqual(d1, d2, epsilon) == false*/)
    {
        std::cout << "d1 is bigger than d2" << "\n";
    }
    else if(d1 < d2 /* && isAlmostEqual(d1, d2, epsilon) == false */)
    {
        std::cout << "d1 is smaller than d2" << "\n";
    }

    std::cout << d1 << "\n";
    std::cout << d2 << "\n";
}

bool isAlmostEqual(double x, double y, double epsilon)
{
    return fabs(x - y) <= ( (fabs(x) > fabs(b) ? fabs(x) : fabs(y)) * epsilon);
}