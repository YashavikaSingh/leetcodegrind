#include <map>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int balancedStringSplit(string s)
{
    int r = 0, l = 0, count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
            r++;

        if (s[i] == 'L')
            l++;

        if (r == l)
        {
            count++;
            r = 0;
            l = 0;
        }
    }

    return count;
}

int main()
{

    cout << balancedStringSplit("RLRRRLLRLL");

    return 0;
}