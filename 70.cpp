#include <iostream>
using namespace std;
long long fact(long long n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
unsigned nCr(unsigned n, unsigned k)
{
    if (k > n)
        return 0;
    if (k * 2 > n)
        k = n - k;
    if (k == 0)
        return 1;

    int result = n;
    for (int i = 2; i <= k; ++i)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

unsigned climbStairs(int n)
{
    if (n % 2 == 0)
    {
        unsigned N = n;
        unsigned p = 1;
        unsigned sum = 1;
        N = n - 1;
        while (N >= n / 2)
        {
           
            
            sum += nCr(N, p);
            N--;
            p++;
        }
        return sum;
    }

    if (n % 2 != 0)
    {
        unsigned N = n;
        unsigned p = 1;
        unsigned sum = 1;
        N = n - 1;
        while (N >= (n / 2)+1)
        {
            cout<<"N:  "<<N<<"p: "<<p;
                cout<<"ncr: "<<nCr(N,p)<<endl;
            sum += nCr(N, p);
            N--;
            p++;
        }
        return sum;
    }
    return 0;
}

int main()
{
 
    cout << "ncr of 13 2: " << nCr(13, 2) << endl;
    cout << climbStairs(16);

    return 0;
}