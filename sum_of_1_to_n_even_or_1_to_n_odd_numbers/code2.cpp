#include <iostream>
using namespace std;
int main()
{
    int num, i = 1, even_sum = 0, odd_sum = 0;
    cout << "Enter the number :  " << endl;
    cin >> num;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }

        i++;
    }
    cout << "Sum of even numbers from 1 to " << num << " is " << even_sum << " and sum of odd numbers from 1 to " << num << " is " << odd_sum << endl;
    return 0;
}