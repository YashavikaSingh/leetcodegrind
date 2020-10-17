
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string rotate(string A)
{
    char a = A[0];
    int l = A.length() - 1;
    string B = A.substr(1, l);

    return (B + a);
}

bool rotateString(string A, string B)
{
    for (int i = 0; i < A.length(); i++)
    {
        A = rotate(A);
        cout << "after  rotating A once: " << A << endl;
        if (A.compare(B) == 0)
            return true;
    }

    return false;
}

int main()
{

    cout << rotateString("abcde", "cdeab");
    return 0;
}