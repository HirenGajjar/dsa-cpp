#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum += num;
    }
    cout << "Sum of first " << num << " odd  numbers is " << sum << endl;
    sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += (2 * i);
    }
    cout << "Sum of first " << num << " even numbers is " << sum << endl;
    return 0;
}