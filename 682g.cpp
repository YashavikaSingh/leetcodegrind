#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <map>
#include <numeric>
#include <algorithm>
using namespace std;

int calPoints(vector<string> ops)
{
    vector<int> record;
    int sum = 0;
    for (int i = 0; i < ops.size(); i++)
    {
        if (ops[i] == "D")
        {
            int prev = record.back();
            int fin = prev * 2;
            //cout << "D is working" << endl;
            record.push_back(fin);
        }
        else if (ops[i] == "+")
        {
            //cout << "+ is working" << endl;
            int prev = record.back();
            int prevprev = record[record.size() - 2];
            int fin = prev + prevprev;
            record.push_back(fin);
        }
        else if (ops[i] == "C")
        {
            //cout << " C is  are working" << endl;
            record.pop_back();
        }
        else
        {
            // cout << " numbers are working" << endl;
            int num = stoi(ops[i]);
            record.push_back(num);
        }
    }

    sum = accumulate(record.begin(), record.end(), 0);
    return sum;
}

int main()
{
    vector<string> ops1;
    ops1.push_back("5");
    ops1.push_back("2");
    ops1.push_back("C");
    ops1.push_back("D");
    ops1.push_back("+");
    cout << calPoints(ops1) << endl;
    // return 0;
}