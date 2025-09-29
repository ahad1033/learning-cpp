#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int numArr[] = {1, 50, 5, 30, -78};

    int size = 5;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (numArr[i] < smallest)
        // {
        //     smallest = numArr[i];
        // }

        smallest = min(numArr[i], smallest);
        largest = max(numArr[i], largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}