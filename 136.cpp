#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int singleNumber(vector<int> &nums)
{

    if (nums.size() == 1)
        return nums[1];
        
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size();)
    {
        if (nums[i] == nums[i + 1])
            i = i + 2;

        if (nums[i] != nums[i + 1])
            return nums[i];
    }
}

int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(3);

    cout << singleNumber(v);

    return 0;
}