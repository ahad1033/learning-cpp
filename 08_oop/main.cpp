#include <iostream>
#include <vector>

using namespace std;

class Product
{
public:
    // Data Members (attribute)
    string productName;
    int count;
    vector<string> accessories;

    // Member Function
    void displayProductDetails()
    {
        cout << "Product name: " << productName << endl;
        cout << "Product count: " << count << endl;
        cout << "Accessories: ";
        for (string accessory : accessories)
        {
            cout << accessory << " ";
        }
        cout << endl;
    }
};

int main()
{
    Product item;

    item.productName = "T-shirt";
    item.count = 10;
    item.accessories = {"Watch", "Belt"};

    item.displayProductDetails();

    return 0;
}