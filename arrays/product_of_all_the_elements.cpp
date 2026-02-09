#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    long int product = 1;
    for (int i = 0; i <= (sizeof(array) / sizeof(int)) - 1; i++)
    {
        product = product * array[i];
    }
    cout << "Product of all the elements in array is : " << product << endl;
    return 0;
}