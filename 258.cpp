#include <iostream>
using namespace std;

int addDigits(int num)
{

   while(num > 9)
    {
        int sum = 0;
        while (num != 0)
        {
            int d = num % 10;
            num = num / 10;

            sum += d;
        }

        num = sum;
    }

    return num;

}

int main(){

    cout<<addDigits(1925);

    return 0;
}