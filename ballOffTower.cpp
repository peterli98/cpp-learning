#include <iostream>
#include "constants.h"

double calculateMetersTravelled(int seconds);
double calculateCurrentHeight(double initialHeight, int seconds);
void printCurrentHeight(int seconds, double initialHeight);


int main()
{
    double towerHeight (0);

    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> towerHeight;

    printCurrentHeight(0, towerHeight);
    printCurrentHeight(1, towerHeight);
    printCurrentHeight(2, towerHeight);
    printCurrentHeight(3, towerHeight);
    printCurrentHeight(4, towerHeight);
    printCurrentHeight(5, towerHeight);
    
}

double calculateMetersTravelled(int seconds)
{
    double metersTravelled = 0;
    metersTravelled = (constants::earth_gravity * seconds * seconds)/2;

    return metersTravelled;
}

double calculateCurrentHeight(double initialHeight, int seconds)
{
    double currentHeight = 0;
    currentHeight = initialHeight - calculateMetersTravelled(seconds);
    return currentHeight;
}

void printCurrentHeight(int seconds, double initialHeight)
{
    double height = calculateCurrentHeight(initialHeight, seconds);
    if(height > 0.0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    }
    else
    {
        std::cout << "At " << seconds << " seconds, the ball is on the ground\n";
    }
}