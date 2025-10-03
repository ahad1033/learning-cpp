#include <iostream>
#include <climits>

using namespace std;

int reverseNum(int n)
{
    int copyNum = n;

    int reversed = 0;

    while (copyNum != 0)
    {
        int digit = copyNum % 10;

        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10)
        {
            return 0;
        }

        reversed = reversed * 10 + digit;

        copyNum /= 10;
    }

    return reversed;
}

int main()
{
    int n = 5986;

    cout << reverseNum(n) << endl;

    return 0;
}
