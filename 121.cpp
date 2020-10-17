#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int maxProfit(vector<int> &prices)
{

    vector<int>::iterator it;
    vector<int>::iterator it2;

    it = max_element(prices.begin(), prices.end());
    int maxnum = *it;
    cout << "max number: " << maxnum << endl;
    int maxindex = distance(prices.begin(), it);
    cout << "max index: " << maxindex << endl;

    it2 = min_element(prices.begin(), prices.end());
    int minnum = *it2;
    cout << "min number: " << minnum << endl;
    int minindex = distance(prices.begin(), it2);
    cout << "min index: " << minindex << endl;

    if (minindex == 0 && maxindex == 0)
        return 0;

    int ans;
    if (maxindex > minindex)
        return (maxnum - minnum);


    prices.erase(it);
    ans = maxProfit(prices);
    return ans;
}

int main()
{

    vector<int> prices;
    prices.push_back(7);

    prices.push_back(1);

    prices.push_back(5);

    prices.push_back(3);

    prices.push_back(6);

    prices.push_back(4);
    cout << "max profit: " << maxProfit(prices);
}