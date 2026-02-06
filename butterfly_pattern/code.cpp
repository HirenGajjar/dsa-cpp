#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int l = 1; l <= (n + 1) - k; l++)
        {
            cout << "*";
        }
        for (int l = 1; l <= (2 * k) - 2; l++)
        {
            cout << " ";
        }
        for (int l = 1; l <= (n + 1) - k; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}