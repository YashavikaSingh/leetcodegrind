
#include <vector>
#include <iostream>
using namespace std;

bool selfdivides(int n)
{
    int d = n;
    vector<int> factors;
    while (d)
    {
        int g = d % 10;
        d = d / 10;

        if (g == 0)
            return false;
        if (n % g != 0)
            return false;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right)
{

    vector<int> factors;

    for (int i = left; i <= right; i++)
    {
        if (selfdivides(i))
            factors.push_back(i);
    }

    return factors;
}

int main()
{

    vector<int> factors = selfDividingNumbers(1, 22);

    for (int i = 0; i < factors.size(); i++)
        cout << factors[i] << " ";

    return 0;
}