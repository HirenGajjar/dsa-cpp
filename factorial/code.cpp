#include <iostream>
using namespace std;
int main()
{

    double num, factorial = 1;
    cout << "Enter the number : " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}