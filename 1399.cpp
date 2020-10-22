#include <map>
#include <iostream>
using namespace std;


int countLargestGroup(int n)
{
    map<int, int> m;
    map<int, int>::iterator it;

    for (int i = 1; i <= n; i++)
    {
       
        int currentnum = i;
        int sum = 0;
        while (currentnum != 0)
        {
            int d = currentnum % 10;
            sum += d;
            currentnum = currentnum / 10;
        }

        
        cout << "sum of digits of " << i << " is " << sum << endl;
        m[sum]++;
    }

    //finding the max value
    int max = m.begin()->second;
    for (it = ++m.begin(); it != m.end(); it++)
    {
        if (it->second > max)
            max = it->second;
    }

    cout << "max frequency: " << max << endl;

    int ans = 0;
    //now findind how many max values there are
    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second == max)
            ans++;
    }

    cout << "the nmber of maxfequencies there are: " << ans << endl;
    return ans;
}

int main()
{
    cout << countLargestGroup(29);
}