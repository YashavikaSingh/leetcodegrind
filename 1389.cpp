#include <iostream>
#include <vector>
using namespace std;

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{

    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.insert(ans.begin()+ index[i], nums[i]);
    }

    return ans;
}

int main()
{

    vector<int> n{1, 2, 3, 4, 0};
    vector<int> a;

    vector<int> i{0, 1, 2, 3, 0};

    a = createTargetArray(n, i);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}