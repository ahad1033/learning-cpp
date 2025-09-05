#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Print all numbers from 1 to 100.
    int num = 100;

    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }

    // Take an integer N from the user and print the sum of numbers from 1 to N.
    int num;
    int total = 0;

    cout << "Please enter a number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        total += i;
    }

    cout << "Total is: " << total << endl;

    // Take a number from the user and print its multiplication table (up to 10).
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    // Print numbers from N down to 1 using a loop.
    int num;

    cout << "Please enter a number: " << endl;
    cin >> num;

    while (num >= 1)
    {
        cout << num << endl;

        num--;
    }

    // Take a number N and calculate its factorial using a loop.
    int num;
    int res = 1;

    cout << "Please enter a number: " << endl;
    cin >> num;

    for (int i = num; num >= 1; i--)
    {
        res *= i;
    }

    cout << res << endl;

    // Take a number and count how many digits it has (e.g., 12345 → 5 digits).
    int num;
    int count = 0;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10;
            count++;
        }
    }

    cout << "Total digit is: " << count << endl;

    // Find the sum of digits of a number (e.g., 1234 → 1+2+3+4 = 10).
    int num, sum = 0;
    cout << "Enter a number: " << endl;

    cin >> num;

    while (num != 0)
    {
        int lastNum = num % 10;
        sum += lastNum;
        num /= 10;
    }

    cout << "Total: " << sum << endl;

    // Reverse the digits of a number (e.g., 1234 → 4321).
    long num;
    long reverseNum = 0;

    cout << "Enter a number: " << endl;
    cin >> num;

    for (int i = 0; num != 0; i++)
    {
        int lastNum = num % 10;
        num = num / 10;
        reverseNum = (reverseNum * 10) + lastNum;
    }

    cout << "Reversed num: " << reverseNum << endl;

    // Palindrome check
    long num;
    long reverseNum = 0;

    cout << "Enter a number: " << endl;
    cin >> num;

    long originalNum = num;

    for (int i = 0; num != 0; i++)
    {
        int lastNum = num % 10;
        num = num / 10;
        reverseNum = (reverseNum * 10) + lastNum;
    }

    bool isPalindrome = (reverseNum == originalNum);

    cout << (isPalindrome ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}