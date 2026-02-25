#include <iostream>
#include <cmath>
using namespace std;
void is_prime_new(int number)
{
    if (number == 2)
    {
        cout << number << " is prime.";
        return;
    }
    if ((number < 2) || (number % 2 == 0))
    {
        cout << number << " is not prime.";
        return;
    }

    bool is_prime = true;
    for (int i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << number << " is prime.";
    }
    else
    {
        cout << number << " is not prime";
    }
}
void is_prime(int number)
{
    if (number < 2)
    {
        cout << number << " is not a prime number." << endl;
        return;
    }

    bool prime = true;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            prime = false;
            break;
        }
    }

    if (prime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;
}
void all_possible_divisors(int number)
{
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << number << " " << endl;
}
void find_divisors(int number)
{
    int step = (number % 2 == 0) ? 1 : 2;

    for (int i = 1; i * i <= number; i += step)
    {
        if (number % i == 0)
        {
            cout << i << " ";

            if (i * i != number)
            {
                cout << number / i << " ";
            }
        }
    }
}
void find_all_possible_divisors(int number)
{
    if (number <= 0)
    {
        cout << "Invalid input.";
    }
    if (number == 1)
    {
        cout << 1;
    }
    if (number > 1)
    {
        cout << 1 << " ";
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                cout << i << " ";
                if ((number / i) != i)
                {
                    cout << (number / i) << " ";
                }
            }
        }
    }
    cout << number << " ";
}
void is_armstrong(int number)
{
    double temp = number, sum = 0;
    do
    {
        sum = sum + pow(number % 10, 3);
        number /= 10;

    } while (number > 0);

    if (temp != sum)
    {
        cout << temp << " is not armstrong number." << endl;
    }
    else
    {
        cout << temp << " is armstrong number." << endl;
    }
}
void check_palindrome(int number)
{
    int reverse = 0;
    int temp = number;
    do
    {
        reverse = (reverse * 10) + (number % 10);
        number /= 10;
    } while (number > 0);

    if (temp != reverse)
    {
        cout << temp << " is not palindrome number." << endl;
    }
    else
    {

        cout << temp << " is palindrome number." << endl;
    }
}
int reverse_the_digit(int number)
{

    int reverse = 0;
    do
    {
        reverse = (reverse * 10) + (number % 10);
        number = number / 10;
    } while (number > 0);
    return reverse;
}
void extract_digits(int number)
{
    number = abs(number);
    do
    {
        cout << number % 10 << " ";
        number /= 10;
    } while (number > 0);
    cout << endl;
}
int count_digits_log(int number)
{
    if (number == 0)
    {
        return 1;
    }
    return (int)(log10(number) + 1);
}
int count_digits(int number)
{
    int count = 0;
    number = abs(number);
    do
    {
        number /= 10;
        count++;
    } while (number > 0);

    return count;
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    cout << "Digit Extraction : ";
    extract_digits(number);

    cout << "Count the number of digits : ";
    int answer = count_digits(number);
    cout << answer << endl;

    int log_digits = count_digits_log(number);
    cout << "Number of digits using log10(number) : " << log_digits << endl;

    int ans = reverse_the_digit(number);
    cout << "Reverse of " << number << " is : " << ans << endl;

    check_palindrome(number);
    is_armstrong(number);

    cout << "All possible divisors for (method 1)" << number << " are :";
    all_possible_divisors(number);

    cout << "All possible divisors for (method 2)" << number << " are :";
    find_divisors(number);

    cout << endl
         << "All possible divisor for (method 3) " << number << " are : ";
    find_all_possible_divisors(number);
    cout << endl;
    is_prime(number);

    cout
        << endl;
    return 0;
}