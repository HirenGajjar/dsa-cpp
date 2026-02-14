#include <iostream>
using namespace std;
void reverse_array(int array[], int size)
{
    int start = 0, end = size;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = (sizeof(array) / sizeof(int)) - 1;
    cout << "Reverse : " << endl;
    reverse_array(array, size);
    for (int i = 0; i <= size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}