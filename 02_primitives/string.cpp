#include <iostream>
#include <string>

using namespace std;

int main()
{
    string favoriteTea = "Lemon Tea\n";

    // escape sequence
    /*
        /t gives tab
        /n for new line
    */

    string description = "It is made with \"Lemon\" also";

    cout << "What is your name?\n";
    string userName;

    getline(cin, userName);

    // cout << favoriteTea << description << endl;

    return 0;
}