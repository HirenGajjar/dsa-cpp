#include <iostream>
using namespace std;
int smallest = INT_MAX;
int main()
{
    int array[] = {4, 5, 6, -2, -3, 3, 3, 2, 3, 4, -12, 32, 3, 2, 34, 234};
    for (int i = 0; i <= (sizeof(array) / sizeof(int)) - 1; i++)
    {
        if (smallest > array[i])
        {
            smallest = array[i];
        }
    }
    cout << smallest << endl;
    return 0;
}