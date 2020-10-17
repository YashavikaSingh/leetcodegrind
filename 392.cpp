
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

bool isSubsequence(string s, string t)
{

    int i = 0, j = 0;

    while (i < s.length() && j < t.length())
    {
        if (t[j] == s[i])
        {
            cout << "enetered equal case" << endl;
            i++;
        }
        j++;
        cout << i << " "<<j<<endl;
  
    }

  
    return (i == s.length());
}

int main()
{

    cout << isSubsequence("ahfx", "ahbasdfasdfgdc");

    return 0;
}