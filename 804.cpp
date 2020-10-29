#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    int count = 0;
    vector<string> m{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

    map<string, int> mp;
    map<string, int>::iterator it;

    vector<string> morse;
    for (int i = 0; i < words.size(); i++)
    {
        string word = "";
        for (int j = 0; j < words[i].length(); j++)
        {
            int n = words[i][j];
            int pos = n - 97;

            word += m[pos];
        }

        mp[word]++;
    }

    for (it = mp.begin(); it != mp.end(); it++)
    {
        count++;
    }

    return count;
}

int main()
{

    vector<string> ans;
    vector<string> words{"gin", "zen", "gig", "msg"};

   cout<<uniqueMorseRepresentations(words);

    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << endl;

    return 0;
}