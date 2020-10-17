#include <vector>
#include <iostream>
using namespace std;

    unsigned long long int factorial(unsigned long long int n)
    {

        if (n == 0 || n == 1)
            return 1;

        return n * factorial(n - 1);
    }

    int trailingZeroes(unsigned long long int n)
    {
        int count = 0;
        unsigned long long int ans = factorial(n);

        int d = ans % 10;

        while (d == 0)
        {
            cout << "entered";
            ans = ans / 10;

            d = ans % 10;
            count++;
        }

        return count;
    }

    int main()
    {

        cout << factorial(30) << endl;

        cout << trailingZeroes(30);
        return 0;
    }
