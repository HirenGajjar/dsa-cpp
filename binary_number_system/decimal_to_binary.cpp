#include <iostream>
using namespace std;
int decimal_to_binary(int decimal)
{
    int power = 1, binary = 0;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        decimal /= 2;
        binary += rem * power;
        power *= 10;
    }
    return binary;
}

int main()
{
    int decimal;
    cout << "Enter the value in decimal : ";
    cin >> decimal;
    cout << "The binary value of " << decimal << " is : " << decimal_to_binary(decimal) << endl;
    return 0;
}