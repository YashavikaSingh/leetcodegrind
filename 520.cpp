#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

// bool
bool detectCapitalUse(string word)
{

    for (int i = 0; i < word.size(); i++)
        cout << word[i];



    if (islower(word[0]))
    {
        for (int i = 1; i < word.size(); i++)
        {
            if (isupper(word[i]))
                return false;
        }
        return true;
    }

    if (isupper(word[0]) && isupper(word[1]))
    {
        for (int i = 1; i < word.size(); i++)
        {
            if (islower(word[i]))
                return false;
        }
        return true;
    }

    if (isupper(word[0]) && islower(word[1]))
    {
        for (int i = 1; i < word.size(); i++)
        {
            if (isupper(word[i]))
                return false;
        }
        return true;
    }
}

int main()
{

    cout<<detectCapitalUse("Catttttttt");

    return 0;
}