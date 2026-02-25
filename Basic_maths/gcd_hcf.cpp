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
int main()
{

    int num_1, num_2;
    cout << "Enter the first number : ";
    cin >> num_1;
    cout << "Enter the first number : ";
    cin >> num_2;

    int answer = gcd_hcf(num_1, num_2);
    cout << "GCD(" << num_1 << "," << num_2 << ") : " << answer << endl;
    cout << endl;

    return 0;
}