#include <iostream>

using namespace std;

int main()
{

    // Lamda
    auto printProduct = [](int products)
    {
        cout << "You have  bought total: " << products << " products" << endl;
    };

    printProduct(4);

    return 0;
}