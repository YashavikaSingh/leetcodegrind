#include <string>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

bool allsamechars(string A)
{
    for (int i = 0; i < A.length() - 1; i++)
    {
        if (A[i] != A[i + 1])
        {
            cout << "A[i]: " << A[i] << "A[i+1]: " << A[i + 1] << endl;
            cout << "returning false from allsamechars" << endl;
            return false;
        }
    }

    return true;
}

bool twosamechars(string A)
{

    map<char, int> m;
    map<char, int>::iterator it;
    map<char, int>::iterator it2;

    for (int i = 0; i < A.size(); i++)
    {
        if (m.find(A[i]) == m.end())
            m[A[i]] = 1;

        else
        {

            it = m.find(A[i]);
            it->second++;
        }
    }

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    for (it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
            return true;
    }

    return false;
}

bool buddyStrings(string A, string B)
{

    if (A.length() != B.length())
    {
        return false;
    }

    if (A.compare(B) == 0)
    {

        cout << "entered" << endl;

        if (twosamechars(A))
            return true;

        return false;
    }

    int count = 0;
    int first;
    int second;

    for (int i = 0; i < A.length(); i++)
    {

        if (A[i] != B[i])
        {
            count++;
            if (count == 1)
                first = i;

            if (count == 2)
                second = i;
        }
    }

    if (count > 2)
        return false;

    if (count == 0)
        return true;

    if (count == 2)
    {
        swap(A[first], A[second]);

        cout << A;
        if (A.compare(B) == 0)
            return true;

        else
            return false;
    }

    return false;
}

int main()
{

    cout << buddyStrings("abab", "abab");
    return 0;
}