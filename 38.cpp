#include <string>
#include <iostream>
using namespace std;

void countAndSay(string n)
{
    string theans = "";
    for (int i = 0; i < n.length(); i++)
    {
        int freq = 1;
        char mynumb = n.at(i);
        

if(i<n.length()-2){
    int j =i+1;
    for (; && j < n.length(); j++)
    {
        if ((n.at(i) == n.at(j))){
            freq++;
            j++;
        }
           
    }
}
       
        string freqstr = to_string(freq);

        theans = theans + freqstr;
        theans = theans + mynumb;
    }

    cout << theans;
    return;
}

int main()
{
    countAndSay("13112221");
    return 0;
}
