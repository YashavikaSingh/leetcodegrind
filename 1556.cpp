#include <iostream>
#include <string>
using namespace std;

string thousandSeparator(int n)
{
    string ans = to_string(n);

    for (int i = ans.length()-3; i >0 ;i=i-3)
    {
        ans.insert(i, ".");
      
    }

    return ans;
}

int main()
{
    cout << thousandSeparator(34345566);

    return 0;
}