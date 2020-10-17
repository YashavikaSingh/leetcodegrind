#include <vector>
#include <iostream>
using namespace std;

bool isOneBitCharacter(vector<int> &bits)
{

    bool jumped1;
    int i;
    for (i = 0; i < bits.size();)
    {
        if (bits[i] == 1)
        {
            i = i + 2;
            jumped1 = false;
            continue;
        }

        if (bits[i] == 0)
        {
            i++;
            jumped1 = true;
            continue;
        }

    }
 

 return jumped1;
}

int main()
{

    vector<int> bits;
    bits.push_back(1);
   
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(1);
    bits.push_back(0);


    cout << isOneBitCharacter(bits);

    return 0;
}