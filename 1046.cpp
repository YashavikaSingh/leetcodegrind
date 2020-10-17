
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int lastStoneWeight(vector<int> &stones)
{

    while (stones.size() != 0 && stones.size() != 1)
    {
        make_heap(stones.begin(), stones.end());

        int max1 = stones.front();
        pop_heap(stones.begin(), stones.end());
        stones.pop_back();

        int max2 = stones.front();
        pop_heap(stones.begin(), stones.end());
        stones.pop_back();

        stones.push_back(max1 - max2);
        push_heap(stones.begin(), stones.end());
    }

    if (stones.size() == 1)
        return stones.front();

    return 0;
}

int main()
{
    vector<int> stones;
    stones.push_back(2);
    stones.push_back(7);
    stones.push_back(4);
    stones.push_back(1);
    stones.push_back(8);
    stones.push_back(1);

    cout << lastStoneWeight(stones);
    return 0;
}