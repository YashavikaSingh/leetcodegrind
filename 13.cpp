#include <string>
#include <map>
#include <iostream>
using namespace std;

int d_is_greater(char c, char d)
{
    int ans;
    map<char, int> m;
    m['M'] = 7;
    m['D'] = 6;
    m['C'] = 5;
    m['L'] = 4;
    m['X'] = 3;
    m['V'] = 2;
    m['I'] = 1;

    if (m.find(c)->second < m.find(d)->second)
    {

        int ans = 1;

        return ans;
    }

    if (m.find(c)->second == m.find(d)->second)
    {
        int ans = 0;
        return ans;
    }

    else
    {

        int ans = 0;
        return ans;
    }
}

int subtractvalue(char c, char d)
{
    int smallsum = 0;

    if (d == 'M')
        smallsum += 1000;
    if (d == 'D')
        smallsum += 500;
    if (d == 'C')
        smallsum += 100;
    if (d == 'L')
        smallsum += 50;
    if (d == 'X')
        smallsum += 10;
    if (d == 'V')
        smallsum += 5;
    if (d == 'I')
        smallsum += 1;

    if (c == 'D')
        smallsum -= 500;
    if (c == 'C')
        smallsum -= 100;
    if (c == 'L')
        smallsum -= 50;
    if (c == 'X')
        smallsum -= 10;
    if (c == 'V')
        smallsum -= 5;
    if (c == 'I')
        smallsum -= 1;

    return smallsum;
}

int addvalue(char c, int sum)
{
    if (c == 'M')
        sum += 1000;
    if (c == 'D')
        sum += 500;
    if (c == 'C')
        sum += 100;
    if (c == 'L')
        sum += 50;
    if (c == 'X')
        sum += 10;
    if (c == 'V')
        sum += 5;
    if (c == 'I')
        sum += 1;

    return sum;
}

int romanToInt(string str)
{

    int sum = 0;
    int i = 0;
    for (; i + 1 < str.length();)
    {
        char c = str.at(i);
        char d = str.at(i + 1);

        cout << c << endl;
        cout << d << endl;

        cout << "D is Greater: ";
        cout << d_is_greater(c, d) << endl;

        if (d_is_greater(c, d) == 1)
        {
            cout << "subtract wala scene" << endl;
            int difference = subtractvalue(c, d);
            cout << "subtractvalue " << subtractvalue(c, d) << endl;
            sum += difference;
            i += 2;
        }

        else
        {
            cout << "add wala scene" << endl;
            sum = addvalue(c, sum);
            i++;
        }

        cout << "Sum after 1 iteration: " << sum<<endl;
    }

if(i!=str.length()){
    sum = addvalue(str.at(str.length() - 1), sum);
    cout << "Sum after adding last char" << sum << endl;
    
}
return sum;
}

int main()
{

    int ans = romanToInt(" LVIII" );
    cout << ans;
    return 0;
}
