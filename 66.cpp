#include <iostream>
#include <vector>
using namespace std;
vector<int> plus_one(vector<int> vec)

{
    vector<int> answer;
    int size = vec.size();
    int decimal = 0;
    int power = 1;

    for (int i = size - 1; i >= 0; i--)
    {
        decimal += (power * vec[i]);
        power *= 10;
    }
    decimal++;

    while (decimal > 0)
    {
        answer.insert(answer.begin(), decimal % 10);
        decimal /= 10;
    }
    return answer;
}
int main()
{
    vector<int> vec = {1, 9, 9};
    vector<int> answer = plus_one(vec);
    for (int i : answer)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}