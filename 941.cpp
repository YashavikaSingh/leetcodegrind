#include <vector>
#include <iostream>
using namespace std;

bool validMountainArray(vector<int> &A)
{

if(A.size()==0)
return false;



if(A.size()==1)
return true;

    bool hastodecrease = false;
    bool hastoincreased = false;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < A[i + 1])
            break;



        return false;
    }

    for (int i = 0; i < A.size() - 1; i++)
    {

        if (A[i] == A[i + 1])
            return false;

        if (hastodecrease == false && A[i + 1] < A[i])
        {
            hastodecrease = true;
        }

        if (hastodecrease == true && A[i] < A[i + 1])
            return false;
    }

    if (hastodecrease == true)
        return true;

    if (hastodecrease == false)
        return false;

    return false;
}

int main()
{

    vector<int> A;

    // A.push_back(0);
    // A.push_back(2);
    // A.push_back(3);
    // A.push_back(4);
    // A.push_back(5);
    // A.push_back(2);
    A.push_back(5);
    A.push_back(2);
    A.push_back(1);
    A.push_back(0);
    cout << validMountainArray(A);
    return 0;
}