#include <iostream>
using namespace std;
long power_x_n(long num, long power)
{
    long answer = 1;

    while (power > 0)
    {
        if (power % 2 == 0)
        {
            num *= num;
            power /= 2;
        }
        else
        {
            answer *= num;
            power -= 1;
        }
    }

    return answer;
}
int main()
{
    long num, power;
    cout << "Enter the number : ";
    cin >> num;
    cout << endl
         << "Enter the value of power : ";
    cin >> power;
    long answer = power_x_n(num, power);
    cout << answer;
    cout << endl;
    return 0;
}