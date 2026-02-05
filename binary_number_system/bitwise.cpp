#include <iostream>
using namespace std;

int decimal_to_binary(int decimal)
{
    int binary = 0, power = 1;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        decimal /= 2;
        binary += power * rem;
        power *= 10;
    }
    return binary;
}
int main()
{
    int a = 4, b = 8;
    cout << "a | b " << (a | b) << endl;
    cout << (8 | 4) << endl;
    cout << (a & b) << endl;
    cout << (4 & 8) << endl;
    cout << (4 & 5) << endl;
    cout << (0 & 4) << endl;
    cout << (5 & 4) << endl;

    cout << "XOR of 4 ^ 8 is " << (4 ^ 8) << endl;
    cout << "XOR of 12 ^ 1 is " << (12 ^ 1) << endl;

    int decimal;
    cout << "Enter the value in decimal : ";
    cin >> decimal;
    cout << "Binary of " << decimal << " is " << decimal_to_binary(decimal) << endl;
    cout << "Left shift binary of " << decimal << " by 3 : " << (decimal << 3) << endl;
    cout << (4 << 1) << endl;
    cout << (10 >> 2) << endl;

    cout << "6 | 10 " << (6 | 10) << endl
         << "6 & 10 " << (6 & 10) << endl
         << "6 ^ 10 " << (6 ^ 10) << endl;
    return 0;
}