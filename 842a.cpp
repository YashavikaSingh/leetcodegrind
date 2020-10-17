#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

vector<string> vectorofwords(string S)
{
    string tmp;
    stringstream str_strm(S);
    vector<string> words;
    while (str_strm >> tmp)
        words.push_back(tmp);

    return words;
}

string toGoatLatin(string S)
{
    string ans = "";
    vector<string> words = vectorofwords(S);
    int count = 1;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i][0] == 'A' || words[i][0] == 'O' || words[i][0] == 'E' || words[i][0] == 'I' || words[i][0] == 'U' || words[i][0] == 'o' || words[i][0] == 'i' || words[i][0] == 'e' || words[i][0] == 'u' || words[i][0] == 'a')
        {

            ans = ans + words[i] + "ma" + string(count, 'a') + ' ';
            count++;
        }

        else
        {
            char c = words[i][0];
            cout << c << endl;
            string thing = words[i].substr(1, words[i].length() - 1);
            ans += thing + c + "ma" + string(count, 'a') + ' ';
            count++;
        }
    }

    ans = ans.substr(0, ans.length() - 1);

    return ans;
}

int main()
{
    cout << toGoatLatin("Hello from the other side");
    return 0;
}