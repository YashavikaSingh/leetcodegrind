
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string modifyString(string s)
{

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int j=0;
    ;
    //first char case
    if(s[0]=='?')
    {
        while ( s[1] == alphabet[j])
            j++;

        s[0] = alphabet[j];
    }

    for (int i = 1; i < s.length() - 1; i++)
    {
        j = 0;
     
        if (s[i] == '?')
        {
            while (s[i - 1] == alphabet[j] || s[i + 1] == alphabet[j])
                j++;

            s[i] = alphabet[j];
        }
    }

j=0;
    //last char case
if (s[s.length() - 1] == '?')
{
    while (s[s.length() - 2] == alphabet[j])
        j++;

    s[s.length() - 1] = alphabet[j];
    }

    return s;
}

int main()
{
    cout << modifyString("??yw?ipkj?");

    return 0;
}