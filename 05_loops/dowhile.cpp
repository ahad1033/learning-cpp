#include <iostream>
#include <string>

using namespace std;

int main()
{
    string response;
    do
    {
        cout << "Do you want more coffee? (y/n)";
        getline(cin, response);
    } while (response != "n");

    return 0;
}