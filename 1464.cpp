#include <iostream>
#include <vector>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size() && i!=j; j++)
        {
          
            int x = ((nums[i] - 1) * (nums[j] - 1));
            if (x > max)
            {
                max = x;
            }
         
        }
    }

    return max;
}

int main()
{
    vector<int> nums{3, 4, 5, 2};
    cout << maxProduct(nums);
    return 0;
}