#include <iostream>
using namespace std;
int revers_the_number(int number)
{
    int reversed_number = 0, last_digit = 0;
    while (number > 0)
    {
        last_digit = number % 10;
        number /= 10;
        reversed_number = (reversed_number * 10) + last_digit;
    }

    return reversed_number;
}
int main()
{
    int number;
    cout << "Enter the value : ";
    cin >> number;
    cout << "Reverse of the " << number << " is " << revers_the_number(number) << endl;
    return 0;
}