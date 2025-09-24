#include <iostream>

using namespace std;

int main()
{
    int n = 9;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    int n = 9;

    /*
        PRINT NUMBERS TRIANGLE
    */
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    /*
        PRINT CHARACTERS TRIANGLE
    */
    // int n = 26;

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    /*
        PRINT NUMBERS IN SEQUENCE
     */
    // int n = 9;

    // for (int i = 0; i < n; i++)
    // {
    //     int num = 1;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num += 1;
    //     }
    //     cout << endl;
    // }

    return 0;
}