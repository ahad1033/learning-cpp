#include <iostream>

using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /*
        PRINT STARS AS SQUARE FORM
    */
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }

    /*
        PRINT CHARACTERS AS SQUARE FORM
    */
    // for(int i = 1; i <= n; i ++){
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++){

    //     cout << ch << " ";
    //     ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    /*
        PRINT NUMBER IN SEQUENCE
     */
    // int n = 3;
    // int num = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout << num << " ";
    //         num ++;
    //     }
    //     cout << endl;
    // }

    return 0;
}