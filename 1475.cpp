
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> finalPrices(vector<int> &prices)
{
    for (int i = 0; i < prices.size(); i++)
    {

        for (int j = i + 1; j < prices.size(); j++)
        {

            if (prices[j] <= prices[i])
            {
                prices[i] = prices[i] - prices[j];
                break;
            }
        }
    }

    return prices;
}

int main()
{
    vector<int> stones;
    stones.push_back(8);
    stones.push_back(4);
    stones.push_back(6);
    stones.push_back(2);
    stones.push_back(3);

    vector<int> ans;

    ans = finalPrices(stones);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
}