// sum of numbers divisible by 3 in 1 to n

#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of numbers divisible by 3 in 1 to " << num << " is " << sum << endl;
    return 0;
}