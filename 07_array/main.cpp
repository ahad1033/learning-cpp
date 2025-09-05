#include <iostream>

using namespace std;

int main()
{
    int temperature[4] = {25, 30, 32, 35};

    cout << "Temperature: " << endl;
    cout << "Second Position of Temperature: " << temperature[1] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << temperature[i] << "degree C" << endl;
    }
    return 0;
}