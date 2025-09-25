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

    /*
        REVERSE TRIANGLE
    */
    // int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {

    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    /*
        FLOYD'S TRIANGLE
    */
    // int n = 5;

    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {

    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    /*
        FLOYD'S TRIANGLE [ ALPHABET ]
    */
    // int n = 5;

    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {

    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    return 0;
}