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

    int num;
    int total = 0;

    cout << "Please enter a number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        total += i;
    }

    cout << "Total is: " << total << endl;

    return 0;
}