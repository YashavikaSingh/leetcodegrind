
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string convertToBase7(int num)
{

    bool negative = false;

    if (num < 0)
    {
        num = abs(num);
        negative = true;
    }
    int n = num;
    int d;
    vector<int> v;

    while (n != 0)
    {
        d = n % 7;
        n = n / 7;
        v.push_back(d);
    }

    reverse(v.begin(), v.end());
    string t;

    if (negative)
    {
        t = t + "-";
    }


    if(num==0)
    return "0";

    
    for (int i = 0; i < v.size(); i++)
    {
        t = t + to_string(v[i]);
    }

    return t;
}

int main()
{

    cout << convertToBase7(-7);

    return 0;
}