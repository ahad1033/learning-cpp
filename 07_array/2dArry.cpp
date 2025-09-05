#include <iostream>

using namespace std;

int main()
{
    int sales[2][3] = {
        {
            2,
            4,
            6,
        },
        {1, 3, 5}};

    for (int i = 0; i < 2; i++)
    {
        cout << "First day: " << i + 1 << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << sales[i][j] << endl;
        }
    }

    return 0;
}