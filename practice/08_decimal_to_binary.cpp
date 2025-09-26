#include <iostream>

using namespace std;

int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int remainder = decNum % 2;

        decNum /= 2;

        ans += (remainder * pow);

        pow *= 10;
    }

    return ans;
}

int main()
{
    int decNum = 45;

    int binary = decToBinary(decNum);

    cout << binary << endl;

    return 0;
}
