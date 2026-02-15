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

// int majority_element_sorted(vector<int> vec, int n)
// {
//     sort(vec.begin(), vec.end());
//     int frequency = 1;
//     int answer = vec[0];

//     for (int i = 1; i <= n - 1; i++)
//     {
//         if (vec[i] == vec[i - 1])
//         {
//             frequency++;
//         }
//         else
//         {
//             frequency = 1;
//             answer = vec[i];
//         }
//         if (frequency > n / 2)
//         {
//             return answer;
//         }
//     }
//     return answer;
// }

// int majority_element_sorted_variation(vector<int> vec)
// {
//     sort(vec.begin(), vec.end());
//     return vec[vec.size() / 2];
// }

int majority_element_moores_vote_algorithm(vector<int> vec)
{
    int frequency = 0, answer = 0;
    for (int i = 0; i < vec.size(); i++)
    {

        if (frequency == 0)
        {
            answer = vec[i];
        }
        if (answer == vec[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    return answer;
}
int main()
{
    vector<int> vec = {1, 3, 1, 1, 4, 1, 1, 5, 1, 1, 6, 2, 2};

    vector<int> vec2 = {3, 2, 3};
    int n = vec.size();
    // int answer = majority_element_brute_force(vec, n);
    // cout << "Majority element : " << answer << endl;

    // int answer = majority_element_sorted(vec, n);
    // cout << answer;

    // int answer = majority_element_sorted_variation(vec);
    // cout << answer;

    int answer = majority_element_moores_vote_algorithm(vec);
    cout << "Answer : " << answer;
    cout << endl;
    return 0;
}