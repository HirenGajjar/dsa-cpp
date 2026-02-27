#include <iostream>
#include <vector>
using namespace std;
vector<int> product_of_array_except_self_brute_force(vector<int> array, int size)
{
    vector<int> answer(size, 1);
    for (int i = 0; i < size; i++)
    {
        //
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                answer[i] *= array[j];
            }
        }
    }
    return answer;
}
int main()
{
    // vector<int> array = {1, 2, 3, 4};
    vector<int> array = {-1, 1, 0, -3, 3};
    int size = array.size();
    vector<int> answer = product_of_array_except_self_brute_force(array, size);
    for (int value : answer)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}