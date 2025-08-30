#include <iostream>

using namespace std;

int main()
{
    int shirts;
    cout << "Enter the number of shirts: ";
    cin >> shirts;

    if (shirts < 10)
    {
        // shirts = shirts + 5;
        shirts += 5;
    }

    cout << "You total shirts are: " << shirts; // << endl

    return 0;
}