#include <iostream>
using namespace std;

int numberOfSteps(int num)
{

    int count = 0;
    while (num)
    {

        if (num % 2 == 0)
        {
            num = num / 2;
            count++;
        }

        else
        {
            num--;
            count++;
        }
    }
    return count;
}

int main()
{

    cout << numberOfSteps(123);
    return 0;
}