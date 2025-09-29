#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {

            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 5, 4, 8, 9, 16};

    cout << linearSearch(arr, 6, 9) << endl;
    return 0;
}
