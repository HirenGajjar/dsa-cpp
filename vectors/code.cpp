#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3};

    vec.push_back(4);
    vec.push_back(5);
    vec.pop_back();
    for (int value : vec)
    {
        cout << value << " ";
    }
    cout << endl
         << "The front element in the vector : " << vec.front();
    cout << endl
         << "The last element in the vector : " << vec.back();

    cout << endl
         << "Each element in vector using 'at' method : ";

    for (int i = 0; i < 4; i++)
    {
        cout << endl
             << vec.at(i) << " ";
    }
    cout << endl;

    return 0;
}