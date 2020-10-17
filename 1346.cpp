
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

bool checkIfExist(vector<int> &arr)
{

    set<int> s;
    vector<int>::iterator it;

    for (int i = 0; i < arr[i]; i++)
    {
        if (arr[i] != 0)
        {
            if ((s.find(arr[i] * 2) == s.end() || (arr[i] % 2 == 0 && s.find(arr[i] / 2) == s.end())) && arr[i] != 0)
                s.insert(arr[i]);

            if ((s.find(arr[i] * 2) != s.end() || (arr[i] % 2 == 0 && s.find(arr[i] / 2) != s.end())) && arr[i] != 0)
            {
                cout << "entered ";
                return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> arr;
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(14);
    arr.push_back(11);
    cout << checkIfExist(arr);
    return 0;
}