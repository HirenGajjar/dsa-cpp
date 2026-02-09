#include <iostream>
using namespace std;
int largest = INT_MIN;
int main()
{
    int array[] = {3, 4, 5, 3, 23, 234, 34, -34, 3, 42, 34, 23, 42, 34, 23412, 2, 34, 234};
    for (int i = 0; i <= (sizeof(array) / sizeof(int)) - 1; i++)
    {
        // if (largest < array[i])
        // {
        //     largest = array[i];
        // }

        largest = max(largest, array[i]);
    }
    cout << "Largest value from the array is : " << largest << endl;
    return 0;
}