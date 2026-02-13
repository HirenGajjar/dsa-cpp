#include <iostream>
#include <vector>
using namespace std;
// vector<int> pair_sum_brute_force(vector<int> vec, int target)
// {
//     vector<int> answer;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         for (int j = i + 1; j < vec.size(); j++)
//         {
//             if (vec[i] + vec[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> answer = pair_sum_brute_force(vec, target);
    cout << answer[0] << "," << answer[1];
    cout << endl;
    return 0;
}