#include <iostream>
#include <string>

using namespace std;

int main()
{

    string order;

    cout << "Enter your order (tea/coffee)";
    getline(cin, order);

    if (order == "Tea")
    {
        cout << "You have ordered tea" << endl;
    }

    return 0;
}
