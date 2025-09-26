#include <iostream>

using namespace std;

int binToDeci(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int remainder = binNum % 10;

        ans += remainder * pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main()
{
    cout << binToDeci(1110111) << endl;

    return 0;
}
