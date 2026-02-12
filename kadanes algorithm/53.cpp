#include <iostream>
#include <vector>
using namespace std;
int maximum_sum_subarray(int array[], int size)
{
    int max_sum = INT_MIN;
    for (int i = 0; i <= size; i++)
    {
        int current_sum = 0;
        for (int j = i; j <= size; j++)
        {
            current_sum += array[j];
            max_sum = max(max_sum, current_sum);
        }
    }
    return max_sum;
}
int main()
{
    int array[] = {1, 2, 23, 42, 3, -1231, 23, 123, 40};
    int size = (sizeof(array) / sizeof(int)) - 1;
    cout << "Max sum : " << maximum_sum_subarray(array, size) << endl;
    return 0;
}