#include <iostream>
using namespace std;
int binary_to_decimal(int binary)
{
    int decimal = 0, power = 1;
    while (binary > 0)
    {
        int rem = binary % 2;
        binary /= 10;
        decimal += rem * power;
        power *= 2;
    }

    return decimal;
}
int main()
{
    int binary;
    cout << "Enter the value in binary : ";
    cin >> binary;
    cout << "The decimal value of " << binary << " is " << binary_to_decimal(binary) << endl;
    return 0;
}