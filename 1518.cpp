#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int drinknexchange(int f, int e, int d, int exchangerate)
{

    if (f == 0)
        return d;

    while (f != 0)
    {
        d += f;
        e += f;
        f = e / exchangerate;
        e = e % exchangerate;

        // cout << d;

        return drinknexchange(f, e, d, exchangerate);
    }

}

    int numWaterBottles(int numBottles, int numExchange)
    {
        return drinknexchange(numBottles, 0, 0, numExchange);
    }

    int main()
    {

        cout << numWaterBottles(19, 4);
    }