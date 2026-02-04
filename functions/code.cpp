#include <iostream>
using namespace std;

float sum(float a, float b)
{

    float sum = a + b;
    return sum;
}

float mul(float a, float b)
{
    float mul = a * b;
    return mul;
}

float divi(float a, float b)
{
    float divi = a / b;
    return divi;
}

float subt(float a, float b)
{
    float subt = a - b;
    return subt;
}

float minOfTwo(float a, float b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

float sumOfN(float n)
{
    float sum;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int fact = 1;
        fact = n * factorial(n - 1);
        return fact;
    }
}

int noActionAfterReturn()
{
    cout << "Before return" << endl;
    return 2;
    cout << "I wont work! hah";
}
int sumOnCallByValue(int a, int b)
{
    return a + b;
}
int sumOnCallByReference(int a, int b)
{
    cout << endl;
    return a + b;
}

int sumOfTheDigitsOfTheNumber(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num /= 10;
        sum += lastDigit;
    }
    return sum;
}

int binomialCoefficient(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int allPrimeBetweenOneToN(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << ",";
        }
    }
    return 0;
}

int fibonacci(int which_number)
{
    int term_one = 0, term_two = 1, next_term;
    if (which_number == 1)
    {
        return term_one;
    }
    else if (which_number == 2)
    {
        return term_two;
    }
    else
    {
        for (int i = 3; i <= which_number; i++)
        {
            cout << term_one << ", ";
            next_term = term_one + term_two;
            term_one = term_two;
            term_two = next_term;
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    // cout << sum(4, 5.4) << endl;
    // cout << mul(12, 5) << endl;
    // cout << divi(60, 12) << endl;
    // cout << subt(4, 5.4) << endl;
    // cout << minOfTwo(15.5, 15.49) << endl;
    // cout << sumOfN(10) << endl;
    // cout << factorial(5) << endl;
    // cout << noActionAfterReturn();
    // cout << sumOnCallByReference(12, 12) << endl;
    // int refOfa = 4, refOfb = 6;
    // cout << sumOnCallByValue(refOfa, refOfb) << endl;
    // int num = 1234131231;
    // cout << "Sum of digits of " << num << " is " << sumOfTheDigitsOfTheNumber(num) << endl;

    // cout << binomialCoefficient(8, 2) << endl;

    // cout << "Is 12 a prime Number ? " << isPrime(12) << endl;

    // int number;
    // cout << "Enter the value of number : ";
    // cin >> number;
    // allPrimeBetweenOneToN(number);

    int which_number;
    cout << "Enter the number : ";
    cin >> which_number;
    fibonacci(which_number);
    return 0;
}