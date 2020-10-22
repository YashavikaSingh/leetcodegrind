#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int heightChecker(vector<int> &heights)
{
    vector<int> t;
    int count = 0;

    for (int i = 0; i < heights.size(); i++)
        t.push_back(heights[i]);

    sort(t.begin(), t.end());

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] != heights[i])
            count++;
    }

    return count;
}

int main()
{
    vector<int> g{4, 1, 8, 40, 12, 80};

    cout << heightChecker(g);
    return 0;
}