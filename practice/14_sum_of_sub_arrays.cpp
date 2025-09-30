#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};

    int size = 6;

    int maxSum = INT_MIN;

    for (int start = 0; start < size; start++)
    {
        int currentSum = 0;

        for (int end = start; end < size; end++)
        {
            currentSum += arr[end];

            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Max subarray sum: " << maxSum << endl;

    return 0;
}