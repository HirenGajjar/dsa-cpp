#include <iostream>
using namespace std;
int gcd_hcf(int num_1, int num_2)
{
    int gcd_hcf = 0;
    for (int i = 1; i <= min(num_1, num_2); i++)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {

            gcd_hcf = i;
        }
    }
    return gcd_hcf;
}

int gcd_hcf_optimized(int num_1, int num_2)
{
    int gcd_hcf = 0;
    for (int i = min(num_1, num_2); i >= 1; i--)
    {
        if (num_1 % i == 0 && num_2 % i == 0)
        {
            gcd_hcf = i;
            break;
        }
    }
    return gcd_hcf;
}
int gcd_hcf_best(int num_1, int num_2)
{
    while (num_2 > 0)
    {
        int rem = num_1 % num_2;
        num_1 = num_2;
        num_2 = rem;
    }
    return num_1;
}
int main()
{

    int num_1, num_2;
    cout << "Enter the first number : ";
    cin >> num_1;
    cout << "Enter the first number : ";
    cin >> num_2;

    // int answer = gcd_hcf(num_1, num_2);
    // int answer = gcd_hcf_optimized(num_1, num_2);
    int answer = gcd_hcf_best(num_1, num_2);
    cout << "GCD(" << num_1 << "," << num_2 << ") : " << answer << endl;
    cout << endl;

    return 0;
}