
#include <string>
#include <iostream>
#include <vector>

#include <algorithm>
#include <set>

using namespace std;

bool isPathCrossing(string path)
{
    int x = 0;
    int y = 0;

    set<pair<int, int> > s;

    pair<int, int> t;
    t = make_pair(x, y);

    s.insert(t);

    for (int i = 0; i < path.length(); i++)
    {
        cout << x << " " << y<<endl;

        if (path[i] == 'N')
            y = y + 1;

        if (path[i] == 'E')
            x = x - 1;

        if (path[i] == 'S')
            y = y - 1;

        if (path[i] == 'W')
            x = x + 1;

        pair<int, int> t = make_pair(x, y);

        if (s.find(t) == s.end())
            s.insert(t);

       else if (s.find(t) != s.end())
        {
            cout << "returning true";
            return true;
        }
    }

    return false;
}

int main()
{

    cout << isPathCrossing("NES");
    return 0;
}