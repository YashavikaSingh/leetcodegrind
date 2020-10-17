#include <iostream>
using namespace std;
int sod(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int d;
        d = n % 10;
        n = n / 10;
        sum += d * d;
    }
    cout << sum << " ";
    return sum;
}

bool isHappy(int n)
{

    if (sod(n) == 1)
    {
        cout << "Found a one" << endl;
        return true;
    }

    if (sod(n) != 1)
    {
        n = sod(n);
        return isHappy(n);
    }

  return false; 
}

int main()
{

    cout<<isHappy(42);
    return 0;
}