
#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <stack>
#include <vector>
#include <iostream>
using namespace std;

bool backspaceCompare(string S, string T)
{
    stack<int> st1;
    stack<int> st2;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '#' && (!st1.empty()))
        {
            st1.pop();
            continue;
        }

        if (S[i] == '#' && (st1.empty()))
            continue;

        st1.push(S[i]);
    }

    for (int i = 0; i < T.length(); i++)
    {
        if (T[i] == '#' && (!st2.empty()))
        {
            st2.pop();
            continue;
        }

        if (T[i] == '#' && (st2.empty()))
            continue;

        st2.push(T[i]);
    }

    if (st2.size() != st1.size())
        return false;

    while (!st1.empty())
    {
        if (st1.top() != st2.top())
            return false;

        else
        {
            st1.pop();
            st2.pop();
        }
    }

    return true;
}

int main()
{
    cout << backspaceCompare("a##c", "#a#c");
    return 0;
}