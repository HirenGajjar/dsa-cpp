#include <iostream>
using namespace std;
double power_x_n(double num, long long power)
{
    double answer = 1;
    if (power < 0)
    {
        num = 1 / num;
        power = -power;
    }
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
    double num;
    long long power;
    cout << "Enter the number : ";
    cin >> num;
    cout << endl
         << "Enter the value of power : ";
    cin >> power;
    double answer = power_x_n(num, power);
    cout << answer;
    cout << endl;
    return 0;
}