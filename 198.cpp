#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int rob(vector<int> &nums)
{
    int sum = 0;
int sum1 = 0;

    if (nums.size() == 2)
        return *max_element(nums.begin(), nums.end());

                   for (int i = 0; i < nums.size(); i = i + 2)
                       sum += nums.at(i);

                   for (int i = 1; i < nums.size(); i = i + 2)
                       sum1 += nums.at(i);

                       return max(sum, sum1);
    }

int main()
{


vector<int> nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
nums.push_back(1);
nums.push_back(5);
nums.push_back(8);
nums.push_back(9);
nums.push_back(100);
cout << rob(nums);
}
