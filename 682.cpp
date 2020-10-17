#include <vector>
#include <iostream>
#include <string>
using namespace std;

int calPoints(vector<string> &ops)
{

    for (int i = 0; i < ops.size(); i++)
    {
        char c = ops[i][0];
        cout << c << " ";
    }

    vector<int> t;
    for (int i = 0; i < ops.size(); i++)
    {

        char c = ops[i][0];

        if (c == 'D')
        {

            int index = t.size() - 1;
            int ans = t[index] * 2;
            cout << "pushing back: " << ans << endl;
            t.push_back(ans);
        }

        else if (c == 'C')
        {
            cout << "popping" << endl;
            t.pop_back();
        }

        else if (c == '+')
        {
            int a = t[t.size() - 1];

            int b = t[t.size() - 2];
            int ans = a + b;

            cout << "pushing sum: " << ans << endl;
            t.push_back(ans);
        }

        else
        {

            int l = c - '0';
            cout << "pushing back just the int: " << l << endl;
            t.push_back(l);
        }
    }

    cout << endl;
    for (int i; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }

    int sum = 0;

    for (int i; i < t.size(); i++)
    {
        sum += t[i];
    }

    return sum;
}

int main()
{
    vector<string> ops;

    ops.push_back("5");

    ops.push_back("2");
    ops.push_back("4");
    ops.push_back("C");
    ops.push_back("D");
    ops.push_back("9");
    ops.push_back("+");
    ops.push_back("+");

    cout << endl;
    cout << calPoints(ops);

    return 0;
}