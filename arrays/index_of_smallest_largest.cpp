#include <iostream>
using namespace std;
int largest = INT_MIN, smallest = INT_MAX;
int main()
{
    int array[] = {2, 3, 4, 5, 6, -21, 2, 3, 4, 54, 23, 23, 3123, 12, 2, 3, 2};
    int index_of_smallest = 0, index_of_largest = 0;
    for (int i = 0; i <= (sizeof(array) / sizeof(int)) - 1; i++)
    {

        /* if (smallest > array[i])
        {
            smallest = array[i];
            index_of_smallest = i;
        }
        if (largest < array[i])
        {

            largest = array[i];
            index_of_largest = i;
        }
        */
    }

    cout << "Smallest in the array is " << smallest << "at the index of : " << index_of_smallest << " largest in the array is " << largest << " at the index of " << index_of_largest << endl;
    return 0;
}