
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int numJewelsInStones(string J, string S)
{

    map<char, int> m;
    map<char, int>::iterator it;

    for (int i = 0; i < J.size(); i++)
    {
        m[J[i]] = 0;
    }

    for (int i = 0; i < S.size(); i++)
    {
        if (m.find(S[i]) != m.end())
        {
            m[S[i]]++;
        }
    }

    int count = 0;
    for (it = m.begin(); it != m.end(); it++)
    {
        count += it->second;
    }

    return count;
}

int main()
{
    cout << numJewelsInStones("z", "ZZ");

    return 0;
}