
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

bool isAnagram(string s, string t)
{

    map<char, int> sm;
    map<char, int> tm;
    for (int i = 0; i < s.length(); i++)
    {

        if (sm.find(s[i]) == sm.end())
            sm[s[i]] = 1;

        if (sm.find(s[i]) != sm.end())
            sm[s[i]] += 1;
    }

    for (int i = 0; i < t.length(); i++)
    {
        if (tm.find(t[i]) == tm.end())
            tm[t[i]] = 1;

        if (tm.find(t[i]) != tm.end())
            tm[t[i]] += 1;
    }


    

    if (sm == tm)
        return true;

    return false;
}

int main()
{

    cout << isAnagram("a", "b");

    return 0;
}