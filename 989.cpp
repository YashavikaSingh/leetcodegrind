
#include <map>
#include <vector>
#include <iostream>
using namespace std;

vector<int> addToArrayForm(vector<int> &A, int K)
{

    //making the size of the vector equal to the number of digits in K, so I insert zeroes in A, whenever the the digits in K are more than the digits in A
    int t = K;
    int count = 0;
    while (t != 0)
    {
        t = t / 10;
        count++;
    }

    if (A.size() < count)
    {
        for (int i = 0; i < A.size() - count; i++)
            A.insert(A.begin(), 0);
    }

    int l = A.size() - 1;
    int n = K;
    int d;

//gonna add last digit to last position in the vector
    while (n != 0 && l >= 0)
    {
        d = n % 10;
        n = n / 10;
        cout << "l: " << l << endl;
        A[l] = A[l] + d;
        cout << "A[l]" << A[l] << endl;

        //carry over
        if (A[l] > 9)
        {
            int a = l - 1;
            int b = l;

            while (A[b] > 9)
            {
                if (b == 0 && a == -1)
                {
                    A[b] = A[b] % 10;

                    A.insert(A.begin(), 1);
                    break;
                }

                A[b] = A[b] % 10;
                A[a]++;
                cout << "A[a] A[b]" << A[a] << " " << A[b] << endl;
                b = a;
                a--;
            }
        }

        l--;
    }

    return A;
}

int main()
{

    vector<int> A{0};

    vector<int> ans = addToArrayForm(A, 23);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i];
    return 0;
}