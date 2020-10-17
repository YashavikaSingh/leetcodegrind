
#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

string reverseVowels(string s)
{

    if (s.size() == 0 || s.size() == 1)
        return s;

    int i, j;
    for (i = 0, j = s.length() - 1; j >= i;)
    {
        char a = s[i];
        char b = s[j];

        cout << " a: " << a << " b: " << b << endl;
        bool vowela = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'O' || a == 'E' || a == 'I' || a == 'O' || a == 'U');
        bool vowelb = (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'A' || b == 'O' || b == 'E' || b == 'I' || b == 'O' || b == 'U');

        cout << "vowel a: " << vowela << "vowel b: " << vowelb << endl;

        if (vowela && vowelb)
        {

            swap(s[i], s[j]);
            i++;
            j--;
            continue;
        }

        else if (!vowela)
        {
            i++;
        }

        else if (!vowelb)
        {
            j--;
        }
    }

    return s;
}

int main()
{
    cout << reverseVowels("aA");

    return 0;
}
