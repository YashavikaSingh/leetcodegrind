
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{

    vector<bool> ans;
    int z = *max_element(candies.begin(), candies.end());
    cout << "max element: " << z << endl;

    for (int i = 0; i < candies.size(); i++)
    {

        if ((candies[i] + extraCandies) >= z)
        {
            ans.push_back(true);
                }
        else
            ans.push_back(false);
    }


    return ans;
}

int main()
{

    vector<bool> ans;
    vector<int> candies{2, 3, 5, 1, 3};
    ans = kidsWithCandies(candies, 3);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}