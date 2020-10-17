#include <cmath>
#include <iostream>
using namespace std;

bool isPowerOfThree(int n)
{

    if (n == 0)

        return false;

    double ans = log(n) / log(3);
    cout << ans << endl;

    if (floor(ans) == ans)
    {
        cout << "reached" << endl;
        return true;
        cout << "is this working: " << endl;
    }

    else
        return false;
}

int main()
{

    cout << isPowerOfThree(243);
    return 0;
}