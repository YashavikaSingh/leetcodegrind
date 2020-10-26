#include <map>
#include <vector>
#include <iostream>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{

int count = 0;
    map<int, int> m;
    map<int, int>::iterator it;

    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }

    for (it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second<<endl;

    for (it = m.begin(); it != m.end(); it++)
        {
            if(it->second>1)
            {
                count+= (((it->second)*(it->second-1))/2);
            }
        }

    return count;
}

int main()
{
    vector<int> v{1,2, 3};
    cout << numIdenticalPairs(v);
    return 0;
}