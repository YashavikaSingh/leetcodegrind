#include <stack>
#include <vector>
#include <iostream>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{

    stack<int> s;

    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
            s.push(nums2[j]);

        int greater = -1;
        int key = nums1[i];
        while (key != s.top())
        {
            if (s.top() > key)
                greater = s.top();
            s.pop();
        }

        ans.push_back(greater);
    }

    return ans;
}

int main()
{

    vector<int> nums1{2, 4,};
    vector<int> nums2{1, 2, 3, 4};
    vector<int> ans = nextGreaterElement(nums1, nums2);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}