
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

bool lemonadeChange(vector<int> &bills)
{

    map<int, int> m;
    map<int, int>::iterator it;
    m[5] = 0;
    m[10] = 0;
    m[20] = 0;

    int i;
    for (i = 0; i < bills.size(); i++)
    {
        if (bills[i] == 5)
            m[5]++;

        if (bills[i] == 10)
        {
            if (m[5] == 0)
                return false;

            else
            {
                m[5]--;
                m[10]++;
            }
        }

        if (bills[i] == 20)
        {
            if (m[10] >= 1 && m[5] >= 1)
            {
                m[20]++;
                m[10]--;
                m[5]--;
                continue;
            }

            else if (m[10] == 0 && m[5] >= 3)
            {
                m[5] -= 3;
                m[20]++;
                continue;
            }

            else
            {
                cout << "entered else block: " << endl;
                return false;
            }
        }

        for (it = m.begin(); it != m.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }

        cout << endl;
    }
    if (i == bills.size())
        return true;

    return false;
}

int main()
{
    vector<int> bills;

    bills.push_back(5);
    bills.push_back(5);
    bills.push_back(10);
    bills.push_back(10);
    bills.push_back(20);

    cout << lemonadeChange(bills);
    return 0;
}