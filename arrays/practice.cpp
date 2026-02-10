#include <iostream>
using namespace std;

// int sum(int array[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i <= size; i++)
//     {
//         sum += array[i];
//     }
//     return sum;
// }

// int product(int array[], int size)
// {
//     int product = 1;
//     for (int i = 0; i <= size; i++)
//     {
//         product *= array[i];
//     }
//     return product;
// }

int main()
{
    int array[] = {2, 1, 3, 4, 7, 6, 5, 1, 2, 3, 4, 5, 6, 4, 3, 2, 11, 12, 2, 399};
    int size = (sizeof(array) / sizeof(int)) - 1;

    // cout << "Sum of all the elements in the array is : " << sum(array, size) << endl;
    // cout << "Product of all the elements in the array is : " << product(array, size) << endl;

    return 0;
}