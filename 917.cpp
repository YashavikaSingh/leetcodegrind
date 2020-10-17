
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string reverseOnlyLetters(string S)
{

    int i = 0;
    int l = S.length() - 1;

    while (l > i)
    {
        if (!isalpha(S[l]))
        {
            l--;
        }
        if (!isalpha(S[i]))
        {
            i++;
        }
        if (isalpha(S[i]) && isalpha(S[l]))
        {
            swap(S[i], S[l]);
            i++;
            l--;
        }
    }

    return S;
}

int main()
{

    cout << reverseOnlyLetters("a-bC-dEf-ghIj");
    return 0;
}
