
#include <vector>
#include <algorithm>
#include <set>
#include <iostream>
using namespace std;

vector<int> convert(vector<int> v)
{
    set<int> s;

    for (int x : v)
        s.insert(x);

    vector<int> target;
    for (const auto &it : s)
    {
        target.push_back(it);
    }

    return target;
}

int findPairs(vector<int> &nums, int k)
{

    nums = convert(nums);

    vector<int>::iterator tp;
    for (tp = nums.begin(); tp != nums.end(); ++tp)
        cout << " " << *tp;

    int count = 0;

    for (int b = nums.size() - 1; b >= 0; b--)
    {
        for (int i = 0; i < nums.size(); i++)
        {

            if (((nums[b] - nums[i]) == k) && b != i && (nums[b] >= nums[i]))
            {

                count++;
            }
        }
    }
    return count;
}

int main()
{

    vector<int> nums = {3, 1, 4, 1, 5};
    cout << endl;
    cout << findPairs(nums, 2);

    return 0;
}