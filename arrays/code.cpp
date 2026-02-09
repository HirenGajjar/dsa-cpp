#include <iostream>
using namespace std;
void double_array(int array[])
{
    cout << "in function : " << endl;
    for (int i = 0; i <= 3; i++)
    {
        array[i] *= 2;
    }
}
int main()
{
    int array[] = {1, 2, 3, 4};
    double_array(array);
    cout << "main : " << endl;
    for (int i = 0; i <= 3; i++)
    {
        cout << array[i];
    }
    return 0;
}