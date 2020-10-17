#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// if (A.size() == 1)
//     return true;

// //if everything is equal, i hate these testcases

// int t;
// for (t = 0; t < A.size() - 1; t++)
// {

//     cout << A[t] << " " << A[t + 1] << endl;
//     if (A[t] != A[t + 1])
//         break;
// }
// if (t == A.size() - 1)
// {
//     cout << "returning from from here" << endl;
//     return true;
// }
// //what if the first two are equal
// if (A[0] == A[1])
// {

//     cout << "entered equal case: " << endl;

//     A.erase(A.begin(), A.begin() + 2);

//     for (int i = 0; i < A.size(); i++)
//         cout << A[i] << " ";

//     cout << endl;
//     return isMonotonic(A);
// }

bool isMonotonic(vector<int> &A)
{


//converting 

    //decreasing case
    if (A[0] > A[1])
    {

        cout << "entered decreasign case: " << endl;
        for (int i = 1; i < A.size() - 1; i++)
        {
            //decreasing but started increasing
            if (A[i] < A[i + 1])
            {
                cout << "false from decreasing" << endl;
                return false;
            }
        }

        return true;
    }

    //increasing case
    if (A[1] > A[0])
    {

        cout << "entered increasing case: " << endl;
        for (int i = 1; i < A.size() - 1; i++)
        {
            //increasing but started decreasing
            if (A[i] > A[i + 1])
            {

                cout << "false from increasing" << endl;
                return false;
            }
        }

        return true;
    }

    return false;
}

int main()
{

    vector<int> v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);

    cout << isMonotonic(v);
    return 0;
}