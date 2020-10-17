
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool compare(string A, string B, string order)
{

    for (int i = 0; i < A.length() && i < B.length(); i++)
    {
        char a = A[i];
        char b = B[i];

        int numa = order.find(a);
        int numb = order.find(b);

        cout << numa << " " << numb << " " << endl;

        if (numb > numa)
            return true;

        if (numb < numa)
            return false;

        if (numb == numa)
        {
            cout << "equal" << endl;
            continue;
        }
    }

    return (B.length() > A.length());
}

bool isAlienSorted(vector<string> &words, string order)
{
    //compare first two words, the next 2 words, 2 words at a time, till the end

    bool ans;
    for (int i = 0; i < words.size() - 1; i++)
    {
        cout << words[i] << " " << words[i + 1] << endl;
        if ((compare(words[i], words[i + 1], order)) == false)
            return false;
    }

    return true;
}

int main()
{

    return 0;
}