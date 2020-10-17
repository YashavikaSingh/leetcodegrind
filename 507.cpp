
#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool checkPerfectNumber(int num)
{

    vector<int> factors;

    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            factors.push_back(i);

            if (i != sqrt(num) && i != 1)
                factors.push_back((num / i));
        }
    }

    int sum = 0;
    for (int i = 0; i < factors.size(); i++)
    {
        cout << factors[i] << " ";
        sum += factors[i];
    }

    cout << endl;
    cout << sum;

    return (sum == num);
}

int main()
{
    cout << checkPerfectNumber(28);
    return 0;
}
