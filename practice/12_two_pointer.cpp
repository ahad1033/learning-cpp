#include <iostream>

using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;

    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{

    int arr[] = {2, 5, 8, 10, 15, 20};

    int size = 6;

    reverseArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}