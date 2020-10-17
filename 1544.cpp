#include <string>
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

string makeGood(string s)
{
    if (s.length() == 0 || s.length() == 1)
    {
        cout << "length " << s.length() << endl;
        return s;
    }

    for (int i = 0; i < s.length() - 1; i++)
    {

        if ((islower(s[i]) && isupper(s[i + 1])) || (isupper(s[i]) && islower(s[i + 1])))
        {
            char c = s[i];
            char d = s[i + 1];

            if ((c - d == 32) || (d - c == 32))
            {
                cout << s << endl;
                cout << "we get to here" << endl;
                s = makeGood(s.erase(i, 2));

                return s;
            }
        }
    }

}

int main()
{

    cout << makeGood("abBAcC");
    return 0;
}