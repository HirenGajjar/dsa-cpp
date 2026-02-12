#include <iostream>
using namespace std;
void intersection_of_two(int array_one[], int array_two[], int size_one, int size_two)
{
    for (int i = 0; i <= size_one; i++)
    {
        if (array_one[i] == -999999)
        {
            continue;
        }
        for (int j = 1; j <= size_one; j++)
        {
            if (array_one[i] == array_one[j] && i != j)
            {
                array_one[i] = -999999;
            }
        }
    }
    for (int i = 0; i <= size_one; i++)
    {
        for (int j = 0; j <= size_two; j++)
        {
            if (array_one[i] == array_two[j])
            {
                cout << array_one[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    int array_one[] = {1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 2, 2, 3, 4, 52, 4, 234, 234, 2},
        size_one = (sizeof(array_one) / sizeof(int)) - 1;
    int array_two[] = {6, 5, 5, 5, 6, 3, 5, 4, 4, 3, 3, 33, 12, 31, 2, 235, 234, 12, 31, 23, 123, 3245, 24, 63, 465, 345},
        size_two = (sizeof(array_two) / sizeof(int)) - 1;
    intersection_of_two(array_one, array_two, size_one, size_two);
    return 0;
}