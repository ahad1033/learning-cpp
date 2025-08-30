#include <iostream>

using namespace std;

int main()
{
    bool isStudent;
    int shirts;

    cout << "Are you a student? (1 for Yes and 0 for No)";
    cin >> isStudent;

    cout << "How many shirt did you purchase?";
    cin >> shirts;

    if (isStudent || shirts > 15)
    {
        cout << "Your are eligible for discount!" << endl;
    }
    else
    {
        cout << "Your are not eligible for discount!" << endl;
    }

    return 0;
}