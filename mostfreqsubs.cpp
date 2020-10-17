#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

string most_freq(string word, int length)
{

    map<string, int> m;
    for (int i = 0; i < word.size(); i++)
    {
        string subs = word.substr(i, length);

        cout << "subs: " << subs << endl;

        if (m.find(subs) == m.end())
        {
            m[subs] = 1;
        }

        if (m.find(subs) != m.end())
        {
            m[subs] += 1;
        }
    }

    map<string, int>::iterator it2;

    for (it2 = m.begin(); it2 != m.end(); it2++)
        cout << it2->first << " " << it2->second << endl;

    cout << "ab max print kareinge:  ";
    map<string, int>::iterator it;

    // it = max_element(m.begin(), m.end());

    int maxvalue = m.begin()->second;
     string maxstring = m.begin()->first;

    for (it = ++m.begin(); it != m.end(); it++)
    {
        if(it->second>maxvalue)
           { maxvalue = it->second;
            maxstring = it->first;}
    }

    return maxstring;
}

int main()
{

    cout << most_freq("inengineering", 2);
}
