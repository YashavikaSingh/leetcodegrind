#include <string>
#include <map>
#include <iostream>
using namespace std;

bool isIsomorphichelper(string s, string t)
{

    map<char, char> m;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        char c = s.at(i);
        char d = t.at(i);
        cout << "c: " << c << endl;
        cout << "d: " << d << endl;

        if (m.find(c) == m.end() )
        {
            cout << "not found and inserted" << endl;
            m[c] = d;
            continue;
           
        
        }

        if (m.find(c) != m.end())
        {
            cout << "found" << endl;
            if (m[c] == d)
            {
                cout << "corresponds to past value" << endl;
                continue;
            }

            if (m[c] != d)
            {
                cout << "not the same as past value, returning false" << endl;
                return false;
            }
        }

        
    }

    if (i == s.length())
        return true;
}

bool isIsomorphic(string s, string t)
{

    return isIsomorphichelper(s, t) && isIsomorphichelper(t, s);
}

int main()
{

    cout << isIsomorphic("ab", "aa");

    return 0;
}