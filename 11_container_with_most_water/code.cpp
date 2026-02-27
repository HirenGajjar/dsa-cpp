#include <iostream>
using namespace std;
int max_water_brute_force(int height[], int size)
{
    int max_water = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            int width = abs(j - i);
            int min_height = min(height[i], height[j]);
            int area = width * min_height;
            max_water = max(max_water, area);
        }
    }
    return max_water;
}

int max_water_two_pointer(int height[], int size)
{
    int max_water = 0;
    int start = 0, end = size - 1;
    while (start < end)
    {
        int width = abs(end - start);
        int min_height = min(height[start], height[end]);
        int area = width * min_height;
        max_water = max(area, max_water);
        // if (height[start] < height[end])
        // {
        //     start++;
        // }
        // else
        // {
        //     end--;
        // }

        height[start] < height[end] ? start++ : end--;
    }
    return max_water;
}
int main()
{
    int height[] = {1, 1};
    // int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(height) / sizeof(int);

    int answer = max_water_brute_force(height, size);
    cout << "Max water capacity is : " << answer << endl;

    cout << endl;
    return 0;
}