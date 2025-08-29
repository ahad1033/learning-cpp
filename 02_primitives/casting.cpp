#include <iostream>

using namespace std;

int main()
{
    float price = 49.99;

    int roundedPrice = (int)price; // short, int

    int quantity = 2;

    double total = price * quantity; // using int here will delete the precisions

    cout << total << endl;

    return 0;
}