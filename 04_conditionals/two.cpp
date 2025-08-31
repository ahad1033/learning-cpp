#include <iostream>

using namespace std;

int main()
{

    int hour;

    cout << "Enter the current hour (1-23)";
    cin >> hour;

    if (hour >= 8 && hour < 18)
    {
        cout << "Shop is OPEN!" << endl;
    }
    else
    {
        cout << "Shop is CLOSED!" << endl;
    }

    return 0;
}