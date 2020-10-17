#include <vector>
#include <set>
#include <map>
#include <iostream>
using namespace std;

int majorityElement(vector<int> &nums)
{

    set<int> s(nums.begin(), nums.end());
    map<int, int> elemnfreq;

    set<int>::iterator its;
    map<int, int>::iterator itm;

    for (its = s.begin(); its != s.end(); its++)
    {
        int freq = 0;
        for (int i = 0; i < nums.size(); i++)
            if (*its == nums.at(i))
            {
                freq++;
            }
        elemnfreq[*its] = freq;
    }

    for (itm = elemnfreq.begin(); itm != elemnfreq.end(); itm++)
    {
        cout << '\t' << itm->first
             << '\t' << itm->second << '\n';
    }

    int maxfreq = elemnfreq.begin()->second;
    int maxelem = elemnfreq.begin()->first;
    for (itm = ++elemnfreq.begin(); itm != elemnfreq.end(); itm++)
    {
        if(itm->second > maxfreq)
        {
            maxfreq = itm->second;
            maxelem= itm->first;
        }
       
    }

    cout << "Max element: " << maxelem << endl;
    cout << "Max frequency: " << maxfreq << endl;
    return maxelem;
    }





int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    cout<<majorityElement(v);

    return 0;
}