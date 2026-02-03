#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // Solution 1
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 1)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 1)
        {
            for (int j = 1; j <= 2 * (n - i) - 3; j++) // only change here
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
