#include <iostream>

using namespace std;

int main()
{
    int shirt;
    double pricePerShirt, totalPrice, discountPrice;

    cout << "Enter the number of shirts: ";
    cin >> shirt;
    
    cout << "Enter the price per shirt: ";
    cin >> pricePerShirt;

    totalPrice = shirt * pricePerShirt;

    if (totalPrice > 100)
    {
        discountPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discount price is: " << discountPrice << endl;
    }
    else
    {
        cout << "Total price is: " << totalPrice << endl;
    }

    return 0;
}