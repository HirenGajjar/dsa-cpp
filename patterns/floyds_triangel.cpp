#include <iostream>
using namespace std;
int main()
{
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */

    int n, k = 1;
    cout << "Enter the number : ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k;
    //         k++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << k;
    //         k++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    /*
    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU
     */
    char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}