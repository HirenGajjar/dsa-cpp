#include <iostream>
using namespace std;
void intersection_of_two_elements(int array_one[], int array_two[], int size_one, int size_two)
{
    for (int i = 0; i <= size_one; i++)
    {
        for (int j = 0; j <= size_two; j++)
        {
            if (array_one[i] == array_two[j])
            {
                cout << array_one[i] << " ";
                array_two[j] = -9999999;
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    int array_one[] = {1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 43, 2, 23, 234, 2, 34, 98, 2334, 0234, 88234, 623, 13};
    int array_two[] = {9, 7, 6, 8, 9, 4, 322, 35657, 9999, 123, 232};
    int size_one = (sizeof(array_one) / sizeof(int)) - 1;
    int size_two = (sizeof(array_two) / sizeof(int)) - 1;
    intersection_of_two_elements(array_one, array_two, size_one, size_two);
    return 0;
}