
#include <map>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int findadjacent(vector<vector<int> > &grid, int i, int j, int r, int c)
{

    int top;
    int right;
    int left;
    int bottom;

    if (i - 1 < 0)
        top = 1;

    else if (grid[i - 1][j] == 1)
        top = 0;

    else if (grid[i - 1][j] == 0)
        top = 1;

    if (j + 1 > c)
        right = 1;

    else if (grid[i][j + 1] == 1)
        right = 0;

    else if (grid[i][j + 1] == 0)
        right = 1;

    if (i + 1 > r)
        bottom = 1;

    if (grid[i + 1][j] == 1)
        bottom = 0;

    if (grid[i + 1][j] == 0)
        bottom = 1;

    if (j - 1 < 0)
        left = 1;

    if (grid[i][j - 1] == 1)
        left = 0;

    if (grid[i][j - 1] == 0)
        left = 1;
    cout << endl;
    cout << "top: " << top << "bottom: " << bottom << "left: " << left << "right: " << right << endl;
    int sum = top + bottom + left + right;

    return sum;
}

// int islandPerimeter(vector< vector<int> > &grid)
// {

// }

int main()
{

    vector<int> row1;
    vector<int> row2;
    vector<int> row3;
    vector<int> row5;
    vector<int> row6;

    row1.push_back(0);
    row1.push_back(1);
    row1.push_back(0);
    row1.push_back(0);

    row2.push_back(1);
    row2.push_back(1);
    row2.push_back(1);
    row2.push_back(0);

    row3.push_back(0);
    row3.push_back(1);
    row3.push_back(0);
    row3.push_back(0);

    row5.push_back(1);
    row5.push_back(1);
    row5.push_back(0);
    row5.push_back(0);

    row6.push_back(1);
    row6.push_back(1);
    row6.push_back(0);
    row6.push_back(0);

    vector<vector<int> > grid;

    grid.push_back(row1);
    grid.push_back(row2);
    grid.push_back(row3);
    grid.push_back(row5);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << grid[i][j];
        }

        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " ";

            if (grid[i][j] == 1)
                cout << "adjacent of" << i << " " << j << " is : " << findadjacent(grid, i, j, grid.size(), grid[i].size()) << " ";
        }

        cout << endl;
    }
}