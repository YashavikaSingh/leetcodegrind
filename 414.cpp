#include <vector>
#include <limits.h>
#include <iostream>
using namespace std;

int thirdMax(vector<int> &nums)
{

    long first = LONG_MIN;
    long second = LONG_MIN;
    long third = LONG_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == first || nums[i] == second || nums[i] == third)
            continue;
        cout << "nums[i]: " << nums[i] << endl;
        if (nums[i] > first)
        {
            third = second;
            second = first;
            first = nums[i];
            cout << "first: " << first << " second: " << second << " third " << third << endl;
            continue;
        }

        if (nums[i] > second)
        {
            third = second;
            second = nums[i];
            cout << "first: " << first << " second: " << second << " third " << third << endl;
            continue;
        }

        if (nums[i] > third)
        {
            third = nums[i];
            cout << "first: " << first << " second: " << second << " third " << third << endl;
            continue;
        }
    }

    if (third == LONG_MIN)
        return first;

    return third;
}

int main()
{

    vector<int> nums{3, 1};
    cout << thirdMax(nums);
    return 0;
}