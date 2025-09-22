#include <iostream>

using namespace std;

int main()
{
    int range;

    int sum = 0;

    cout << "Please enter a range to print sum of even numbers: " << endl;
    cin >> range;

    for (int i = 2; i <= range; i += 2)
    {
        sum += i;
    }

    cout << "Sum of total even is: " << sum << endl;

    return 0;
}