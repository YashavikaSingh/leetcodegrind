

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{

    int i = 0;

    int j = 0;

    while (i < g.size() && j < s.size())
    {

        cout << g[i] << "<=" << s[j] << endl;
        if (g[i] <= s[j])
        {
            i++;
            j++;
        }

        else
            j++;

        cout << "i: " << i << "j: " << j << endl;
    }

    return i ;
}

int main()
{
    vector<int> g{1, 2, 3};
    vector<int> s{1,1};

    cout << findContentChildren(g, s);

    return 0;
}