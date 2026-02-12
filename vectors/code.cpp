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

    /*Size vs Capacity*/

    vector<int> new_vec = {1, 2, 3, 4};
    cout << endl
         << "Size of the new_vec : " << new_vec.size() << " and capacity is " << new_vec.capacity();

    new_vec.push_back(5);
    cout << endl
         << "Size of the new_vec : " << new_vec.size() << " and capacity is " << new_vec.capacity();

    new_vec.push_back(6);
    cout << endl
         << "Size of the new_vec : " << new_vec.size() << " and capacity is " << new_vec.capacity();

    new_vec.push_back(7);
    cout << endl
         << "Size of the new_vec : " << new_vec.size() << " and capacity is " << new_vec.capacity();

    new_vec.push_back(8);
    cout << endl
         << "Size of the new_vec : " << new_vec.size() << " and capacity is " << new_vec.capacity();
    new_vec.push_back(9);
    cout << endl
         << "Size of the new_vec : " << new_vec.size() << " and capacity is " << new_vec.capacity();

    cout
        << endl;

    return 0;
}