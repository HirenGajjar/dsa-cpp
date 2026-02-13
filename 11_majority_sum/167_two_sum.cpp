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

vector<int> pair_sum_optimal(vector<int> vec, int target)
{

    vector<int> answer;
    int start = 0, end = vec.size() - 1;
    while (start < end)
    {
        if (vec[start] + vec[end] > target)
        {
            end--;
        }
        else if (vec[start] + vec[end] < target)
        {
            start++;
        }
        else if (vec[start] + vec[end] == target)
        {
            answer.push_back(start);
            answer.push_back(end);
            break;
        }
    }
    return answer;
}
int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    // vector<int> answer = pair_sum_brute_force(vec, target);
    // cout << answer[0] << "," << answer[1];

    vector<int> answer = pair_sum_optimal(vec, target);
    cout << answer[0] << "," << answer[1];
    cout << endl;
    return 0;
}