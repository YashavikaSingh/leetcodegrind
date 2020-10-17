
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

string tictactoe(vector<vector<int>> &moves)
{

    map<vector<int>, int> m;

    m[{0, 0}]=30;
    m[{0, 1}] = 30;
    m[{0, 2}] = 30;
    m[{1, 0}] = 30;
    m[{1, 1}] = 30;
    m[{1, 2}] = 30;
    m[{2, 0}] = 30;
    m[{2, 1}] = 30;
    m[{2, 2}] = 30;
    map<vector<int>, int>::iterator it;

    for (int i = 0; i < moves.size(); i++)
    {
        if (i % 2 == 0)
            m[moves[i]] = 1;

        if (i % 2 == 1)
            m[moves[i]] = 0;
    }

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first[0] << " " << it->first[1] << " " << it->second << endl;
    }

    if ((m[{0, 0}] == 1) &&( m[{1, 1}] == 1) && (m[{2, 2}] == 1))
    {
     
        return "A";
    }

    else if ((m[{0, 0}] == 0) && (m[{1, 1}] == 0) && (m[{2, 2}] == 0))
    {

        return "B";
    }

    else if ((m[{0, 0}] == 0 )&&( m[{0, 1}] == 0 )&& (m[{0, 2}] == 0))
    {
  
        return "B";
    }
    else if ((m[{0, 0}] == 1) &&( m[{0, 1}] == 1) && (m[{0, 2}] == 1))
    {

        return "A";
    }

    else if ((m[{1, 0}] == 0) && (m[{1, 1}] == 0 )&&( m[{1, 2}] == 0))
    {
    
        return "B";
    }
    else if ((m[{1, 0}] == 1 )&&( m[{1, 1}] == 1 )&& (m[{1, 2}] == 1))
        return "A";

    else if ((m[{2, 0}] == 0) && (m[{2, 1}] == 0 )&&( m[{2, 2}] == 0))
        return "B";


    else if (m[{2, 0}] == 1 && m[{2, 1}] == 1 && m[{2, 2}] == 1)
        return "A";

    else if (m[{0, 0}] == 0 && m[{1, 0}] == 0 && m[{2, 0}] == 0)
        return "B";
    else if (m[{0, 0}] == 1 && m[{1, 0}] == 1 && m[{2, 0}] == 1)
        return "A";

    else if (m[{0, 1}] == 0 && m[{1, 1}] == 0 && m[{2, 1}] == 0)
        return "B";
    else if (m[{0, 1}] == 1 && m[{1, 1}] == 1 && m[{2, 1}] == 1)
        return "A";

    else if (m[{0, 2}] == 0 && m[{1, 2}] == 0 && m[{2, 2}] == 0)
        return "B";
    else if (m[{0, 2}] == 1 && m[{1, 2}] == 1 && m[{2, 2}] == 1)
        return "A";

    else if (m[{0, 2}] == 0 && m[{1, 1}] == 0 && m[{2, 0}] == 0)
        return "B";
    else if (m[{0, 2}] == 1 && m[{1, 1}] == 1 && m[{2, 0}] == 1)
        return "A";

    if (moves.size() == 9)
        return "Draw";
    if (moves.size() < 9)
        return "Pending";

    return "Pending";
}

int main()
{
    vector<vector<int>> moves;

    moves.push_back({0, 0});

    moves.push_back({1, 1});

    cout << tictactoe(moves);

    return 0;
}