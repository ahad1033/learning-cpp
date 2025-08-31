#include <iostream>

using namespace std;

int main()
{
    int choice;
    double price;

    cout << "Select your coffee\n";
    cout << "01. Black coffee\n";
    cout << "02. Cold coffee\n";
    cout << "03. Hot coffee\n";
    cout << "Enter your choice in number: \n";

    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "You selected Black coffee. Price: " << price;
        break;
    case 2:
        price = 4.0;
        cout << "You selected Cold coffee. Price: " << price;
        break;
    case 3:
        price = 3.0;
        cout << "You selected Hot coffee. Price: " << price;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}