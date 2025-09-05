#include <iostream>

using namespace std;

int *prepareOrders(int count)
{
    int *orders = new int[count];

    for (int i = 0; i < count; i++)
    {
        orders[i] = (i + 1) * 10;
    }

    return orders;
}

int main()
{
    int orders = 5;
    int *ordArr = prepareOrders(orders);

    for (int i = 0; i < orders; i++)
    {
        cout << "Orders: " << i + 1 << ordArr[i] << endl;
    }

    delete[] ordArr;

    return 0;
}