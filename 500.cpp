#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool searchrow1(map<char, int> row1, string currentword)
{
    cout << "entered this function" << endl;
    int i;

    for (i = 1; i < currentword.length(); i++)
    {
        char c = currentword.at(i);
        cout << "c: " << c;
        if (row1.find(c) == row1.end())
            return false;
    }

    if (i == currentword.length())
    {
        cout << "returning true" << endl;
        return true;
    }

    return false;
}

bool searchrow2(map<char, int> row2, string currentword)
{
    cout << "entered this function" << endl;
    int i;

    for (i = 1; i < currentword.length(); i++)
    {
        char c = currentword.at(i);
        cout << "c: " << c;
        if (row2.find(c) == row2.end())
            return false;
    }

    if (i == currentword.length())
    {
        cout << "returning true" << endl;
        return true;
    }

    return false;
}

bool searchrow3(map<char, int> row3, string currentword)
{
    cout << "entered this function" << endl;
    int i;

    for (i = 1; i < currentword.length(); i++)
    {
        char c = currentword.at(i);
        cout << "c: " << c;
        if (row3.find(c) == row3.end())
            return false;
    }

    if (i == currentword.length())
    {
        cout << "returning true" << endl;
        return true;
    }

    return false;
}

vector<string> findWords(vector<string> &words)
{

    bool low = false;
    vector<string> answerwords;

    map<char, int> row1;
    map<char, int> row2;
    map<char, int> row3;

    row1['q'] = 1;
    row1['w'] = 1;
    row1['e'] = 1;
    row1['r'] = 1;
    row1['t'] = 1;
    row1['y'] = 1;
    row1['u'] = 1;
    row1['i'] = 1;
    row1['o'] = 1;
    row1['p'] = 1;

    row2['a'] = 2;
    row2['s'] = 2;
    row2['d'] = 2;
    row2['f'] = 2;
    row2['g'] = 2;
    row2['h'] = 2;
    row2['j'] = 2;
    row2['k'] = 2;
    row2['l'] = 2;

    row3['z'] = 3;
    row3['x'] = 3;
    row3['c'] = 3;
    row3['v'] = 3;
    row3['b'] = 3;
    row3['n'] = 3;
    row3['m'] = 3;

    // string ba = words[0];
    // char b = ba[0];
    // // cout << b;
    // if (b >= 97 && b <= 122)
    // {
    //     cout << "setting low" << endl;
    //     low = true;
    // }

    char s;
    for (int i; i < words.size(); i++)
    {

        string sa = words[0];

        s = sa.at(0);
        cout << s;

        transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);

        string currentword = words[i];
        char f = currentword.at(0);
        cout << f << endl;

        if (row1.find(f) != row1.end())
        {
            cout << "enter row 2" << endl;
            bool ans = searchrow2(row1, currentword);

            if (ans)
            {
                answerwords.push_back(currentword);
                cout << "pushedback" << endl;
                continue;
            }

            if (!ans)
            {
                cout << "got false" << endl;

                continue;
            }
        }

        if (row2.find(f) != row2.end())
        {
            cout << "enter row 2" << endl;
            bool ans = searchrow2(row2, currentword);

            if (ans)
            {
                answerwords.push_back(currentword);
                cout << "pushedback" << endl;
                continue;
            }

            if (!ans)
            {
                cout << "got false" << endl;

                continue;
            }
        }
        if (row3.find(f) != row3.end())
        {
            cout << "enter row 3" << endl;
            bool ans = searchrow2(row2, currentword);

            if (ans)
            {
                answerwords.push_back(currentword);
                cout << "pushedback" << endl;
                continue;
            }

            if (!ans)
            {
                cout << "got false" << endl;

                continue;
            }
        }
    }

    // bool hey;
    // if (s >= 97 && s <= 122)
    //      hey = true;
    // cout << hey;

    // if (!hey)
    // {
    for (int i = 0; i < answerwords.size(); i++)
    {

        answerwords[i][0] = (toupper(answerwords[i][0]));
    }

    return answerwords;
    // }

    // if (hey)
    //     return answerwords;
}

int main()
{

    vector<string> words;

    words.push_back("Hello");
    words.push_back("Alaska");
    words.push_back("Dad");
    words.push_back("Peace");

    words = findWords(words);

    for (int i = 0; i < words.size(); i++)
    {

        cout << words[i];
    }

    return 0;
}