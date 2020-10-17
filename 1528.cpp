
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string restoreString(string s, vector<int> &indices)
{

    string word = "";

    for (int i = 0; i < s.size(); i++)
        word = word + 'a';

    for (int i = 0; i < s.size(); i++)
        word[indices[i]] = s[i];

    return word;
}

int main()
{
    
}
