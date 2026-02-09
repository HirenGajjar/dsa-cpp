#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i <= (sizeof(array) / sizeof(int)) - 1; i++)
    {
        sum += array[i];
    }
    cout << "Sum of all the elements in array is : " << sum << endl;
    return 0;
}