#include <iostream>
using namespace std;
int main()
{

    int marks[5] = {67, 68, 87, 66, 90};

    for (int i = 0; i <= (sizeof(marks) / sizeof(int)) - 1; i++)
    {
        cout << marks[i] << endl;
    }

    int size = 3, age[size];

    cout << "Enter the age : ";
    for (int i = 0; i <= ((sizeof(age) / sizeof(int)) - 1); i++)
    {
        cin >> age[i];
    }

    for (int i = 0; i <= ((sizeof(age) / sizeof(int)) - 1); i++)
    {
        cout << age[i] << " ," << endl;
    }
    return 0;
}