#include <vector>
#include <map>
#include <string>

#include <iostream>
using namespace std;

char slowestKey(vector<int> &releaseTimes, string keysPressed)
{
    char m = keysPressed[0];
    cout << m;
    int max = releaseTimes[0];

    for (int i = 1; i < releaseTimes.size(); i++)
    {
        if ((releaseTimes[i] - releaseTimes[i - 1]) >= max)
        {

            int kp = keysPressed[i];
            int mn = m;

            cout << mn << " " << kp;

            if ((releaseTimes[i] - releaseTimes[i - 1]) == max && (kp > mn))
            {
                cout << "enetered";
                m = keysPressed[i];
                continue;
            }

            if ((releaseTimes[i] - releaseTimes[i - 1]) == max && (kp < mn))
            {
                continue;
            }

                cout << "got to here";
            max = (releaseTimes[i] - releaseTimes[i - 1]);
            m = keysPressed.at(i);
        }
    }

    return m;
}

int main()
{
    vector<int> releasetime{1, 2};
    string keysPressed = "ba";

    cout << slowestKey(releasetime, keysPressed);

    return 0;
}