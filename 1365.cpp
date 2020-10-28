#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
  

    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {

        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] < nums[i] && i!=j)
            {
               
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}

int main()
{

    vector<int> ans;

    vector<int> nums{8, 1, 2, 2, 3};

    ans = smallerNumbersThanCurrent(nums);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}