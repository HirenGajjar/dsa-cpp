#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    /*
    ****
    ****
    ****
    ****
    */

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
    1234
    1234
    1234
    1234
     */
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    /*
    ABCD
    ABCD
    ABCD
    ABCD
    */
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }

    //     cout << endl;
    // }

    /*
    123
    456
    789
    */
    int k = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}