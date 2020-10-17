#include <vector>
#include <iostream>
using namespace std;

vector<int> plusOnehelper(vector<int> &digits, int l)
{
    
    if (digits[l] != 9)
    {
        digits[l] += 1;

        return digits;
    }

    if (digits[l] == 9)
    {
        digits[l] = 0;
        l = l-1;
        if(l==-1)
        {
            digits.insert(digits.begin(), 1);
            return digits;
        }
        digits = plusOnehelper(digits, l);
    }
     
     return digits;
}
vector<int> plusOne(vector<int> &digits)
{
    int l = digits.size() - 1;
    plusOnehelper(digits, l);

    return digits;
}

int main()
{

    vector<int> v;

    v.push_back(1);

    v.push_back(8);

    v.push_back(9);
 

    v = plusOne(v);

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << ' ';
    

    return 0;
}
