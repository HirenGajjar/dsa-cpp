#include <iostream>
#include <vector>
using namespace std;
vector<int> pair_sum(vector<int> vec, int target)
{
    vector<int> answer;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
    }
    return answer;
}
int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 17;
    vector<int> answer = pair_sum(vec, target);
    cout << answer[0] << "," << answer[1] << endl;

    return 0;
}