#include <iostream>
#include <string>

using namespace std;

int main()
{

    string response;

    while (true)
    {
        cout << "Do you want more coffee? (y/n)";

        getline(cin, response);

        if (response != "y")
        {
            break;
        }

        cout << "Here is you another coffee. Enjoy!";
    }

    cout << "Thank You!";

    return 0;
}