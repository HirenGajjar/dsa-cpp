#include <iostream>
using namespace std;
int main()
{
    /*
     *
     **
     ***
     ****
     */

    int n;
    cout << "Enter the values of num : ";
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    /*
    1
    22
    333
    4444
    */
    // int k = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << k;
    //     }
    //     cout << endl;
    //     k++;
    // }
    // int k = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k;
    //     }
    //     cout << endl;
    //     k++;
    // }

    /*
    A
    BB
    CCC
    DDDD
    */
    // char ch = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    return 0;
}