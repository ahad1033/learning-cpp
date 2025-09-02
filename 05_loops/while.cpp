#include <iostream>
#include <string>

using namespace std;

int main()
{
    int productCount;

    cout << "Enter the number of product: ";
    cin >> productCount;

    // WHILE
    while (productCount > 0)
    {
        cout << "Packing product... \n"
             << productCount << " Remaining" << endl;

        productCount--;
    }

    cout << "All product are packed!";

    return 0;
}
