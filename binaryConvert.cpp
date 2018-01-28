#include <iostream>
#include <string>

std::string decimalToBinary(int decimalNum);

int main()
{
    std::cout << decimalToBinary(80) << "\n";

    return 0;
}

//unsigned int
std::string decimalToBinary(int decimalNum)
{
    std::string binaryNum = "";
    int remainder = 0;

    while(decimalNum != 0)
    {
        remainder = decimalNum % 2;
        decimalNum = decimalNum / 2;
        binaryNum = binaryNum + std::to_string(remainder);
    }
    
    reverse(binaryNum.begin(), binaryNum.end());

    return binaryNum;
}
