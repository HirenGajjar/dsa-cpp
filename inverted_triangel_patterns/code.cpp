#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    /*First one*/
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n +1- i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i <= n - 1; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j <= n - 1 - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
    1111
     222
      33
       4
    */

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n + - i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j <= n - 1 - i; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    /*
    AAAA
     BBB
      CC
       D
    */
    char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= n - 1 - i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch++;
    }
    return 0;
}