#include <iostream>
#include <vector>
using namespace std;
int maximum_sum_array(int array[], int size)
{
    int max_sum = INT_MIN, current_sum = 0;
    for (int i = 0; i <= size; i++)
    {
        current_sum += array[i];
        cout << "Current sum : " << current_sum << endl;
        max_sum = max(max_sum, current_sum);
        cout << "Max sum : " << max_sum << endl;
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    return max_sum;
}
int main()
{
    int array[] = {5, 4, 3, -6, 9, 23, 0, -5, 2, 1};
    int size = (sizeof(array) / sizeof(int)) - 1;
    cout << "Max sum : " << maximum_sum_array(array, size);
    cout << endl;
    return 0;
}