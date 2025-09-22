#include <iostream>

using namespace std;

int main()
{
    int range;

    cout << "Please enter a range to print odd numbers: " << endl;
    cin >> range;

    for (int i = 1; i <= range; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}