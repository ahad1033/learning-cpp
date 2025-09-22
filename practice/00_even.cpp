#include <iostream>

using namespace std;

int main()
{
    int range;

    cout << "Please enter a range to print even numbers: " << endl;
    cin >> range;

    for (int i = 2; i <= range; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}