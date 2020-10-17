
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int countGoodTriplets(vector<int> &arr, int a, int b, int c)
{
    int count = 0;

    int i = 0, j = 0, k = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i+1; j < arr.size() ; j++)
        {
            for (int k = j+1; k < arr.size(); k++)
            {

                int sum1 = abs(arr[i] - arr[j]);
                int sum2 = abs(arr[j] - arr[k]);
                int sum3 = abs(arr[i] - arr[k]);

                if (sum1 <= a && sum2 <= b && sum3 <= c)
                    count++;
            }
        }
    }

    return count;
}

int main()
{

    vector<int> t{3, 0, 1, 1, 9, 7};

    cout << countGoodTriplets(t, 7, 2, 3) << endl;

    return 0;
}