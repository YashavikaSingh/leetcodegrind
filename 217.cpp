#include <vector>
#include <map>
#include <iostream>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    map<int, int> m;
    map<int, int>::iterator it;

    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }

    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
            return true;
    }

    return false;
}

int main()
{

    vector<int> v{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << containsDuplicate(v);

    return 0;
}