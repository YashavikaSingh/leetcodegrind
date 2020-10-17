#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int missingNumber(vector<int> &nums)
{

    int n = nums.size();
    vector<int>::iterator it = find(nums.begin(), nums.end(), n);

    if (it == nums.end())
        return n;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }

    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] + 1!= nums[i + 1])
            return nums[i] + 1;
    }

    return 0;
}

int main()
{

    vector<int> nums;

    nums.push_back(0);
    nums.push_back(1);
    // nums.push_back(4);
    // nums.push_back(2);
    // nums.push_back(3);
    // nums.push_back(5);
    // nums.push_back(7);
    // nums.push_back(0);
    // nums.push_back(1);

    cout << missingNumber(nums);

    return 0;
}