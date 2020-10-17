#include <string>
#include <iostream>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
int i;
    for (i = 0; i < ransomNote.length(); i++)
    {

        size_t found = magazine.find(ransomNote.at(i));
        if (found == string::npos)
        {
          
            return false;
        }

        if (found != string::npos)
        {
                   magazine.erase(magazine.begin() + found);
        }

    

      
    }

    if (i == ransomNote.length())
    {
    
        return true;
    }
}

int main()
{

    cout << canConstruct("aa", "aab");
    return 0;
}