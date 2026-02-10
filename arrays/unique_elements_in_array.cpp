#include <iostream>
using namespace std;
void unique_elements(int array[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        bool is_match = false;
        for (int j = 0; j <= size; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                is_match = true;
            }
        }
        if (!is_match)
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int array[] = {1, 2, 3, 4, 4, 89, 4, 3, 2, 2, 1, 3, 4, 44, 40};
    int size = (sizeof(array) / sizeof(int)) - 1;
    unique_elements(array, size);
    return 0;
}