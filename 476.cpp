#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int findComplement(int num)
{

    vector<int> bits;

    while (num != 0)
    {
        int d = num % 2;

        bits.push_back(d);
        num = num / 2;
    }

    for (int i = 0; i < bits.size(); i++)
    {
        cout << bits[i];
    }
    reverse(bits.begin(), bits.end());

    cout << endl;
    for (int i = 0; i < bits.size(); i++)
    {
        cout << bits[i];
    }

    for (int i = 0; i < bits.size(); i++)
    {
        if (bits[i] == 0)
        {
            bits[i] = 1;
            continue;
        }

        if (bits[i] == 1)

        {
            bits[i] = 0;
            continue;
        }
    }

    cout << endl;

    for (int i = 0; i < bits.size(); i++)
    {
        cout << bits[i];
    }

    int sum = 0;

    int exp = bits.size() - 1;
    for (int i = 0; i < bits.size(); i++)
    {

        sum += bits[i] * pow(2, exp);
        exp = exp - 1;
    }

    cout << endl;
    cout << sum;

    return sum;
}

int main()
{

    findComplement(13);
    return 0;
}