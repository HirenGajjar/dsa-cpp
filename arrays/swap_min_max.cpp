#include <iostream>
using namespace std;
void swap_min_max(int array[], int size)
{
    int index_of_largest = 0, index_of_smallest = 0, temp = 0;
    for (int i = 1; i <= size; i++)
    {
        if (array[i] < array[index_of_largest])
        {
            index_of_largest = i;
        }
        if (array[i] > array[index_of_smallest])
        {
            index_of_smallest = i;
        }
    }
    temp = array[index_of_smallest];
    array[index_of_smallest] = array[index_of_largest];
    array[index_of_largest] = temp;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = (sizeof(array) / sizeof(int)) - 1;
    swap_min_max(array, size);
    for (int i = 0; i <= size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}