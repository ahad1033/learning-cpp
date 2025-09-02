#include <iostream>
#include <string>

using namespace std;

int main()
{

    /*
    // Print all numbers from 1 to 100.
    int num = 100;

    for(int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
    */

    /*
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
    */

    /*
    // Take a number from the user and print its multiplication table (up to 10).
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    */

    // Print numbers from N down to 1 using a loop.
    int num;

    cout << "Please enter a number: " << endl;
    cin >> num;

    while (num >= 1)
    {
        cout << num << endl;

        num--;
    }

    return 0;
}