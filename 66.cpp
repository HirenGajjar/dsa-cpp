#include <iostream>
#include <vector>
using namespace std;
// vector<int> plus_one_brute_force(vector<int> vec)

// {
//     vector<int> answer;
//     int size = vec.size();
//     int decimal = 0;
//     int power = 1;

//     for (int i = size - 1; i >= 0; i--)
//     {
//         decimal += (power * vec[i]);
//         power *= 10;
//     }
//     decimal++;

//     while (decimal > 0)
//     {
//         answer.insert(answer.begin(), decimal % 10);
//         decimal /= 10;
//     }
//     return answer;
// }

vector<int> plus_one(vector<int> vec)
{

    if (vec.size() == 1 && vec[vec.size() - 1] == 9)
    {
        vec.pop_back();
        vec.push_back(1);
        vec.push_back(0);
    }

    else
    {
        for (int i = vec.size() - 1; i >= 0; i--)
        {

            if (vec[i] != 9)
            {
                vec[i]++;
                break;
            }
            else if (vec[i] == 9)
            {
                vec[i] = 0;
            }
        }
        if (vec[0] == 0)
        {
            vec[0] = 1;
            vec.push_back(0);
        }
    }
    return vec;
}
int main()
{
    vector<int> vec = {0};
    // vector<int> answer = plus_one_brute_force(vec);
    // for (int i : answer)
    // {
    //     cout << i << " ";
    // }
    vector<int> answer = plus_one(vec);
    for (int i : answer)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}