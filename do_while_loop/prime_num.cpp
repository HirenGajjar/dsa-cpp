#include <iostream>
using namespace std;
int main()
{

    int num, is_prime = 1;
    cout << "Enter the number : " << endl;
    cin >> num;
    // for (int i = 2; i < num; i++)
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
        else
        {
            is_prime = 1;
        }
    }

    cout << num << " is " << (is_prime == 1 ? " a prime number." : " not a prime number.") << endl;
    return 0;
}