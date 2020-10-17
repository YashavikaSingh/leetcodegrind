
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int minOperations(vector<string> &logs)
{
    int count = 0;
    for (int i = 0; i < logs.size(); i++)
    {

        int x = logs[i].length() - 1;

        if (logs[i][x] == '/' && logs[i][x - 1] == '.' && logs[i][x - 2] == '.')
        {
            count--;
            continue;
        }

        else if (logs[i][x] == '/' && logs[i][x - 1] == '.')
            continue;

        else
        {
            count++;
        }
    }

    return count;
}

int main()
{

    return 0;
}