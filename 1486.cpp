
#include <string>
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;

// vector<int> bits(int n)
// {

//     vector<int> bit;

//     while (n != 0)
//     {
//         int d = n % 2;
//         n = n / 2;
//         bit.push_back(d);
//     }

//     reverse(bit.begin(), bit.end());

//     return bit;
// }

int xorOperation(int n, int start)
{

    int ans = start;
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ (start + 2 * i);
    }

    return ans;
}

int main()
{
    cout<<xorOperation(4, 3);

    return 0;
}