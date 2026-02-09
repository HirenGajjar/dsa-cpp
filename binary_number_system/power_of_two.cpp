#include <iostream>
using namespace std;
int power_of_two(int number)
{
    if ((number & (number - 1)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_power_of_two(int number)
{
    if (number <= 0)
    {
        return false;
    }

    while (number > 1)
    {
        if (number % 2 != 0)
        {
            return false;
        }
        number /= 2;
    }
    return number == 1;
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout << power_of_two(number) << endl;

    cout << is_power_of_two(number) << endl;
    cout << "False = " << false << endl;
    cout << "True = " << true << endl;

    cout << (1 > 1) << endl;
    return 0;
}