
#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

vector<int> constructRectangle(int area)
{

    vector<int> factors;
    vector< pair<int, int> > lnw;
    for (int i = 1; i <= area; i++)
    {

        if (area % i == 0)
        {
            cout << i << " ";
            factors.push_back(i);
        }
    }

    cout << endl;

    int L;
    int W;

    for (int i = 0; i < factors.size(); i++)
    {
        L = factors[i];
        W = area / factors[i];

        if(L==W)
        {
            vector<int> ans;
          
            ans.push_back(L);
            ans.push_back(W);
            return ans;
        }

        if (L > W)
        {
            cout << "pushing l, w: " << L << " " << W << endl;
            lnw.push_back(make_pair(L, W));
        }
    }

    vector<int> difference;

    for (int i = 0; i < lnw.size(); i++)
    {
        difference.push_back(lnw[i].first - lnw[i].second);
    }

    for (int i = 0; i < difference.size(); i++)
        cout << difference[i]<<" ";

    vector<int>::iterator it;
    it = min_element(difference.begin(), difference.end());
    int index = distance(difference.begin(), it);

    vector<int> ans;
    ans.push_back(lnw[index].first);
    ans.push_back(lnw[index].second);

    return ans;
}

int main()
{
    vector<int> ans;
    ans = constructRectangle(4);
    cout<<endl;

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i]<<" ";

    return 0;
}