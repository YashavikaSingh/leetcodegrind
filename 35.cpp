
#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int mid;
    int high = nums.size() - 1;
    int low = 0;

    while (low <= high)
    {

        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        if (low == high)
        {
            if (target < nums[low])
                return low;

            else
                return low + 1;
        }

        else if (nums[mid] > target)
        {
            high = mid - 1;
        }

        else if (nums[mid] < target)
            low = mid + 1;

        cout << "mid " << mid << endl;
        cout << "low " << low << endl;
        cout << "high " << high << endl;
    }
}

int main()
{
    vector<int> nums{3, 5, 7, 9, 10};

    cout << searchInsert(nums, 8) << endl;
    return 0;
}