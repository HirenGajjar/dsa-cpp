#include <iostream>
using namespace std;
void is_perfect_number(int number)
{
    int temp = number;
    int sum = 0;
    if (number <= 0)
    {
        cout << temp << " is not perfect number." << endl;
    }
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == temp)
    {
        cout << temp << " is perfect number." << endl;
    }
    else
    {
        cout << temp << " is not perfect number." << endl;
    }
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    is_perfect_number(number);
    cout
        << endl;
    return 0;
}