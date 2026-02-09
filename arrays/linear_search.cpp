#include <iostream>
using namespace std;
int linear_search(int array[], int size, int target)
{
    for (int i = 0; i <= size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[] = {3, 4, 5, 6, 8, 6, 5};
    int target = 8, size = (sizeof(array)) / (sizeof(int)) - 1;

    cout << "The index of " << target << " in the array is " << linear_search(array, size, target) << endl;
    return 0;
}