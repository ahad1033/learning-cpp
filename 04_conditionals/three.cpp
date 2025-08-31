#include <iostream>

using namespace std;

int main()
{
    int totalOrder;

    double pricePerShirt = 2.5, totalPrice, discount;

    cin >> totalOrder;

    totalPrice = totalOrder * pricePerShirt;

    if (totalOrder > 20)
    {
        discount = 0.20;
    }
    else if (totalOrder >= 10 && totalOrder <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0.0;
    }

    // totalPrice = totalPrice - (totalPrice * discount);
    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is: " << totalPrice << endl;

    return 0;
}