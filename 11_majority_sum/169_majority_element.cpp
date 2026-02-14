#include <iostream>
#include <vector>
using namespace std;
// int majority_element_brute_force(vector<int> vec, int n)
// {
//     for (int value : vec)
//     {
//         int majority_element = 0;
//         for (int item : vec)
//         {
//             if (value == item)
//             {
//                 majority_element++;
//             }
//         }
//         if (majority_element > n)
//         {
//             return value;
//         }
//     }
//     return -1;
// }

vector<int> majority_element_sorted(vector<int> vec, int n)
{
}
int main()
{
    vector<int> vec = {1, 2, 2, 4, 1, 4, 1, 4, 4, 4, 4, 4};
    int n = floor(vec.size() / 2);
    // int answer = majority_element_brute_force(vec, n);
    // cout << "Majority element : " << answer << endl;
    cout << endl;
    return 0;
}