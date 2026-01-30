#include <iostream>
using namespace std;
int main()
{
    int num, even_sum = 0, odd_sum = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    cout << "Sum of even number from 1 to " << num << " is " << even_sum << " and " << "sum of odd numbers from 1 to " << num << " is " << odd_sum << endl;
    return 0;
}