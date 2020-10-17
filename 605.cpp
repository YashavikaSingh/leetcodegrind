#include <vector>
#include <iostream>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{

    if (flowerbed.size() == 1)
    {
        if (n == 1)
        {
            if (flowerbed[0] == 0)
                return 1;

            return 0;
        }

        if (n == 0)
            return 1;
    }

    if (flowerbed[0] == 0 && flowerbed[1] == 0 && n>0)
    {

        flowerbed[0] = 1;
        n--;
    }
    for (int i = 1; i < flowerbed.size() - 1 && n>0; i++)
    {
        if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
        {
            flowerbed[i] = 1;
            n--;
        }
    }

    if (flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0 && n>0) 
    {
        flowerbed[flowerbed.size() - 1] = 1;
        n--;
    }

    for (int i = 0; i < flowerbed.size(); i++)
        cout << flowerbed[i] << " ";

    cout << endl;

    cout << "n: " << n << endl;

    if (n == 0)
        return true;

    return false;
}
    


int main()
{
    vector<int> flowerbed;

    flowerbed.push_back(0);
    flowerbed.push_back(0);
    flowerbed.push_back(1);
    flowerbed.push_back(0);
    flowerbed.push_back(0);
   


    cout << canPlaceFlowers(flowerbed, 1) << endl;
    return 0;
}