
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string freqAlphabets(string s)
{

    string ans = "";
    for (int i = 0; i < s.length();)
    {
        if (s[i + 2] == '#' && i<s.length()-2)
        {

            int num = stoi(s.substr(i, 2));
            char t = num + 96;
           
            ans = ans + t;
            i = i + 3;
        }

        else
        {
            int num = stoi(s.substr(i, 1));
          
            char t = num + 96;
      
            ans = ans + t;
            i++;
        }
    }

    return ans;
}

int main()
{

    cout << freqAlphabets("10#11#12");
    return 0;
}