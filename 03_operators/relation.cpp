#include <iostream>

using namespace std;

int main()
{
    int shirts;

    cout << "Enter the number of shirts you have: ";
    cin >> shirts;

    if (shirts > 20)
    {
        cout << "You will get a GOLD badge" << endl;
    }
    else if (shirts >= 10 && shirts <= 20)
    {
        cout << "You will get a SILVER badge" << endl;
    }
    else
    {
        cout << "No badge for you";
    }

    return 0;
}